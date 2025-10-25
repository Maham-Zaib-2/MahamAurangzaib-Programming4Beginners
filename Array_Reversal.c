#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    // Reading array elements
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // Print array in reverse order
    for(int i = num - 1; i >= 0; i--) {
        printf("%d", *(arr + i));  // same as arr[i]
        if(i != 0) printf(" ");    // avoid trailing space
    }

    printf("\n");
    free(arr); // free allocated memory
    return 0;
}
