/*write a program to calculate the value of sin(x) using expansion*/
#include<stdio.h>
#include<math.h>

int main()
{
	int n=1,i,fact;//inputs
	int limit;//input-number entered by user
	float x,y=0,r;//x=degree,r=radian,y=result
	printf("enter the degree of sinx:");
	scanf("%f",&x);
	
	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);
	//Converting degrees to radian
	r=(3.1415)*x/180;

	for(n=1;n<=limit;n++){//sinx series loop
	
	fact=1;
	for(i=1;i<=(2*n-1);i++){//factorial loop
	fact=fact*i;}
	
	y=y+(pow(-1,n-1)*pow(r,2*n-1)/fact);//calculate result

	}
	printf("sin(%0.1f)=(%f)=%f",x,r,y);//display sinx 
	
	return 0;
}
