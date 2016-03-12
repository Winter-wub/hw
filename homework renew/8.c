#include<stdio.h>
void main (){
	int gcd,m,n,lcm,a,i;
	printf("input(m)= ");scanf("%d",&m);
	printf("input(n)= ");scanf("%d",&n);
	if(m>n){
		a=n;
	}else{
		a=m;
	}
	for(i=1;i<=a;i++){
		if((m%i==0)&&(n%i==0)){
			gcd=i;
		}
	}
	lcm = m*n/gcd;
	printf("\nGCD = %d\nLCM = %d",gcd,lcm);
}
