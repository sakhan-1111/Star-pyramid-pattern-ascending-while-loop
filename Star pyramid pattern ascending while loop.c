#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;
    int j=1;

    while(i<=5) {
        while(j<=i) {
        j++;
        printf("* ");
        }
        printf("\n");
        i++;
        j=1;
    }
    return 0;
}
