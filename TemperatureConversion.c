#include <stdio.h>

int main(){
    float celsius, fahr;
    float step, end, start;

    start = -17.8f;
    end = 148.9f;
    step = 11.0f;
    celsius = start;
    printf("Celsius\tFahr\n");
    while(celsius <= end){
        fahr = (celsius * 9.0/5.0) + 32.0f;
        printf("%.1f\t%.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}