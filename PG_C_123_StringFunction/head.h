#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//дһ��������ʵ��strlen�Ĺ���
size_t my_strlen_by_calculation(const char*);
size_t my_strlen_by_Sub(const char*);
size_t my_strlen_by_recursion(const char*);



//дһ��������ʵ��strcpy�Ĺ���
char* my_strcpy(char* dest, const char* src);


//дһ��������ʵ��strcat�Ĺ���
char* my_strcat(char* dest, const char* src);
char* new_my_strcat(char* dest, const char* src);
