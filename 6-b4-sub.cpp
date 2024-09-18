/* 2352017 信14 张睿琦 */

#include <cstdio>   //NULL
//不再允许包含任何系统头文件

/* ----- 不允许定义任何形式的全局变量/全部数组/只读全局变量/宏定义!!!!! ----- */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return只是一个示例，可改变 */
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int length = 0;
    if (str != NULL) {
        for (; *str != '\0'; str++, length++)
            ;
    }
    return length;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strcat(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 != NULL && s2 != NULL) {
        char* s1_1 = s1 + tj_strlen(s1);
        for (; *s2 != '\0'; s1_1++, s2++)
            *s1_1 = *s2;
        *s1_1 = '\0';
    }
    return s1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strncat(char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 != NULL && s2 != NULL) {
        char* s1_1 = s1 + tj_strlen(s1);
        const char* s2_1 = s2 + len;
        for (; s2 < s2_1; s1_1++, s2++)
            *s1_1 = *s2;
        *s1_1 = '\0';
    }
    else if (len >= tj_strlen(s2)) 
        tj_strcat(s1, s2);
    return s1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strcpy(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL)
        return s1;
    else if (s2 == NULL) {
        *s1 = '\0';
        return s1;
    }
    else {
        char* s1_1 = s1;
        for (; *s2 != '\0'; s1_1++, s2++) 
            *s1_1 = *s2;
        *s1_1 = '\0';
    }
    return s1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strncpy(char *s1, const char *s2, const int len)
{
    char* s1_1 = s1;
    if (s1 == NULL || s2 == NULL)
        return s1;
    else if (len >= tj_strlen(s2)) {
        for (; *s2 != '\0'; s1_1++, s2++)
            *s1_1 = *s2;
    }
    else {
        for (const char* s2_1 = s2 + len; s2 < s2_1; s1_1++, s2++)
            *s1_1 = *s2;
    }
    return s1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL && s2 == NULL) 
        return 0;
    else if (s1 != NULL && s2 == NULL) 
        return 1;
    else if (s1 == NULL && s2 != NULL) 
        return -1;
    else {
        for (; *s1 != '\0' || *s2 != '\0'; s1++, s2++) {
            if (*s1 != *s2) 
                return *s1 - *s2;
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL && s2 == NULL)
        return 0;
    else if (s1 != NULL && s2 == NULL)
        return 1;
    else if (s1 == NULL && s2 != NULL)
        return -1;
    else {
        for (; *s1 != '\0' || *s2 != '\0'; s1++, s2++) {
            if (*s1 != *s2) {
                char s1_1 = *s1;
                char s2_1 = *s2;
                if (s1_1 >= 'A' && s1_1 <= 'Z')
                    s1_1 += 32;
                if (s2_1 >= 'A' && s2_1 <= 'Z')
                    s2_1 += 32;
                if (s1_1 != s2_1)
                    return s1_1 - s2_1;
            }
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int length = tj_strlen(s1) >= tj_strlen(s2) ? tj_strlen(s2) : tj_strlen(s1);
    if (s1 == NULL && s2 == NULL)
        return 0;
    else if (s1 != NULL && s2 == NULL)
        return 1;
    else if (s1 == NULL && s2 != NULL)
        return -1;
    else if (len > length)
        return tj_strcmp(s1, s2);
    else {
        for (const char* s1_1 = s1 + len; s1 < s1_1; s1++, s2++) {
            if (*s1 != *s2)
                return *s1 - *s2;
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int length = tj_strlen(s1) >= tj_strlen(s2) ? tj_strlen(s2) : tj_strlen(s1);
    if (s1 == NULL && s2 == NULL)
        return 0;
    else if (s1 != NULL && s2 == NULL)
        return 1;
    else if (s1 == NULL && s2 != NULL)
        return -1;
    else if (len > length)
        return tj_strcasecmp(s1, s2);
    else {
        for (const char* s1_1 = s1 + len; s1 < s1_1; s1++, s2++) {
            if (*s1 != *s2) {
                char s1_1 = *s1;
                char s2_1 = *s2;
                if (s1_1 >= 'A' && s1_1 <= 'Z')
                    s1_1 += 32;
                if (s2_1 >= 'A' && s2_1 <= 'Z')
                    s2_1 += 32;
                if (s1_1 != s2_1)
                    return s1_1 - s2_1;
            }
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strupr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str != NULL){
        for (char* str1 = str; *str1 != '\0'; str1++) {
            if (*str1 >= 'a' && *str1 <= 'z')
                *str1 -= 32;
        }
    }
    return str;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strlwr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str != NULL) {
        for (char* str1 = str; *str1 != '\0'; str1++) {
            if (*str1 >= 'A' && *str1 <= 'Z')
                *str1 += 32;
        }
    }
    return str;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str != NULL) {
        for (int n = 0; *str != '\0'; n++, str++) {
            if (*str == ch)
                return n + 1;
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str != NULL && substr != NULL) {
        for (int n = 0; *str != '\0' && *substr != '\0'; n++, str++) {
            if (*str == *substr) {
                int i = 0;
                const char* str1 = str;
                const char* substr1 = substr;
                for (; *str1 != '\0' && *substr1 != '\0'; str1++, substr1++) {
                    if (*str1 == *substr1) {
                        i++;
                        continue;
                    }
                    else
                        break;
                }
                if (i == tj_strlen(substr))
                    return n + 1;
            }
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str != NULL) {
        const char* str1 = str + tj_strlen(str) - 1;
        for (int n = tj_strlen(str); n > 0; n--, str1--) {
            if (*str1 == ch)
                return n;
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    const char* str1 = str + tj_strlen(str) - 1;
    if (str != NULL && substr != NULL) {
        for (int n = tj_strlen(str); n > 0; n--, str1--) {
            if (*str1 == *substr) {
                int i = 0;
                const char* str2 = str1;
                const char* substr1 = substr;
                for (; *str2 != '\0' && *substr1 != '\0'; str2++, substr1++) {
                    if (*str2 == *substr1) {
                        i++;
                        continue;
                    }
                    else
                        break;
                }
                if (i == tj_strlen(substr))
                    return n;
            }
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strrev(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if(str != NULL) {
        int length = tj_strlen(str);
        char* str_1 = str;
        char* str_2 = str + length - 1;
        for (; str_1 < str_2; str_1++, str_2--) {
            char temp = *str_1;
            *str_1 = *str_2;
            *str_2 = temp;
        }
    }
    return str;
}
