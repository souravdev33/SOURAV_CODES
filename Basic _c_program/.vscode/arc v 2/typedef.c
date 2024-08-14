#include<stdio.h>

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef struct book BOOK;

        BOOK b={"Love yourself",550};

        printf("The name of the book is : %s\n",b.name);
        printf("The price of the book is %d\n",b.price);


return 0;
    
}
