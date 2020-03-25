#include <stdio.h>
#include <math.h>
void main(){
	
	int question=49,answer;
	int sqrt_01(int question);
	answer = sqrt_01(question);
	if(question<0){
		printf("´íÎó£¡");
	}else{
		printf("%.2fis%.2f",question,answer);
	} 
}
int sqrt_01(int question)\
{
	int temp;
	while(1){
	
	if(temp*temp==question)
		return temp;
	else
		temp-=1; 
	}
}


