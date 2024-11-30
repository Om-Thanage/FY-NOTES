#include<stdio.h>
#define pi 3.14159265359
#include<math.h>
int main (){
    int sq_side,tri_side1,tri_side2,tri_side3,tri_eq_side,tri_iso_side1,tri_iso_side2,cir_radius,len,width; //declaring all int variables

    //To calculate perimeter of square
    printf("Square\n");
    printf("Enter the side of square: ");
    scanf("%d",&sq_side);
    printf("The perimeter of square is %d \n",4*sq_side);
    printf("The area of square is %d \n",sq_side*sq_side);

    //To calculate perimeter of triangle based on type
    printf("Triangle \n");
    char type_of_triangle;
    printf("Enter the type of triangle\n S for scalene(no side equal) \n I for isosceles(any two sides equal) \n E for Equilateral(all sides equal)\n");
    scanf(" %c",&type_of_triangle);
    //For Scalene Triangle
    if (type_of_triangle == 'S'){
        printf("Enter length of first side: ");
        scanf("%d",&tri_side1);
        printf("Enter length of second side: ");
        scanf("%d",&tri_side2);
        printf("Enter length of third side: ");
        scanf("%d",&tri_side3);
        printf("The perimeter of scalene triangle is %d \n", tri_side1+tri_side2+tri_side3);
        float s1 = (tri_side1+tri_side2+tri_side3)/2;
        printf("The area of triangle is %f \n", sqrt(s1*(s1-tri_side1)*(s1-tri_side2)*(s1-tri_side3)));
    }
    //For Equilateral Triangle
    else if (type_of_triangle == 'E'){
        printf("Enter the side of equilateral triangle: ");
        scanf("%d",&tri_eq_side);
        printf("The perimeter of equilateral triangle is %d \n",3*tri_eq_side);
        printf("The area of triangle is %f \n",(sqrt(3)/4)*(pow(tri_eq_side,2)));
    }
    //For Isosceles Triangle
    else if (type_of_triangle == 'I') {
        printf("Enter length of equal sides: ");
        scanf("%d", &tri_iso_side1);
        printf("Enter length of base side: ");
        scanf("%d", &tri_iso_side2);
        printf("The perimeter of isosceles triangle is %d \n", 2 * tri_iso_side1 + tri_iso_side2);
        float s2 = (2.0 * tri_iso_side1 + tri_iso_side2) / 2;
        printf("The area of triangle is %.2f \n", sqrt(s2 * (s2 - tri_iso_side1) * (s2 - tri_iso_side1) * (s2 - tri_iso_side2)));
    }


    //To calculate perimeter of circle
    printf("Circle \n");
    printf("Enter the radius of circle: ");
    scanf("%d",&cir_radius);
    printf("The perimeter of circle is %f \n",2*pi*cir_radius);
    printf("The area of circle is %f \n",pi*cir_radius*cir_radius);

    //To calculate perimeter of rectangle
    printf("Rectangle \n");
    printf("Enter the length of rectangle: ");
    scanf("%d",&len);
    printf("Enter the width of rectangle: ");
    scanf("%d",&width);
    printf("The perimeter of rectangle is %d \n",2*(len+width));
    printf("The area of rectangle is %d \n",len*width);

    return 0;
}

