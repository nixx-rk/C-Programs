#include<stdio.h>
int main(){
    float celcius;
    float fahrenheit;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("Temperature in Celcius\t:\t%.2f\n",celcius);
    printf("Temperature in Fahrenheit:\t%.2f\n",fahrenheit);
}