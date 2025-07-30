#include <stdio.h>
#include <string.h>
#include "book.h"

void add_book(Book books[], int *count)
{
    if (*count >= MAX_BOOKS) return;
    Book new_book;
    getchar();
    printf("Nhap tieu de: "); fgets(new_book.title, 100, stdin);
    printf("Nhap tac gia: "); fgets(new_book.author, 100, stdin);
    new_book.status = Available;
    books[(*count)++] = new_book;
}

Book *find_book_by_id(Book books[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (books[i].id == id) return &books[i];
    }
    return NULL;
}

void list_available_books(Book books[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (books[i].status == Available)
        {
            printf("TD: %d, Tieu de: %s", books[i].id, books[i].title);
        }
    }
}