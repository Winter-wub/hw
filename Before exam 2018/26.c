#include<stdio.h>

float cycle(float r){
	return 3.14 * (r*r);
}

float square (float base,float height){
	return base * height;
}

float trigle (float base,float height){
	return 0.5 * base * height;
}

int main(){
	float a,b;
	printf("Calculate cycle area : ");
	printf("\nInput radius : ");
	scanf("%f",&a);
	printf("Area = %.3f\n",cycle(a));
	
	printf("Calculate square area : ");
	printf("\nInput base : ");
	scanf("%f",&a);
	printf("Input height : ");
	scanf("%f",&b);
	printf("Area = %.3f\n",square(a,b));
	
	printf("Calculate trigle area : ");
	printf("\nInput base : ");
	scanf("%f",&a);
	printf("Input height : ");
	scanf("%f",&b);
	printf("Area = %.3f\n",trigle(a,b));
	
	return 0;
}
