#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d\n", *pAge);
    printf("%d", *&age);

    return (0);
}

