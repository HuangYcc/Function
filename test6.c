/*ͳ�ƿո��Ʊ�������з�*/ 
#include <stdio.h>
int main(){
	int c,nb,nt,nl;
	while((c=getchar())!= EOF)
	{
		if(c==' ')
			++nb;
		if(c=='\t')
			++nt;
		if(c=='\n')
			++nl;
	}
	printf("%d %d %d \n",nb,nt,nl);
	return 0;
} 


