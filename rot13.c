/* https://www.codewars.com/kata/530e15517bc88ac656000716 */
#include <string.h>
#include <stddef.h>
#include <ctype.h>

char *rot13(const char *src)
{
    char *encrypt = (char *)calloc(sizeof(src), sizeof(char));
    if (!encrypt) { perror("ENOMEM"); return NULL; }
    strncpy(encrypt, src, sizeof(src));

    while (*current) { 
        if (isalpha(*current)) { *current += (*current | 32) < 'n' ? 13 : - 13; }
        ++current;
    } 

    return encrypt;
}
