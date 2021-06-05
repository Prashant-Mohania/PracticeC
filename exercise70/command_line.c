#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char argc, char *argv[])
{
    char *operation;
    int n1, n2;
    operation = argv[1];
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);
    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", n1 + n2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", n1 - n2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", n1 * n2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", n1 / n2);
    }
    return 0;
}