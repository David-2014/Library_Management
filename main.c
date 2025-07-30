#include <stdio.h>
#include "book.h"
#include "user.h"
#include "borrow.h"

int main()
{
    Book books[MAX_BOOKS]; int book_count = 0;
    User users[MAX_USERS]; int user_count = 0;

    add_book(books, &book_count);
    add_user(users, &user_count);
    borrow_book(books, book_count, users, user_count);
    list_available_books(books, book_count);

    return 0;
}