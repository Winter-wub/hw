#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	float avg;
	printf("How many number? ");
	scanf("%d",&n);
	int x[i],sum=0;
	for(i=0;i<n;i++){
		printf("X = ");
		scanf("%d",&x[i]);
		if( x[i] < 0){
			x[i] = abs(x[i]);
		}
		sum+=x[i];
	}
	avg=(float)sum/n;
	printf("\nThe Average is %f",avg);
}
