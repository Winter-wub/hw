#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int closetChar(char []);

int main(){
	srand(time(NULL));
	char C[N];
	int i;
	printf("initial array : ");
	for(i=0;i<N;i++){
		C[i] = 65 + rand()%(26);
		printf("%c ",C[i]);
	}
	printf("\n\n");
	int CC;
	if(CC = closetChar(C)){
		printf("%c ", CC);
	}
	
	return 0;
}

int closetChar(char D[]){
	int i,j,min=10*N;
	char S = 0;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(D[i]==D[j]){
				min = j-i;
				S = D[i];
				break;
			}	
		}
	}
	return S;
}
