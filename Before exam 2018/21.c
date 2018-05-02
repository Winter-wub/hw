#include<stdio.h>

int plus(int array[] , int n) {
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=array[i];
	}
	return sum;
}

int minus(int array[] , int n) {
	int i,sum=0;
	for(i=0;i<n;i++){
		sum-=array[i];
	}
	return sum;
}

int mul(int array[] , int n) {
	int i,sum=array[0];
	for(i=1;i<n;i++){
		sum*=array[i];
	}
	return sum;
}

int div(int array[] , int n) {
	int i,sum=array[0];
	for(i=1;i<n;i++){
		sum/=array[i];
	}
	return sum;
}



int main(){
	int n,i,op;
	printf("enter n: ");
	scanf("%d",&n);
	int array[n];
	
	for(i=0;i<n;i++){
		printf("input %c : ",65+i);
		scanf("%d",&array[i]);
	}
	
	printf("Enter operator (+,-,*,/) : ");
	op = getche();
	
	switch (op){
		case '+' :
			printf("\nequal is %d ",plus(array,n));
			break; 
		case '-' :
			printf("\nequal is %d ",minus(array,n));
			break; 
		case '*' :
			printf("\nequal is %d ",mul(array,n));
			break; 
		case '/' :
			printf("\nequal is %d ",div(array,n));
			break;  
	}
	
	return 0;
}
