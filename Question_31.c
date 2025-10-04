//calculate area of a square and circle and rectangle using a function
#include<stdio.h>

float squarearea (float side );
float circlearea (float radius );
float rectanglearea (float length, float breadth );



int main () {

    float a = 10.0;
    float b = 15.0;

    printf("the area is : %f", rectanglearea(a,b));




}

float squarearea (float side ){
    return side*side;
}
float circlearea (float radius ){
    return 3.14 * radius * radius;
}
float rectanglearea (float length, float breadth ){
    return length * breadth;
}

