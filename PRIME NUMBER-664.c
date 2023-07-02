#include <stdio.h>


int main()
{
    int number;

    while (1)
    {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);

        if (number == 0)
            break;

        if (isPrime(number))
            printf("%d is a prime number.\n", number);
        else
            printf("%d is not a prime number.\n", number);
    }

    return 0;
}
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

