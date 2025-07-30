#include <stdio.h>
#include <string.h>
#include "user.h"

void add_user(User users[], int *count)
{
    if (*count >= MAX_USERS) return;
    User new_user;
    getchar();
    printf("Nhap ten: "); fgets(new_user.name, 100, stdin);
    printf("Nhap ID: "); scanf("%d", &new_user.id);
    new_user.borrowed_count = 0;
    users[(*count)++] = new_user;
}

User *find_user_by_id(User users[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (users[i].id == id) return &users[i];
    }
    return NULL;
}