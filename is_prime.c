/* https://www.codewars.com/kata/5262119038c0985a5b00029f */

#include <stdbool.h>
#include <math.h>

bool is_prime(int number) 
{
    int square_root = sqrt(number) + 1;
    int i = 2;

    while (i < square_root) { if (!(number % i)) { return false; } ++i; }

    return true; 
}