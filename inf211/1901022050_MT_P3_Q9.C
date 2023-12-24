#include<stdio.h>

/*calculate and display the results of a+c, t+c, y+t,  a+t, s+b, w+b, s+c, w+c, w+pp*/

int main()
{
	int a=200,b=12345,s=4043;
	long int w=1234567890;
	float y=1.1415927,t=2.13459;
	unsigned int pp=2541567890u;
	char c='K';
	
	printf("a+c=%d\n",a+c);
	printf("t+c=%f\n",t+c);
	printf("y+t=%f\n",y+t);
	printf("a+t=%f\n",a+t);
	printf("s+b=%d\n",s+b);
	printf("w+b=%d\n",w+b);
	printf("s+c=%d\n",s+c);
	printf("w+c=%d\n",w+c);
	printf("w+pp=%u\n",w+pp);
	
	return(0);
}
