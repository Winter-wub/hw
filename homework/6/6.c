#include<stdio.h>
void main(){
 int sum,i,n;
 printf("Fuck many Student");
 scanf("%d",&n);
 int x[n];
 for (i=1;i<=n-1;i++){
 	printf("\na[%d] =",i6);
 	scanf("%d",&x[i]);
 	if (80<=x[i]&&100>=x[i]){
 		printf("Grade = G 'Good'");
		}
	else if (50<=x[i]&&80>x[i]){
		printf("Grade = P 'Pass'");
		}
	else if (0<=x[i]&&50>x[i]){
		printf("Grade = F 'Fail'");
		}
	}
	
}
