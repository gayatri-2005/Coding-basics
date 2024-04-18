#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a<0){
        printf("absolute value is %d",a*(-1));
    }
    else{
        printf("%d",a);
    }
}