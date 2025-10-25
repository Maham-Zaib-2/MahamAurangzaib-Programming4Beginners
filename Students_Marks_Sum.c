#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    int start_index;

    if (gender == 'b')
        start_index = 0;
    else
        start_index = 1;

    for (int i = start_index; i < number_of_students; i += 2) {
        sum += *(marks + i); 
    }

    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);  

    int sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    return 0;
}
