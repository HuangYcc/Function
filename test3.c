#include<stdio.h>
void main(){
	float add(float x,float y);
	//�Ա����õĺ���add������
	float a,b,c;
	scanf("%f,%f",&a,&b);
	c=add(a,b); 
	printf("���ǣ�%f\n",c);
} 

float add(float x , float y){
	float z;
	z= x + y;
	return z; 
} 
