# include <stdio.h>

#define Step = 20
#define Upper = 300
#define Lower = 0


int main(){
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%d\t%f\n", fahr, (5.0/9.0) * (fahr-32));
}