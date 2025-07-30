#ifndef BOOK_H
#define BOOK_H

#define MAX_BOOKS 100

typedef enum { Available, Borrowed} BookStatus;

typedef struct
{
    char title[100];
    char author[100];
    int id;
    BookStatus status;
} Book;

void add_book(Book books[], int *count);
void edit_book(Book books[], int count);
void remove_book(Book books[], int *count);
void list_available_books(Book books[], int count);
void search_book(Book books[], int count);
Book *find_book_by_id(Book books[], int count, int id);

#endif