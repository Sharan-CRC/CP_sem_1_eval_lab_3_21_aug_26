#include <stdio.h>
int main()
{
    printf("Multiplication table\n"); //header for the table
    //printing the table using for loop
    for(int t=1; t<=10; t++){
        for(int x = 1;x<=10;x++){
            printf("%d x %d = %d \t", x, t, x*t);
        }
        printf("\n");
    }
    return 0;
}


