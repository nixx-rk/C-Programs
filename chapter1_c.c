#include<stdio.h>
int main(){
    int i=1,marks,total=0;
    while(i<=5){
        printf("Enter the marks obtained in subject %d\t",i);
        scanf("%d",&marks);
        if(marks>100 || marks<0){
            printf("Invalid marks\n");
        }
        else{
            i++;
            total=total+marks;
        }
    }
    printf("Total Marks scored in five subjects is: %d",total);
    return 0;
}