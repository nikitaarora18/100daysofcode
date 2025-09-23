//wap to calculate area and circumfrence of a circle given its radius
#include <stdio.h>
int main(){
    float pi=3.14159265;
    float radius=5.9;
    float area=pi*radius*radius;
    float circumference=2*pi*radius;
    printf("the area of circle is: %f \n",area);
    printf("the circumfernce of circle is: %f \n",circumference);
    return 0;

}