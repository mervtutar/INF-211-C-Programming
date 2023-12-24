#include <stdio.h>

/*display the sizes for each of C's data types*/

int main()
{
	printf("Size of C data types\n");
	printf("Type                Bytes\n");
	printf("char                %d\n",sizeof(char));
	printf("unsigned char       %d\n",sizeof(unsigned char));
	printf("short               %d\n",sizeof(short));
	printf("int                 %d\n",sizeof(int));
	printf("unsigned            %d\n",sizeof(unsigned));
	printf("long                %d\n",sizeof(long));
	printf("unsigned long       %d\n",sizeof(unsigned long));
	printf("long long           %d\n",sizeof(long long));
	printf("unsigned long long  %d\n",sizeof(unsigned long long));
	printf("float               %d\n",sizeof(float));
	printf("double              %d\n",sizeof(double));
	printf("long double         %d\n",sizeof(long double));
	
	return(0);
}
