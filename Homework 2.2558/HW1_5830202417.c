#include <stdio.h>
#define pi 3.14;
float vol (float,float);
float area (float);
int main (){
	float r,h;
	printf("Enter Height :");scanf("%f",&h);
	printf("\nEnter Radius :");scanf("%f",&r);
	printf("\n%.2f = %.2f x %.2f ",vol(h,r),area(r),h);
	printf("\n(Volume = Area x Height )");
}
float vol (float h,float r){
	return r*r*h*pi;
}
float area (float r){
	return r*r*pi;
}
