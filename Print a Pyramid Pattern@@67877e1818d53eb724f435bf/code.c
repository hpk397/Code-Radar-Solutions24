#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i=i+2){
        for (int j=1;j<=(2 * a - 1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}