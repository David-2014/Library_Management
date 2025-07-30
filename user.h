#ifndef USER_H
#define USER_H

#define MAX_USERS 100
#define MAX_BORROWED 10

typedef struct
{
    char name[100];
    int id;
    int borrowed_book_ids[MAX_BORROWED];
    int borrowed_count;
} User;

void add_user(User users[], int *count);
User *find_user_by_id(User users[], int count, int id);

#endif
