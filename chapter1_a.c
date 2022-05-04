#include<stdio.h>
#include<math.h>
int main(){
    float basic_salary, gross_salary, rent, dearness;
    printf("Enter the basic salary amount\n");
    scanf("%f",&basic_salary);
    
    printf("Basic Salary :\t\tRs.%.2f\n",basic_salary);
    rent=basic_salary*0.2;
    printf("Rent Allowance :\tRs.%.2f\n",rent);
    dearness=basic_salary*0.4;
    printf("Dearness allowance : \tRs.%.2f\n",dearness);
    gross_salary=basic_salary+dearness+rent;
    printf("Gross Salary :\t\tRs.%.2f",gross_salary);
    return 0;
}