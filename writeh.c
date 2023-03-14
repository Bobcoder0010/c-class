#include<stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("num.txt", "r+");

    do {
        c = getc(fp);
        if (c == 'h') {
            fseek(fp, -1, SEEK_CUR);
            putc('H', fp);
        }
    } while (c != EOF);

    fclose(fp);

    return 0;
}
