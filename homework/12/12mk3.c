#include<stdio.h>
int main(){
	int i,j,N,a;
	scanf("%d",&N);
	int x[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			x[i][j] = i+1;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	
}



