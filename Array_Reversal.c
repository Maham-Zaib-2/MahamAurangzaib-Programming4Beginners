#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(int i = num - 1; i >= 0; i--) {
        printf("%d", *(arr + i));  // same as arr[i]
        if(i != 0) printf(" ");    // avoid trailing space
    }

    printf("\n");
    free(arr); 
    return 0;
}
