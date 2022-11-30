/*
 @author EHilder2022
 @date 2022/11/30 09:37
 */
#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAXTL 40
#define MAXAUTL 40
#define MAX 100
struct book {
    char title[MAXTL];
    char author[MAXAUTL];
    float value
};
char * s_gets(char *, int);
int main(void) {
    int index = 0;
    struct book library[MAX];
    printf("Please enter the book title.\n");
    printf("Please [enter] at the start of a line to stop.\n");
    while(index < MAX && s_gets(library[index].title, MAXTL) && library[index].title[0] != '\0') {
        printf("Now enter the author.\n");
        s_gets(library[index].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[index++].value);
        while(getchar() != '\n') continue;
    }
    if (index > 0) {
        printf("Here is the list of your book.\n");
        for(int i = 0; i < index; ++i) {
            printf("%s by %s $:%.2f\n", library[i].title, library[i].author, library[i].value);
        }
    }else {
        printf("No books? Too bad.\n");
    }
    return 0;
}
char * s_gets(char *p, int n) {
    char *ret_val;
    char *st;
    ret_val = fgets(p, n, stdin);
    if (ret_val) {
        st = strchr(ret_val, '\n');
        if (st) {
            *st = '\0';
        }else {
            while(getchar() != '\n') continue;
        }
    }
    return ret_val;
}

