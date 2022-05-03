//Calculation of Simple Interest 

#include<stdio.h>

void main()
{
    int p,n;
    float r,si;

    printf("\nEnter the Principle amount\n");
    scanf("%d",&p);
    printf("\nEnter the number of years of period\n");
    scanf("%d",&n);
    printf("\nEnter the rate of interest\n");
    scanf("%f",&r);

    /*Formula for Simple Interest*/
    si=p*n*r/100;
    printf("\nSimple Interest: %.2f\n",si);

}
