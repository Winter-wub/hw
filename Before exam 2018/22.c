#include<stdio.h>

int main(){
	int array[10],i,j,temp;
	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
				if(array[j] > array[i]){
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}	
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
