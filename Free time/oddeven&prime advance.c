//library
#include<stdio.h>
//fuction declartion
void oddeven(int num[],int size); 
void prime(int num[],int size);
//main of programe
int main(){
	int count=0,i;
	printf("Input Loop :");
	scanf("%d",&count); //array size
	int num[count];
	for(i=1;i<=count;i++){ //input value 1 to count
		printf("X%d : ",i);
		scanf("%d",&num[i]);
	}
//input num at count to fucntion
	oddeven(num,count); 
	prime (num,count);
	return 0;
}
//fuction pototype "odd&even"
void oddeven(int num[],int size){ //revice num form main and array size form main
	int i;
	printf("\nList of Cheack Odd & Even\n");
	for(i=1;i<=size;i++){ // loop for cheack num form main
		if( num[i] % 2 == 0){ // loop for cheack odd & even form num array
			printf("%d is Odd\n",num[i]);
		}
		else {
			printf("%d is Even\n",num[i]);
		}
	}
}
//fuction pototype "prime"
void prime (int num[],int size){ //recive num form main and array size form main
	int i,j,status;
	printf("\nList of Check Prime Natural Number");
	for(i=1;i<=size;i++){ // loop for cheack num form main
		for(j=2;j<=num[i]-1;j++){ // loop for cheack prime form num array
			if (num[i] % j == 0){
			status=1;
			}
		}
		if(status == 1) { //result of num
		printf("\n%d isn't prime",num[i]);
		}
		else {
		printf("\n%d is prime",num[i]);
		}
	}
}
