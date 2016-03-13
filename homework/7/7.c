#include <stdio.h>
void main (){
	int n,i,max,min,mean,sum;
	printf("Enter Num :");scanf("%d",&n);
	int num[n];
	for (i=1;i<=n;i++){
		printf("#%d : ",i);scanf("%d",&num[i]);
		sum+=num[i];
	}
	min=num[1];
	for(i=1;i<=n;i++){
		if(min>num[i]){
			min=num[i];
		}
		else if(max<num[i]){
			max=num[i];
		}
	}
	mean=sum/n;
	printf("Min = %d Max = %d mean = %d",min,max,mean);
}
