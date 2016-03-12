#include <stdio.h>
#include <math.h>
void main (){
	int n,i,y;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d\t%.f\n",i,pow(2,(double)i));
	}
}
