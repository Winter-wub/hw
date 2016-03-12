#include<stdio.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	int x[n][n];
	for (i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			x[i][j] = i+1;
			if(i=2){
				i=0;
			}
			else if(j=2){
				j=0;			}
			printf(" %d ",x[i][j]);
			
		}
	printf("\n");
	}
	printf("\n");
	for (i=0;i<n;i+=1){
		for(j=0;j<=n-(i+1);j+=1){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	for (i=0;i<n;i+=1){
		for(j=0;j<=n-(i+1);j+=1){
			x[i][j] = j+1;
			printf(" %d ",x[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	for(i=n;i>0;i-=1){
		for(j=n;j>0;j-=1){
		x[i][j] = j;
		printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	
	
}
