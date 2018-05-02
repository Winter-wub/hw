#include<stdio.h>
main (){
	int i,j,num;
	scanf("%i",&num);
	for(i=2;i<=num;i++){
		for(j=1;j<=12;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}
