#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nKelly, Customer service");

    fclose(fpointer);
    return (0);
}

