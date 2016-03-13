#include<stdio.h>
void main (){
	int i,j,n;
	scanf("%d",&n);
	int x[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j+=1){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=n;i++){
		for(j=0;j<=n-(i+1);j++){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	for(i=n;i<=n;i++){
		for(j=0;j<=n-(i+1);j++){
			x[i][j] = j+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	
		printf("\n");
	
}
