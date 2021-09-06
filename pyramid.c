/* https://www.codewars.com/kata/515f51d438015969f7000013 */

#include <stdlib.h>
#include <stdio.h>

int **pyramid (unsigned n)
{
    if (!n) { return NULL ; }
    int **pyramid = (int **)malloc(n * sizeof(int *));
  
    size_t i, j;
    for (i = 0; i < n; ++i) {
        pyramid[i] = (int *)calloc(i + 1, sizeof(int));
        for (j = 0; j < i + 1; ++j) { pyramid[i][j] = 1; }
    }
    
    return pyramid;
}

void free_pyramid (unsigned n, int* pyramid_array[n])
{
    size_t i;
    for (i = 0; i < n; ++i) { free(pyramid_array[i]); }
    free(pyramid_array);
}

void print_pyramid (int **pyramid, unsigned n)
{
    if (!n) { printf("Pyramid is empty\n"); return; }
    
    size_t i, j;
    for (i = 0; i < n; ++i) { 
        printf("[ ");
        for (j = 0; j < i + 1; ++j) { printf("%d ", pyramid[i][j]); }
        printf("]\n");
    }
}

int main() 
{
    int **my_pyramid = NULL;

    for (int i = 0; i < 30; ++i) {
        printf("< %d >\n", i);
        my_pyramid = pyramid(i);
        print_pyramid(my_pyramid, i);
        free_pyramid(i, my_pyramid);
        printf("\n");
    }
    

    return 0;
}