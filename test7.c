//½×³Ë
#include <stdio.h>
void main()
{
	int factorical(int n);
	int n;
	int result;
	printf("ÊäÈë£º"); 
	scanf("%d",&n);
	
	result = factorical(n);
	printf("%d£¡µÄ½×³ËÊÇ = %ld\n",n,result);
} 
int factorical(int n)//½×³Ë 
{
	int result;
	if(n<0){
		printf("error!\n");
	}else if(n==0 || n==1){
		result = 1;
	}else{
		result = n*factorical(n-1);
	}
	return result ;	
} 





