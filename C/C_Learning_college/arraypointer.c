/*#include <stdio.h>bout
int main()
{*/
    /*int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;

    printf("\n Value of i = %d", i);
    printf("\n Value of j = %d", j);
    printf("\n Value of k = %d", k);

    x = &i;
    y = &j;
    z = &k;

    printf("\n Original Address in x = %u", x);
    printf("\n Original Address in y = %u", y);
    printf("\n Original Address in z = %u", z);

    x++;
    y++;
    z++;

    printf("\n New address in x = %u", x);
    printf("\n New address in y = %u", y);
    printf("\n New address in z = %u", z);*/

    /*int i = 4, *j, *k;
    j= &i;
    printf("j = %u\n", j);
    j = j-2;
    printf("j = %u\n", j);
    j = j-5;
    printf("j = %u\n", j);
    k = j-6;
    printf("k = %u\n\n", k);*/


    /*int arr[] = { 10, 20, 30, 45, 67, 56, 74};
    int *i, *j;
    i = &arr[1];
    j = &arr[5];

    printf("i = %u\n", &i);
    printf("j = %u\n", j);
    //printf("k = %u\n", k);
    printf("value = %u %d",j-i,*j-*i);*/

    /*int i,j;
    int s[4][2] = {
    {
        1234, 56
    },
    {
        1212, 33
    },
    {
        1256, 78
    },
    {
        4005, 86
    }
    };

    for (i = 0; i<4 ; i++)
        {
            for (j = 0; j<2; j++)
            {
                printf("%d %d th address is : %u\n", i,j, &s[i][j]);
            }
        }*/


    /*int b[] = {0, 5, 0, 4, 7};
    int i, *m;
    m = &b;

    for(i = 0; i<=4; i++){
        printf("%d %u\n",*(b+i),&b[i]);
        m++;
    }*/

    /*int a[5] = {5, 1, 15, 20, 25};
    int i,j,k =1, m;

    i = ++a[1];
    printf("%d\n",i);
    j = a[1]++;
    m = a[i++];

    printf("\n %d %d %d", i,j,m);

    return 0;
}
*/

/*#include<stdio.h>
int main() {
    FILE *sourceFile, *targetFile;
    char character;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error in opening source file");
        return 1;
    }

    targetFile = fopen("destination.txt", "w");
    if (targetFile == NULL) {
        perror("Error in opening target file");
        fclose(sourceFile);
        return 1;
    }

    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copy success.\n");

    return 0;
}

*/
