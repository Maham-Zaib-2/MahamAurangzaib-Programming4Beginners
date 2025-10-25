#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);                
    s = realloc(s, strlen(s) + 1);      

    // Split and print each word
    char *word = strtok(s, " ");        
    while (word != NULL) {
        printf("%s\n", word);           
        word = strtok(NULL, " ");       
    }

    free(s);                            
    return 0;
}
