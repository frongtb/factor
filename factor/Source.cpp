#include<stdio.h>
int main() 
{
    int num, div = 2;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Factoring Result : ");
    while (div <= num) {
        if (num % div == 0) {
            printf("%d", div);
            num /= div;
            if (num != 1) {
                printf(" x ");
            }
            div = 1;
        }
        div++;
    }
    return 0;
}
