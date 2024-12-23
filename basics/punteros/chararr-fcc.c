/*
# null terminated

- /0 -> null character, es una convención para indicar el final de un string

*/

#include <stdio.h>
#include <string.h>

int main()
{
    // char C[4];
    // C[0] = 'J';
    // C[1] = 'O';
    // C[2] = 'H';
    // C[3] = 'N';

    // printf("%s\n", C); // JOHN -> con un error improvisto, ya que printf espera un string null terminated


    //______
    //
    char C[20] = "JOHN"; // JOHN\0 
    //char C[20] = {'J', 'O', 'H', 'N', '\0'}; // JOHN\0
    //char C[] = "JOHN"; // JOHN\0
    // C[0] = 'J';
    // C[1] = 'O';
    // C[2] = 'H';
    // C[3] = 'N';
    // C[4] = '\0'; // null terminated

    int len = strlen(C);
    printf("C size in bytes: %d\n", sizeof(C)); // 20
    printf("C: %s\n", C); // JOHN 
    printf("len: %d\n", len); // 4
}
