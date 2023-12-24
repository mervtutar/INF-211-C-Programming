#include<stdio.h>

/*write a program to assist in the design of a hydroelectric dam*/

int main()
{
	double dam_height, water_flow;
    double electrical_power;
    double gravitation_power;
    double gravity=9.8;
    double efficiency=0.9; /*efficiency constant*/
    printf("please enter the height(in meters) of the dam:");
    scanf("%lf",&dam_height);
    printf("please enter the water flow (in meter^3/seconds) of the dam:");
    scanf("%lf",&water_flow);
    gravitation_power=water_flow*1000*gravity*dam_height;
    electrical_power=gravitation_power*efficiency/1e6;
    /*display total electrical energy*/
    printf("The dam can produce electrical power of %f",  electrical_power);
    
    return (0);



}
