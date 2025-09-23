// wap to calculate area and perimeterbof a rectangle given its length and breadth
#include <stdio.h>
int main(){
    int length, breadth, perimeter, area;
    length=5;
    breadth=10;
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("the area of rectangle is %d \n",area);
    printf("the perimeter of rectangle is %d \n",perimeter);
    return 0;
}