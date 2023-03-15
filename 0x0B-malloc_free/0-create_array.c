#include <main.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0) // Return NULL if size is 0
        return NULL;
    
    char *arr = malloc(size * sizeof(char)); // Allocate memory for array
    
    if (arr == NULL) // Check if memory allocation was successful
        return NULL;
    
    for (unsigned int i = 0; i < size; i++) {
        arr[i] = c; // Initialize array elements with given char
    }
    
    return arr; // Return pointer to array
}
