#include<stdio.h>

int main() {
	int i,j,k,input,sloop;
	scanf("%d",&input);
	for(i=0;i<input;i++){
		
		for(j=1;j<(input - i -1);j++){
			printf(" ");
		}
		
		for(k=0;k<=((2*i)+1) ;k++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
