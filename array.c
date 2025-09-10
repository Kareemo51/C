#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[6];   // no need to initialize, since you overwrite anyway
    int i = 0;

    // input values
    for (int ind = 0; ind <= 5; ind++) {
        printf("enter value for index %d:\n", ind);
        scanf("%d", &x[ind]);
    }

    // print values
    for (int ind = 0; ind <= 5; ind++) {
        printf("the new value at index %d is %d\n", ind, x[ind]);
    }

    // now the extra part you had in comments:
    printf("please enter index to print its value:\n");
    scanf("%d", &i);
    printf("%d\n", x[i]);

    printf("enter new value for index 0\n");
    scanf("%d", &x[0]);
    printf("the new value is: %d\n", x[0]);

    return 0; // <-- important, closes main properly
}
