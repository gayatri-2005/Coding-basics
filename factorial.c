int fact(int n);

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Factorial of given number is %d",fact(n));
}

int fact(int n){
    if(n==0){
        return 1;
    }
  int factNm1=fact(n-1);
  int factN = factNm1 * n;
  return factN;
}

