#include <stdio.h>

biggest3()
{
    int c = 25, b = 22, a = 18;

    // Finding largest by comparing using relational operators
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

 //   return 0;
}
