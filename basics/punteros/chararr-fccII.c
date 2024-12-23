#include <stdio.h>
void print(char *c)
{
    int i = 0;
    while (c[i] != '\0')
    // while (*(c + 1) != '\0')
    // while (*c != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}   
int main()
{
    char c1[6] = "Hello";
    print(c1);
    
}