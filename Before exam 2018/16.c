#include<stdio.h>

int main(){
	int num[10],i,min=9999999,max=-99999999;
	for(i=0;i<10;i++){
		printf("#%d : ",i+1);
		scanf("%d",&num[i]);
		if(min > num[i]){
			min = num[i];
		}
		if(max < num[i]){
			max = num[i];
		}
	}
	printf("\nMax : %d\n",max);
	printf("Min : %d",min);
	return 0;
}
