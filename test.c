#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "book.h"

void test_add_book()
{
    Book books[1];
    books[0].id = 123;
    strcpy(books[0].title, "Lap Trinh C");
    strcpy(books[0].author, "Hai");
    books[0].status = Available;

    assert(books[0].id == 123);
    assert(books[0].status == Available);
    printf("test_add_book passed.\n");
}

int main()
{
    test_add_book();
    return 0;
}