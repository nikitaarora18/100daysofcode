//wap to input a integer and check whether it is even or odd using if else
#include <stdio.h>
int main (){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number %2 ==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    
}