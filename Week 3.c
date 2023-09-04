#include <stdio.h>
#include <ctype.h>
#include <string.h>

char keyword[30][30] = {"int", "while", "break", "for", "do", "if", "float", "char", "switch", "double",
                        "short", "long", "unsigned", "sizeof", "else", "register", "extern", "static",
                        "auto", "case", "volatile", "enum", "typedef"};

char id[20], num[10], rel[2];

char symbol_table[30][20];
int empty = 0;

int check_keyword(char s[]) {
    int i;
    for (i = 0; i < 23; i++) // Changed the loop limit to 23
        if (strcmp(s, keyword[i]) == 0)
            return 1;
    return 0;
}

void store_symb_tab(char id[], char symb_tab[][20]);

int main() {
    FILE *fp1, *fp2;
    char c;
    int state = 0;
    int i = 0, j = 0, k = 0; // Initialize k
    int k; // Declare k
    fp1 = fopen("x.txt", "r");
    fp2 = fopen("y.txt", "w");

    while ((c = fgetc(fp1)) != EOF) {
        switch (state) {
            // ... (rest of your code remains the same)
        }
    }

    if (state == 11)
        fprintf(fp2, "Comment did not close");
    fclose(fp1);
    fclose(fp2);
    return 0;
}

void store_symb_tab(char id[], char symb_tab[][20]) {
    int k;
    for (int i = 0; i < 30; i++) {
        if (strcmp(id, symbol_table[i]) == 0) {
            k = 1;
        }
    }
    if (k != 1) {
        strcpy(symbol_table[empty], id);
        empty++;
    }
}
