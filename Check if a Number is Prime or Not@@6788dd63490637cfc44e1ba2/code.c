#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    else if(a%2==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}