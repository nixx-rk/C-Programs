#include<stdio.h>
int main(){
    float length=1189,breadth=841;
    int i=0;
    while(i<=8){
        if(length<breadth){
            length=breadth+length;
            breadth=length-breadth;
            length=length-breadth;
        }
        printf("Paper size of sheet A%d:\t%.0fmm X %.0fmm\n",i,length,breadth);
        if (length>breadth){
            length=length/2;
        }
        else{
            breadth=breadth/2;
        }
        i++;
    }
    return 0;
}