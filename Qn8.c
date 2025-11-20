#include <stdio.h>
#include <string.h>

int main() {
    char appetizers[3][50] = {"Spring Rolls", "Garlic Bread", "Bruschetta"};
    float app_prices[3] = {6.99, 4.99, 7.99};

    char main_course[3][50] = {"Spaghetti Carbonara", "Chicken Alfredo", "Margherita Pizza"};
    float main_prices[3] = {12.99, 14.99, 9.99};

    char desserts[3][50] = {"Chocolate Cake", "Ice Cream Sundae", "Cheesecake"};
    float des_prices[3] = {8.99, 5.99, 10.99};

    int i;

    printf("========================================\n");
    printf("          RESTAURANT MENU\n");
    printf("========================================\n\n");

    printf("--- Appetizers ---\n");
    for (i = 0; i < 3; i++) {
        printf("%-25s $%.2f\n", appetizers[i], app_prices[i]);
    }
    printf("\n");

    printf("--- Main Course ---\n");
    for (i = 0; i < 3; i++) {
        printf("%-25s $%.2f\n", main_course[i], main_prices[i]);
    }
    printf("\n");

    printf("--- Desserts ---\n");
    for (i = 0; i < 3; i++) {
        printf("%-25s $%.2f\n", desserts[i], des_prices[i]);
    }
    printf("\n");

    printf("========================================\n");
    printf("        BUDGET-FRIENDLY OPTIONS\n");
    printf("========================================\n\n");

    printf("--- Appetizers ---\n");
    for (i = 0; i < 3; i++) {
        if (app_prices[i] < 10.00) {
            printf("%-25s $%.2f\n", appetizers[i], app_prices[i]);
        }
    }
    printf("\n");

    printf("--- Main Course ---\n");
    for (i = 0; i < 3; i++) {
        if (main_prices[i] < 10.00) {
            printf("%-25s $%.2f\n", main_course[i], main_prices[i]);
        }
    }
    printf("\n");

    printf("--- Desserts ---\n");
    for (i = 0; i < 3; i++) {
        if (des_prices[i] < 10.00) {
            printf("%-25s $%.2f\n", desserts[i], des_prices[i]);
        }
    }
    printf("\n");

    return 0;
}
