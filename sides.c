#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+a>c){
        printf("Given sides represent the triangle \n");

     if(a==b && a==c){
        printf("Sides represent equilateral triangle\n");
    }
     if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
        printf("Sides of right angle triangle\n");
    }
    }
    else{
        printf("Not a sides of triangle");
        }
}