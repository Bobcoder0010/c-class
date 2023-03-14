
/*wap tp store user supplied string into a data file named"mytext.dat"*/
#include<stdio.h>
#include <stdio.h>
void write
int main()



 {
 char str[100];
    FILE *fp;

    // Open the file in write mode
    fp = fopen("mytext.dat", "w");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Write the string to the file
    fprintf(fp, "%s", str);

    // Close the file
    fclose(fp);

    printf("String saved to file successfully.");

    return 0;


}