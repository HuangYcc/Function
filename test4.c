#include <stdio.h>
#include <math.h>

int main()
{
	double power(double x,double y);
	double x=2.0,y=3.0,result;
	result = power(2.0,3.0);
	printf("½á¹û£º%f\n",result);
	return 0; 
}

double power(double x,double y){
	double i=1.0 , z=1;
	
	while(i <= y){
		z=x*z;
		i++;
	}
	return z;
}
