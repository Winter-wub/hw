#include<stdio.h>

int main(){
	int i,j;
	for(i=2;i<=12;i++){
		for(j=2;j<=3;j++){
			if(j<=3-1){
				printf("%d x %d = %d",j,i,i*j);
			}else{
				printf("  %d x %d = %d",j,i,i*j);
			}
		}
		printf("\n");
	}
	return 0;
}
