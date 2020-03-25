//汉诺塔
#include <stdio.h>
void move(char x,char y);
void hanoi(int n,char one,char two,char three);

int  main(){
	
	int m ;
	printf("input the number of disks: ");
	scanf("%d",&m);
	printf("the step to moving %d diskes:\n",m );
	hanoi(m,'A','B','C');
	return 0;
} 

void hanoi(int n,char one,char two,char three)
//定义hanoi函数，将n个盘从one座移动到three座 
{
	void move(char x,char y);
		if(n==1)  move(one,three);
			
		else
		{
			hanoi(n-1,one,three,two);
			move(one,three);
			hanoi(n-1,two,one,three);		
		}
 
}
void move(char x,char y)
{
	printf("%c-->%c\n",x,y);
}

