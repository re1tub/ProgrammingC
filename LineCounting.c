#include <stdio.h>

int main(){
    int c; // Holds the current character read by getchar()
    int nl; // Holds the running total of newlines 

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}