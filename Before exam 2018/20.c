#include<stdio.h>

int main(){
	int money,ten=0,five=0,two=0,one=0;
	int i;
	printf("Enter money  ");
	scanf("%d",&money);
	
	while(money != 0){
		if(money >= 10){
			ten++;
			money-=10;
		}else if(money >=5){
			five++;
			money-=5;
		}else if(money >=2){
			two++;
			money-=2;
		}else if(money >=1){
			one++;
			money-=1;
		}
	}
	
	printf("10 Coin  = %d\n",ten);
	printf("5 Coin  = %d\n",five);
	printf("2 Coin  = %d\n",two);
	printf("1 Coin  = %d\n",one);
	
}
