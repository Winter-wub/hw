#include<stdio.h>
void main (){
	float m,op,i,r,income;
	scanf("%f",&m);
	scanf("%f",&r);
	for (i=1;i<=4;i++){
		income=m*(1+r)*i;
		printf("%d ",(int)i);
	}
	printf("%0.2f\n",income);
}
