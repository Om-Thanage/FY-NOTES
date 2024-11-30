//#include<stdio.h>
//int main(){
//int i,j;
//for (i=1; i<21; i++){
//    printf("%d\n",i);
//}
//}
//#include<stdio.h>
// int main(){
//     int a,b;
//     a = 10;
//     b = 20;
//     printf("The addition of %d and %d is %d",a,b,a+b);

//     return 0;
// }

 /*int main(){
     int a =65;
     float b=5.67;
     char ch='g';
     char s[] = "Hello";
     printf("\n %c %d %f",ch,ch,ch);
    //we can use chars as integers
     printf("\n %s %d %f",s,s,s);
     printf("\n %c %d %f",a,a,a);
     printf("\n %f %d\n",b,b);
 }*/
// int a = 1000;
// int main(){

//     printf("Global a = %d\n",a);

//     int  a =100;

//     {
//         int a = 10;
//         printf("Inner a = %d\n",a);
//     }

//     printf("OUTER a = %d\n",a);

//     return 0;

// }
//int main(){
    //float radius,height,pi;
    //radius = 5;
    //height = 9;
   // pi = 3.142;
    //printf("The surface area of the cylinder is %f", 2*pi*radius*height + 2*pi*radius*radius);
    //return 0;
//}
//square rectangle triangle and circle
/*#include<stdio.h>
#define pi 3.14
int main (){
int sq_side,tri_side,cir_radius,len,width;
sq_side = scanf("Enter the side of square");
printf("The perimeter of square is %d \n",4*sq_side);
tri_side = scanf("Enter the side of equilateral triangle");
printf("The perimeter of square is %d \n",3*tri_side);
cir_radius = scanf("Enter the radius of circle");
printf("The perimeter of circle is %f \n",2*pi*cir_radius);
len = scanf("Enter the length of rectangle");
width = scanf("Enter the width of rectangle");
printf("The perimeter of rectangle is %d \n",2*len*width);
}
*/
#include<stdio.h>
#define pi 3.14
int main (){
    int sq_side,tri_side1,tri_side2,tri_side3,tri_eq_side,tri_iso_side1,tri_iso_side2,cir_radius,len,width; //declaring all int variables

    //To calculate perimeter of square
    printf("Enter the side of square: ");
    scanf("%d",&sq_side);
    printf("The perimeter of square is %d \n",4*sq_side);

    //To calculate perimeter of triangle based on type
    char type_of_triangle;
    printf("Enter the type of triangle\n S for scalene(no side equal) \n I for isosceles(any two sides equal) \n E for Equilateral(all sides equal)\n");
    scanf(" %c",&type_of_triangle);
    //For Scalene Triangle
    if (type_of_triangle == 'S'){
        printf("Enter length of first side");
        scanf("%d",&tri_side1);
        printf("Enter length of second side");
        scanf("%d",&tri_side2);
        printf("Enter length of third side");
        scanf("%d",&tri_side3);
        printf("The perimeter of scalene triangle is %d \n", tri_side1+tri_side2+tri_side3);
    }
    //For Equilateral Triangle
    else if (type_of_triangle == 'E'){
        printf("Enter the side of equilateral triangle: ");
        scanf("%d",&tri_eq_side);
        printf("The perimeter of equilateral triangle is %d \n",3*tri_eq_side);
    }
    //For Isosceles Triangle
    else if  (type_of_triangle == 'I'){
        printf("Enter length of equal sides");
        scanf("%d",&tri_iso_side1);
        printf("Enter length of base side");
        scanf("%d",&tri_iso_side2);
        printf("The perimeter of isosceles triangle is %d \n", 2*tri_iso_side1+tri_iso_side2);
    }

    //To calculate perimeter of circle
    printf("Enter the radius of circle: ");
    scanf("%d",&cir_radius);
    printf("The perimeter of circle is %f \n",2*pi*cir_radius);

    //To calculate perimeter of rectangle
    printf("Enter the length of rectangle: ");
    scanf("%d",&len);
    printf("Enter the width of rectangle: ");
    scanf("%d",&width);
    printf("The perimeter of rectangle is %d \n",2*(len+width));

    return 0;
}






