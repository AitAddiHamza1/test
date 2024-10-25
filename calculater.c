
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <complex.h>

void Delta();

int main() 
{
    int M;
    printf("If you want to do the math, Enter 1; to calculate delta, Enter 2: ");
    scanf("%d", &M);

    if (M == 1) 
    {
        float A, B;
        char R;
        char response = 'Y';

        do {
         
            printf("Please enter the value of A: ");
            scanf("%f", &A);
            printf("Choose the operation you want: |+|-|*|/| : ");
            scanf(" %c", &R);
            printf("Please enter the value of B: ");
            scanf("%f", &B);

            if (R == '+') {
                printf("The sum is %.2f\n", A + B);
            } else if (R == '-') {
                printf("The difference is %.2f\n", A - B);
            } else if (R == '*') {
                printf("The product is %.2f\n", A * B);
            } else if (R == '/') {
                if (B == 0) {
                    printf("Division is impossible because B is zero.\n");
                } else {
                    printf("The quotient is %.2f\n", A / B);
                }
            } else {
                printf("Error: You must enter one of the operations |+|-|*|/|\n");
            }

            printf("\nWould you like to calculate again? (Y/N): ");
            scanf(" %c", &response);
            response = toupper(response);

        } while (response == 'Y');  

        printf("Do yous want to solve a quadratic equation? (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
        if (response == 'Y') 
        {
            Delta();
        }
        printf("Thanks for calculating!\n");
    }
    else if (M == 2)
    {
       Delta(); 
    }

    return 0;
}

void Delta() {
    float a, b, c;
    double X1, X2;
    double complex Z1, Z2;
    double delta;
    char response = 'Y';

    do {
        printf("Please enter the value of A: ");
        scanf("%f", &a);
        printf("Please enter the value of B: ");
        scanf("%f", &b);
        printf("Please enter the value of C: ");
        scanf("%f", &c);

        delta = (b * b) - (4 * a * c);
        printf("Delta = %.2f\n", delta);

        if (delta > 0) {
            X1 = (-b - sqrt(delta)) / (2 * a);
            X2 = (-b + sqrt(delta)) / (2 * a);
            printf("X1 = %.2f\n", X1);
            printf("X2 = %.2f\n", X2);
        }
        else if (delta == 0) {
            X1 = (-b) / (2 * a);
            printf("X1 = %.2f\n", X1);
        }
        else {
            Z1 = (-b + csqrt(delta)) / (2 * a);
            Z2 = (-b - csqrt(delta)) / (2 * a);
            printf("Z1 = %.2f + %.2fi\n", creal(Z1), cimag(Z1));
            printf("Z2 = %.2f + %.2fi\n", creal(Z2), cimag(Z2));
        }

        printf("\nWould you like to solve a quadratic equation? (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);

    } while (response == 'Y'); 
}
