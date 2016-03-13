#include <stdio.h>
int calculat(int);
void main (){
	int n;
	printf("Input = ");scanf("%d",&n);
	printf(" Sum = %d",calculat(n));
	
}
int calculat (int n){
	int sum,count=2;
	while (count <= n){
		printf("%d ",count);
		sum = sum + count;
		count=count+2;
	}
	return sum;
}
