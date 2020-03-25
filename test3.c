#include<stdio.h>
void main(){
	float add(float x,float y);
	//对被调用的函数add的声明
	float a,b,c;
	scanf("%f,%f",&a,&b);
	c=add(a,b); 
	printf("和是：%f\n",c);
} 

float add(float x , float y){
	float z;
	z= x + y;
	return z; 
} 
