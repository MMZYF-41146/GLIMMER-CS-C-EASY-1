#include <stdio.h>
int main()
{
    char name[100];
    int age;
    char choice;
    int count = 0;
    do
    {
        count++;

        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Your name is %s and your age is %d .\n",name,age);

        printf("If continue(y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');
    printf("Total operation is %d .\n",count);
    return 0;
}