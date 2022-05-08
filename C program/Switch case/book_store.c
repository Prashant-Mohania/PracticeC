#include <stdio.h>
int main()
{
    int price;
    struct book_store
    {
        char author_name[10];
        char book_name[10];
        int price;
    }b;
    printf("Enter book name:-\n");
    gets(b.book_name);
    printf("Enter author name:-\n");
    gets(b.author_name);
    printf("Enter book's price:-\n");
    scanf("%d", &price);
    printf("\n\n");
    printf("Book Name is:-");
    puts(b.book_name);
    printf("\nAuthor's Name:");
    puts(b.author_name);
    printf("\nBook price is:-");
    printf("%d", price);
    return 0;
}