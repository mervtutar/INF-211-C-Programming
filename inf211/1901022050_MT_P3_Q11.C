#include <stdio.h>

/*calculate mileage reimbursement for a salesperson at a rate of $.35 per mile*/

int main()
{
	double b,e;
	printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
	printf("Enter beginning odometer reading=>");
	scanf("%lf",&b);
	printf("Enter ending odometer reading=>");
	scanf("%lf",&e);
	printf("You traveled %f miles.At $0.35 per mile,\nyour reimbursement is $%f.\n",e-b,(e-b)*0.35);
	
	return(0);
}
	
