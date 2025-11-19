#include <stdio.h>
#include <string.h>

int main(){

    char names[5][20] = {"Alice", "Bob", "Charlie", "Johny", "Murphy"}, scorer[20];
    int marks[5] = {85, 92, 78, 90, 80}, sum = 0, max = 0;
    float avg = 0.00;

    printf("\n======================\n|Names\t\tMarks|\n======================\n");
    
    for(int i=0; i<5; i++){
        printf("%s\t\t %d\n", names[i], marks[i]);
    }
    for(int i=0; i<5; i++){
        sum+=marks[i];
        if(marks[i] > max){
           max = marks[i];
           strcpy(scorer, names[i]);
        }
    }
    if(max){
        printf("======================\nHighest Scorer: %s with %d marks.", scorer, max);
    }
    
    avg = sum/5.00;
    printf("\nAverage Marks: %.2f", avg);


    return 0;
}