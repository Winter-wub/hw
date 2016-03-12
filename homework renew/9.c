#include<stdio.h>
#include<math.h>
main(){
	int Y;
	float M,R,Income[13];
	printf("Invested Money(M) : ");
	scanf("%f",&M);
	printf("Invested Rate(R) : ");
	scanf("%f",&R);
	R=R/100;
	printf("\nYEAR\tINCOME\n");
	for(Y=1;Y<=4;Y++){
		Income[Y]=M*pow((1+R),Y);
		printf("%d\t%0.2f\n",Y,Income[Y]);
	}
}

