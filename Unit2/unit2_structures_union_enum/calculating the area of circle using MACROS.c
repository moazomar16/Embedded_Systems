#include "stdio.h"
#define pi 3.14
#define area(rad) (pi*(rad)*(rad)) 

void main (){
int radius;
float area;
printf("Enter the radius of circle ");
scanf("%d",&radius);
area=area(radius);
printf("Area= %.2f",area );

}