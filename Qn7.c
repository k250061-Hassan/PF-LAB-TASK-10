#include <stdio.h>
#include <string.h>

int main() {
    // Data initialization
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][20] = {
        {"Math", "Physics", "Chemistry", "", ""},
        {"Biology", "English", "", "", ""},
        {"History", "Geography", "Physics", "Art", ""},
        {"Computer Science", "Physics", "Calculus", "Data Structures", "Algorithms"}
    };
    int num_courses[4] = {3, 2, 4, 5};
    int i, j;
    char target_course[] = "Physics";
 	
    printf("--- Student Registered Courses ---\n");
    for (i = 0; i < 4; i++) {
        printf("%s is taking: ", students[i]);
        for (j = 0; j < num_courses[i]; j++) {
            printf("%s", courses[i][j]);
            if (j < num_courses[i] - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }

    printf("\n--- Students taking %s ---\n", target_course);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < num_courses[i]; j++) {
            if (strcmp(courses[i][j], target_course) == 0) {
                printf("%s\n", students[i]);
                break;
            }
        }
    }

    printf("\n--- Overloaded Students ---\n");
    for (i = 0; i < 4; i++) {
        if (num_courses[i] > 3) {
            printf("%s is overloaded with %d courses\n", students[i], num_courses[i]);
        }
    }

    return 0;
}
