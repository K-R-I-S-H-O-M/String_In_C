#include <stdio.h>
int main()
{
    char str[] = "krishom";
    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    // for (int i = 0; i <7; i++)
    // {
    //     printf("value of str[%d]is %c\n",i,str[i]);
    // }

    return 0;
}