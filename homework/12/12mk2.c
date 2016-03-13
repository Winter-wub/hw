#include<stdio.h>
int main(){
	int i,j,N;
	scanf("%d",&N);
	int x[N][N];
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-1;j++){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-(i+1);j++){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-(i+1);j++){
			x[i][j] = j+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-(i+1);j++){
			x[i][j] = j+1;
		}for(j=0;j<=N-1;j++){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

