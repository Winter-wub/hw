#include<stdio.h>
main(){
	int i,j,s=0;
	for(i=0;i<=12;i++){   //flower
		for(j=0;j<=57;j++){ 
		if(i == 0 && j == 8){
			while( s < 31){
				printf("*");
				s++;
			}
		}
		else if (i == 1 && j == 6) {
			s=0;
			while(s < 34){
				printf("*");
				s++;
			}
		}
		else if( i==2 && j == 5){
			s=0;
			while(s<37){
				printf("*");
				s++;
			}
		}
		else if ( i==3 && j == 4){
			s=0;
			while(s<39){
				printf("*");
				s++;
			}
		}
		else if ( i==4 && j == 3){
			s=0;
			while(s<41){
				printf("*");
				s++;
			}
		}
		else if ( i==5 && j == 2){
			s=0;
			while(s<43){
				printf("*");
				s++;
			}
		}
		else if ( i==6 && j == 2){
			s=0;
			while(s<43){
				printf("*");
				s++;
			}
		}
		else if ( i==7 && j == 2){
			s=0;
			while(s<43){
				printf("*");
				s++;
			}
		}
		else if ( i==8 && j == 3){
			s=0;
			while(s<41){
				printf("*");
				s++;
			}
		}
		else if ( i==9 && j == 4){
			s=0;
			while(s<39){
				printf("*");
				s++;
			}
		}
		else if ( i==10 && j == 5){
			s=0;
			while(s<37){
				printf("*");
				s++;
			}
		}
		else if (i == 11 && j == 6) {
			s=0;
			while(s < 34){
				printf("*");
				s++;
			}
		}
		else if(i == 12 && j == 8){
			s=0;
			while( s < 31){
				printf("*");
				s++;
			}
		}
		
		else {
			printf(" ");
		}
			
		}
	printf("\n");	
	}
	for(i=0;i<=11;i++){  //stick & leaf
		for(j=0;j<=57;j++){
			if( i < 5 & j == 23){
				printf("*");
			}
			else if (i == 5 && j == 10 ){
				s = 0;
				while ( s < 12 ){
					printf("*");
					s++;
				}
				printf("*\t");
				s = 0;
				while ( s < 12 ){
					printf("*");
					s++;
				}
			}
			else if (i == 6 && j == 8 ){
				s = 0;
				while ( s < 15 ){
					printf("*");
					s++;
				}
				printf(" ");
				s = 0;
				while ( s < 15 ){
					printf("*");
					s++;
				}
			}
			else if (i == 7 && j == 10 ){
				s = 0;
				while ( s < 12 ){
					printf("*");
					s++;
				}
				printf("*\t");
				s = 0;
				while ( s < 12 ){
					printf("*");
					s++;
				}
			}
			else if ( i > 7 && j == 23){
				printf("*");
			}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
	puts("Make Flower with 'FOR LOOP'\nBy Prachayawut Sirisuth 5830202417 S09");
}
