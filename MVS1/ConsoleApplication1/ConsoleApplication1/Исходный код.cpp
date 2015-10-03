#include <stdio.h>
double pi = 3.14;
void Test()
{
	static int n=0;
	int m = 0;
	n++; m++;
	printf("%d %d \n", n, m);
}
void main()
{
	int dara[250][1000];
	Test();
	Test();
	
}