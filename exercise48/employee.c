#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *id_len;
    int id, i = 0;
    printf("Enter employee id length:-");
    scanf("%d", &id);
    id_len = (char *)malloc((id + 1) * sizeof(char));
    while (i < 3)
    {
        printf("Enter emplpoyee %d id:-", i + 1);
        scanf("%s", id_len);
        printf("Employee %d id is %s\n", i + 1, id_len);
        i++;
        free(id_len);
    }
    return 0;
}