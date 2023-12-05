#include<stdio.h>
int main(){
    int a,b;
    
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);

    a= a+b;
    b= a-b;
    a= a-b;
    printf("The result after swapping the numbers is:\nFirst number:%d\nSecond number:%d",a,b);
    return 0;
}
