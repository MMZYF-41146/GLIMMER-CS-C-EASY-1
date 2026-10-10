#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    do{
        sum = sum + i;
        i = i + 1;
    }
    while (i <= 10);
    printf("The result is %d\n",sum);
    return 0;
}