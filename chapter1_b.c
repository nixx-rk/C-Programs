#include<stdio.h>
int main(){
    float km,mtr,feet,inches,cm;
    printf("Enter distance between the cities in kilometers\n");
    scanf("%f",&km);
    mtr=km*1000;
    cm=mtr*100;
    inches=cm/2.54;
    feet=inches/12;
    printf("Distance in Kilometers\t:\t%.3f\n",km);
    printf("Distance in Meters\t:\t%.2f\n",mtr);
    printf("Distance in Feet\t:\t%.1f\n",feet);
    printf("Distance in Inches\t:\t%.2f\n",inches);
    printf("Distance in Centimeters\t:\t%.1f\n",cm);
    return 0;
}