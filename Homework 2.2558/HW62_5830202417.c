#include<stdio.h>
#include<math.h>
main(){
	int n,i;
	printf("Enter number :");
	scanf("%d",&n);
	printf("n n^2");
	for(i=1;i<=n;i++){
		printf("\n%d %.0f",i,pow(2,i));
	}
}
