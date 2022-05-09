#include "stdio.h"
struct SDistance
{
	int foot;
	float inches;
};
void main (){
	struct SDistance Sx,Sy,Ssum;
	printf("Enter Information For 1st distance \n");
	printf("Enter foot: ");
	scanf("%d",&Sx.foot);
	printf("Enter inches ");
	scanf("%f",&Sx.inches);
	printf("Enter Information For 2nd distance\n");
	printf("Enter foot: ");
	scanf("%d",&Sy.foot);
	printf("Enter inches ");
	scanf("%f",&Sy.inches);
	Ssum.foot=Sx.foot+Sy.foot;
	Ssum.inches=Sx.inches+Sy.inches;
	while(Ssum.inches>=12){
		Ssum.inches-=12;
		Ssum.foot++;
	}
	printf("sum of two distances =  %d' %.2f\"\n",Ssum.foot,Ssum.inches);
		

	}