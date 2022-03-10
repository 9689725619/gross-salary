#include<stdio.h>
int main()
{

float BS,GS,TA,HRA,DA;
printf("\n Enter basic salary");
scanf("%f",&BS);
HRA=BS*0.60;
TA=BS*0.30;
DA=BS*0.45;
GS=BS+HRA+TA+DA;
printf("\nthe gross salary is% 2f",GS);
printf("\n gross salary is %f",GS);
return 0;
}

