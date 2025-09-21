/* Name : Coleen Nicolette Kanyanya
   Registration No: PA106/G/28764/25
   Description: Programme to prompt for the radius and height of a cylinder and calculate the volume and the surface area*/
#include <stdio.h>

int main() {
    // Variable declaration
    float radius,height,volume,surface_area;
    // declare PI as a constant
    const double PI = 3.14159;
    //Prompts the user for the radius and the height
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f",&height);

    volume = PI * (radius*radius) * height;//calculation of the volume of the cylinder
    surface_area = 2 * PI * (radius*radius) + 2 * PI * radius * height ;//calculation of the surface area of the cylinder
     
    printf("The volume of the cylinder is %.2f", volume);//displays the volume of the cylinder
    printf("The surface area of the cylinder is %.2f", surface_area);// displays the surface area of the cylinder

    return 0;
    
}