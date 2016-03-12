#include <stdio.h>
void main (){
	int n,i,j,max,min,mean,sum;
	printf("Enter Num :");scanf("%d",&n);
	int num[n];
	for (i=1;i<=n;i++){
		printf("#%d : ",i);scanf("%d",&num[i]);
		sum+=num[i];
	}
	min=num[1];
	for(j=1;j<=n;j++){
		if(min>num[j]){
			min=num[j];
		}
		else if(max<num[j]){
			max=num[j];
		}
	}
	mean=sum/n;
	printf("Min = %d Max = %d mean = %d",min,max,mean);
}
