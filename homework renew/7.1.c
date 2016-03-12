#include <stdio.h>
void main (){
	int n,i,max,min,mean,sum;
	printf("Enter Num :");scanf("%d",&n);
	int x[n];
	for (i=1;i<=n;i+=1){
		printf("#%d : ",i);scanf("%d",&x[i]);
		sum+=x[i];
		min=x[1];
		if(min>x[i]){
			min=x[i];
		}
		else if(max<x[i]){
			max=x[i];
		}
	}
	mean=sum/n;
	printf("Min = %d Max = %d mean = %d",min,max,mean);
}.
