// Your code here...
#include<stdio.h>
int main(){
    int a , b;
    scanf("%d%d",&a,&b);
    if(a==0){
        printf("Zero");
    } 
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
}