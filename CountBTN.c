#include <stdio.h>

int main(){
    int blank;
    int tab;
    int newline;
    int count;

    count = 0;
    blank = 0;
    tab = 0;
    newline= 0;
    while ((count = getchar()) != EOF){
        if (count == ' ')
            ++blank;
        if (count == '\t')
            ++tab;
        if (count == '\n')
            ++newline;
    }        
    printf ("Number of blanks: %d\t Number of newlines: %d\t Number of tabs: %d\t", blank, newline, tab);

}