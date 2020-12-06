#include <stdio.h>

int main(){
    int radius;
    printf("enter your value for the radius: ");
    scanf("%i", &radius);

    double area = 3.14159 * (radius * radius);
    printf("the area of circle with %i radius is %f\n",radius,area);
}
