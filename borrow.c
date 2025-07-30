#include <stdio.h>
#include "borrow.h"

void borrow_book(Book books[], int book_count, User users[], int user_count)
{
    int book_id, user_id;
    printf("Nhap ID sach: "); scanf("%d", &book_id);
    printf("Nhap ID nguoi dung: "); scanf("%d", &user_id);

    Book *book = find_book_by_id(books, book_count, book_id);
    User *user = find_user_by_id(users, user_count, user_id);

    if (!book || !user)
    {
        printf("Thong tin khong hop le.\n");
        return;
    }
    
    if (book->status == Borrowed)
    {
        printf("Sach da duoc muon.\n");
        return;
    }

    if (user->borrowed_count >= MAX_BORROWED)
    {
        printf("Nguoi dung da muon toi da sach.\n");
        return;
    }

    book->status = Borrowed;
    user->borrowed_book_ids[user->borrowed_count++] = book->id;
    printf("Muon sach thanh cong.\n");
}