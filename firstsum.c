#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your salary:");
    scanf("%d",&a);
    b=a/12;
   
    printf("tax for salary given is: %f\n",b*(0.18));
     printf("monthly salary is %f\n", b-(b*(0.18)));
  //take 18 % as gst  
}
