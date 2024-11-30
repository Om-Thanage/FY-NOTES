#include <stdio.h>
#include<math.h>

int addition(int *var1, int *var2)
{
    return *var1+*var2;
}
int subtraction(int *var1, int *var2)
{
    return *var1-*var2;
}
int multiplication(int *var1, int *var2)
{
    return *var1**var2;
}

int square(int *var1, int *var2)
{
    return pow(*var1,2)+pow(*var2,2);
}

int main()
{
    int num1 = 7, num2 = 8, *var1, *var2;

    printf("%d\n",addition(&num1, &num2));

    printf("%d\n",subtraction(&num1, &num2));

    printf("%d\n",multiplication(&num1, &num2));

    printf("%d\n",square(&num1, &num2));


    return 0;

}
