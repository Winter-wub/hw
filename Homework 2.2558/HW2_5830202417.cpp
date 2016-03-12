#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int strpos(const char *s, const char c);
int main(){
	int i=8,j=5;
	double x=0.005,y=0.01;
	char c='c',d='d';
	printf("Libary Function		Result(%%d)");
	printf("\na.abs <math.h>  	%d",abs(i-2*j));
	printf("\nb.fabs <math.h>		%d",fabs(x+y));
	printf("\nc.isprint <ctype.h>	%d",isprint(c));
	printf("\nd.isdigit <ctype.h>	%d",isdigit(c));
	printf("\ne.toupper <ctype.h>	%d",toupper(d));
	printf("\nf.ceil <math.h>		%d",ceil(x));
	printf("\ng.floor <math.h>	%d",floor(x));
	printf("\nh.islower <ctype.h>	%d",islower(c));
	printf("\ni.isupper <ctype.h>	%d",isupper(j));
	printf("\nj.exp <math.h>		%d",exp(x));
	printf("\nk.log <math.h>		%d",log(x));
	printf("\nl.sqrt <math.h>		%d",sqrt(x*x+y*y));
	printf("\nm.pow <math.h>		%d",pow(x-y,3.0));
	printf("\nn.strlen <string.h>	%d",strlen("hello\0"));
	printf("\no.strpos		%d",strpos("hello",'e'));
	printf("\np.isalnum <ctype.h>	%d",isalnum(10*j));
	printf("\nq.isalpha <ctype.h>	%d",isalpha(10*j));
	printf("\nr.isascii <ctype.h>	%d",isascii(10*j));
	
	return 0;
}

int strpos(const char *s, const char c);
 int strpos( const char *myString, char myChar ) 
 { 
   char *p = strchr( myString, myChar );; 
   return p ? p-myString : -1; 
 } 
