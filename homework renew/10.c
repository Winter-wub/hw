#include<stdio.h>
void main(){
	int m,i;
	scanf("%d",&m);
	printf("x\t x^2\n");
	for(i=1;i<=m;i++){
		printf("%d\t%d\n",i,i*i);
	}
}
