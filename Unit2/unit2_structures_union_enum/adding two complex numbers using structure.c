#include "stdio.h"
struct SComplex 
{
	float real;
	float imaginary;
};
struct SComplex Add_Complex(struct SComplex SComplex1,struct SComplex SComplex2);
void main (){
	struct SComplex SComplex1,SComplex2,SSum;
	printf("For 1st complex Number \n Enter Real and Imaginary parts Respectively separated by a space ");
	scanf("%f %f",&SComplex1.real,&SComplex1.imaginary);
	printf("For 2nd complex Number \n Enter Real and Imaginary parts Respectively separated by a space ");
	scanf("%f %f",&SComplex2.real,&SComplex2.imaginary);
	SSum=Add_Complex(SComplex1,SComplex2);
	printf("sum of two complex Number =  %.2f + %.2fi",SSum.real,SSum.imaginary);
		

	}
struct SComplex Add_Complex(struct SComplex SComplex1,struct SComplex SComplex2)
	{
		struct SComplex SSum;
		SSum.real=SComplex1.real+SComplex2.real;
		SSum.imaginary=SComplex1.imaginary+SComplex2.imaginary;
		return SSum;
	}