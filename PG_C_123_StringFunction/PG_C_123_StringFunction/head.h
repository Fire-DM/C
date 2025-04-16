#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//写一个函数，实现strlen的功能
size_t my_strlen_by_calculation(const char*);
size_t my_strlen_by_Sub(const char*);
size_t my_strlen_by_recursion(const char*);



//写一个函数，实现strcpy的功能
char* my_strcpy(char* dest, const char* src);


//写一个函数，实现strcat的功能
char* my_strcat(char* dest, const char* src);
char* new_my_strcat(char* dest, const char* src);


//写一个函数，实现strcmp的功能
int  my_strcmp(const char* str1, const char* str2);


//写一个函数，实现strncpy的功能
char* my_strncpy(char* dest, const char* src, size_t num);



//写一个函数，实现strncat的功能
char* my_strncat(char* dest, const char* src, size_t num);


//strncpy——库函数写法
char* __cdecl ano_strncpy(
    char* front,
    const char* back,
    size_t count
);