 #include <stdio.h>
 void main()
 {
 	int max(int x,int y);//ĞÎ²Î 
 	int a,b,c;
 	scanf("%d,%d",&a,&b);
 	c = max(a,b);
 	printf("max is %d\n",c);
 }
 int max(int x,int y){
 	int z;
	z=x>y?x:y;
	return z;
}
 
 	
