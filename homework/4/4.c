#include <stdio.h>
int seq(int);
void main (){
	int n;
	printf("Input = ");scanf("%d",&n);
	printf(" Sum = %d",seq(n));
}
int seq (int n){
	int count,sum;
	for (count=15;count<=n;count=count+15){
		printf("%d ",count);
		sum = sum + count;
		}
    return sum;
}
