#include <stdio.h>
#include <stdio.h>
int main()
{
    char ch;
    FILE *fp1, *fp2;
    fp1 = fopen("C:\\program.txt", "r");
    fp2 = fopen("C:\\program1.txt", "w");
    while (((ch = getc(fp1)) != EOF))
    {
        putc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}