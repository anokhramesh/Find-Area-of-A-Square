//Find Area of Square using math function.
#include <stdio.h>
#include <math.h>

int main()
{float side;
    printf("Find Area of Square using math function.\n");
    printf("----------------------------------------");
    printf("\nEnter one Side of the Square\n");
    scanf("%f",&side);
    printf("The Area of Square is = %.2f\n",pow(side,2));

    return 0;
}
