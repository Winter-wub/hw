#include <stdio.h>
int sum(int);
void main (){
 int i;
 printf("input = ");scanf("%d",&i);
 printf("\nsum = %d",sum(i));
}
int sum (int i){
	int sum;
	for (i;i>=0;i--){
 	printf("%d ",i);
 	sum = sum + i;
 }
 return (sum);	
}
