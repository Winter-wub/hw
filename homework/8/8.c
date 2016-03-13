#include<stdio.h>
int main()
{
	int m,n,i,a,gcd=1,lcm;
	printf("NUM 1 : "); scanf("%d",&m);
	printf("NUM 2 : "); scanf("%d",&n);
	if(m>n){
		a=n;
	}else{
		a=m;
	}
	for(i=1;i<=a;i++){
		if ((m%i==0)&&(n%i==0)){
			gcd=i;
		}	
	}
	lcm = m*n/gcd;
	printf("\nGCD = %d\n",gcd);
	printf("LCM = %d\n",lcm);
}

