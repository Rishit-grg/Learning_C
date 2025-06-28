#include <stdio.h>

int main(){
    int radius, height;
    printf("Enter radius of the Cylinder\n");
    scanf("%d" , &radius);

    printf("Enter height of the Cylinder\n");
    scanf("%d" , &height);

    printf("Volume of the cylinder is %f" , 3.14*radius*radius*height);

    return 0;
}