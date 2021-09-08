/* https://www.codewars.com/kata/515f51d438015969f7000013 */
#include <stdlib.h>

int **pyramid (unsigned n)
{
    if (!n) { return NULL ; }
    int **pyramid = (int **)calloc(n, sizeof(int *));
  
    size_t i, j;
    for (i = 0; i < n; ++i) {
        pyramid[i] = (int *)calloc(i + 1, sizeof(int));
        for (j = 0; j < 1 + i; ++j) { pyramid[i][j] = 1; }
    }
    
    return pyramid;
}

void free_pyramid (unsigned n, int* pyramid_array[n])
{
    size_t i;
    for (i = 0; i < n; ++i) { free(pyramid_array[i]); }
    free(pyramid_array);
}
