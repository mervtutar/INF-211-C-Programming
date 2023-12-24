/*a program that finds AnBnC and AnB\C */
#include<stdio.h>
int main()
{
	int a1=1,a2=2,a3=3,a4=4; //A={1,2,3,4} A kümesinin elemanlarý
	int b1=2,b2=4,b3=11,b4=12; //B={2,4,11,12} B kümesinin elemanlarý
	int c1=2,c2=4,c3=10,c4=14; //C={2,4,10,14} C kümesinin elemanlarý
	int ort1,ort2,ort3,ort4; //A,B ve C nin ortak kesiþim elemanlarý
	int say1,say2,say3,say4; //A ve B nin C den farklý olan ortak kesiþim elemanlarý 
	if(a1==b1){ // A nýn ve B nin ilk elemanlarý eþit ise
		if(a1==c1)//A nýn birinci elemaný ile C nin birinci elemaný eþit ise
		ort1==c1;//ortak kesiþim elemaný c1 dir
		else if (a1==c2)
		ort1=c2;
		else if (a1==c3)
		ort1=c3;
		else if (a1==c4)
		ort1=c4;}
	else if(a1==b2){//A nýn ilk elemaný ile B nin ikinci elemaný eþit ise 
		if(a1==c1)
		ort1==c1;
		else if (a1==c2)
		ort1=c2;
		else if (a1==c3)
		ort1=c3;
		else if (a1==c4)
		ort1=c4;}
	else if(a1==b3){//A nýn ilk elemaný ile B nin üçüncü elemaný eþit ise
	    if(a1==c1)
	    ort1==c1;
		else if (a1==c2)
		ort1=c2;
		else if (a1==c3)
		ort1=c3;
		else if (a1==c4)
		ort1=c4;}
	else if(a1==b4){// A nýn ilk elemaný ile B nin dördüncü elemaný eþit ise 
		if(a1==c1)
		ort1==c1;
		else if (a1==c2)
		ort1=c2;
		else if (a1==c3)
		ort1=c3;
		else if (a1==c4)
		ort1=c4;}
	if(a2==b1){// A nýn ikinci elemaný ile B nin birinci elemaný eþit ise
		if(a2==c1)
		ort2=c1;
		else if(a2==c2)
		ort2=c2;
		else if(a2==c3)		
		ort2=c3;
		else if(a2==c4)
		ort2=c4;}
	else if(a2==b2){
		if(a2==c1)
		ort2=c1;
		else if(a2==c2)
		ort2=c2;
		else if(a2==c3)		
		ort2=c3;
		else if(a2==c4)
		ort2=c4;}
	else if(a2==b3){
		if(a2==c1)
		ort2=c1;
		else if(a2==c2)
		ort2=c2;
		else if(a2==c3)		
		ort2=c3;
		else if(a2==c4)
		ort2=c4;}
	else if(a2==b4){
		if(a2==c1)
		ort2=c1;
		else if(a2==c2)
		ort2=c2;
		else if(a2==c3)		
		ort2=c3;
		else if(a2==c4)
		ort2=c4;}
	if(a3==b1){
		if(a3==c1)
		ort3=c1;
		else if(a3==c2)
		ort3=c2;
		else if(a3==c3)
		ort3=c3;
		else if(a3==c4)
		ort3=c4;}
	else if(a3==b2){
		if(a3==c1)
		ort3=c1;
		else if(a3==c2)
		ort3=c2;
		else if(a3==c3)
		ort3=c3;
		else if(a3==c4)
		ort3=c4;}
	else if(a3==b3){
		if(a3==c1)
		ort3=c1;
		else if(a3==c2)
		ort3=c2;
		else if(a3==c3)
		ort3=c3;
		else if(a3==c4)
		ort3=c4;}
	else if(a3==b4){
		if(a3==c1)
		ort3=c1;
		else if(a3==c2)
		ort3=c2;
		else if(a3==c3)
		ort3=c3;
		else if(a3==c4)
		ort3=c4;}
	if(a4==b1){
		if(a4==c1)
		ort4=c1;
		else if(a4==c2)
		ort4=c2;
		else if(a4==c3)
		ort4==c3;
		else if(a4==c3)
		ort4=c4;}
	else if(a4==b2){
		if(a4==c1)
		ort4=c1;
		else if(a4==c2)
		ort4=c2;
		else if(a4==c3)
		ort4==c3;
		else if(a4==c3)
		ort4=c4;}
	else if(a4==b3){
	    if(a4==c1)
		ort4=c1;
		else if(a4==c2)
		ort4=c2;
		else if(a4==c3)
		ort4==c3;
		else if(a4==c3)
		ort4=c4;}
	else if(a4==b4){
		if(a4==c1)
		ort4=c1;
		else if(a4==c2)
		ort4=c2;
		else if(a4==c3)
		ort4==c3;
		else if(a4==c3)
		ort4=c4;}
	{if(ort1==0 && ort2==0 && ort3==0 && ort4==0)
	printf("AnBnC ={}\n");}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort1==0 && ort2==0)
	printf("AnBnC ={%d,%d}\n",ort3,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort1==0 && ort3==0)
	printf("AnBnC ={%d,%d}\n",ort2,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort1==0 && ort4==0)
	printf("AnBnC ={%d,%d}\n",ort2,ort3);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort2==0 && ort3==0)
	printf("AnBnC ={%d,%d}\n",ort1,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort2==0 && ort4==0)
	printf("AnBnC ={%d,%d}\n",ort1,ort3);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort4==0 && ort3==0)
	printf("AnBnC ={%d,%d}\n",ort1,ort2);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort1==0 && ort2!=0 && ort3!=0 && ort4!=0)
	printf("AnBnC ={%d,%d}\n",ort2,ort3,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort2==0 && ort1!=0 && ort3!=0 && ort4!=0)
	printf("AnBnC ={%d,%d}\n",ort1,ort3,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort3==0 && ort1!=0 && ort2!=0 && ort4!=0)
	printf("AnBnC ={%d,%d}\n",ort1,ort2,ort4);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	{if(ort4==0 && ort1!=0 && ort2!=0 && ort3!=0)
	printf("AnBnC ={%d,%d}\n",ort1,ort2,ort3);}//A,B ve C nin kesiþen elemanlarýný yazdýr
	
	{if(ort1==c1)//A,B ve C nin ortak elemaný c1 ise
		say1=ort1-c1;//A ve B nin C den farklý olan ortak kesiþim elemaný say1 dir
	else if(ort1==c2)
		say1=ort1-c2;
	else if(ort1==c3) 
		say1=ort1-c3;
	else if(ort1==c4)
		say1=ort1-c4;}
	{if(ort2==c1)
		say2=ort2-c1;
	else if(ort2==c2)
		say2=ort2-c2;
	else if(ort2==c3)
		say2=ort2-c3;
	else if(ort2==c4)
		say2=ort2-c4;}
	{if(ort3==c1)
		say3=ort3-c1;
	else if(ort3==c2)
		say3=ort3-c2;
	else if(ort3==c3)
		say3=ort3-c3;
	else if(ort3==c4)
		say3=ort3-c4;}
	{if(ort4==c1)
		say4=ort4-c1;
	else if(ort4==c2)
		say4=ort4-c2;
	else if(ort4==c3)
		say4=ort4-c3;
	else if(ort4==c4)
		say4=ort4-c4;}
	if(say1==0 && say2==0 && say3==0 && say4==0)
		printf("AnB\\C ={}");//say1,say2,say3,say4 0 ise sonuç boþ kümedir
	else
	printf("AnB\\C = {%d,%d,%d,%d}\n",say1,say2,say3,say4);//A ve B nin C den farklý olan ortak kesiþim elemanlarýný yazdýr
	return(0);	
}
