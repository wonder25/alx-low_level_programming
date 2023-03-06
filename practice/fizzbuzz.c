#include <stdlib.h>
#include <stdio.h>

int main() {
    // Write C code here
    int a = 1;
    char c[] = "fizz";
    char f[] = "buzz";
    char fb[] = "fizzbuzz";
    
    while (a <= 100)
    {
        if ((a % 3 == 0) && (a % 5 == 0))
            printf("%s \n", fb);
        else if (a % 3 == 0)
            printf("%s \n", c);
        else if (a % 5 == 0)
            printf("%s \n", f);
        else
            printf("%d \n", a);
            a++;
    }
    printf("\n");
    return (0);
}
