#include<stdio.h>
int main(){
    float length,breadth,radius,area_rec,area_cir,perimeter,circumference;
    printf("'All in meters'\nRectangle\n");
    printf("Length\t:\t");
    scanf("%f",&length);
    printf("Breadth\t:\t");
    scanf("%f",&breadth);
    printf("Area\t:\t%.2f\n",length*breadth);
    printf("Perimeter :\t%.2f\n",2*(length+breadth));
    printf("Circle\n");
    printf("Radius\t:\t");
    scanf("%f",&radius);
    printf("Area\t:\t%.2f\n",3.142*(radius*radius));
    printf("Circumference:\t%.2f\n",2*3.142*radius);
    return 0;
}