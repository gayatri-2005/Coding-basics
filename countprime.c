#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count =0;
     for(int i =1;i<=n;i++){
        if(n%i==0){
       count++;
       }
    for(int j=1;j<=n;j++){
          if(count==2){
        printf("%d",n);
     }
    }    
     }
}