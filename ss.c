#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int numbers[MAX_SIZE];
    int num, size, index, i;

    // open the file for reading
    FILE *file = fopen("num.txt", "r");

    // read the contents of the file into the array
    size = 0;
    while (fscanf(file, "%d", &numbers[size]) != EOF) {
        size++;
    }

    // close the file
    fclose(file);

    // get the user-supplied number
    printf("Enter a number to insert: ");
    scanf("%d", &num);

    // find the index where the user-supplied number should be inserted
    index = 0;
    while (index < size && numbers[index] < num) {
        index++;
    }

    // shift the array elements to the right to make space for the new element
    for (i = size; i > index; i--) {
        numbers[i] = numbers[i - 1];
    }

    // insert the user-supplied number into the array
    numbers[index] = num;

    // open the file for writing
    file = fopen("num.txt", "w");

    // write the updated array back to the file
    for (i = 0; i < size + 1; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    // close the file
    fclose(file);

    return 0;
}
