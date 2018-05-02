#include<stdio.h>

int main(){
	int num,i;
	printf("odd\n");
	for(i=1;i<=100;i++){
		if(i%2 == 0){
			printf("%d ",i);
		}
	}
	printf("\neven \n");
	for(i=1;i<=100;i++){
		if(i%2 != 0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
