/* https://www.codewars.com/kata/530e15517bc88ac656000716 */
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>

char *rot13(const char *src)
{
    char *crypted = (char *)calloc(sizeof(src), sizeof(char));
    char *current = crypted;
    strcpy(crypted, src);
    
    while (*current) { 
        if (isalpha(*current)) { *current += (*current | 32) < 'n' ? 13 : -13; }
        ++current;
    }

    return crypted;
}
