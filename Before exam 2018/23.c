#include<stdio.h>
#include<string.h>

int main(){
	char *week[7];
	char input[20];
	int i;
	for(i=0;i<7;i++){
		
		switch (i) {
			case 0 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 1 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 2 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 3 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 4 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 5 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			case 6 : 
				printf("Day %d :",i+1);
				scanf("%s",&input);
				week[i] = input;
				break;
			default : 
				break;
		}
	}
	return 0;
}
