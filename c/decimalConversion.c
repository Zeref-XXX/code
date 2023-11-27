#include <stdio.h>
void convert(int number, int base)
{
    char arr[50];
    int rem = 0;
    int i = 0, j;
    while (number > 0)
    {
        rem = number % base;
        number /= base;
        if (rem > 9 && rem < 16)
        {
            arr[i++] = rem - 10 + 'A';
        }
        else
            arr[i++] = rem + '0';
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", arr[j]);
    }
}
int main()
{
    int number;
    printf("Enter a Decimal Number: ");
    scanf("%d", &number);
    printf("1.Dcimal to Binary\n2.Decimal to octal\n3.Decimal to Hexadecimal\n");
    int choice;
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        convert(number, 2);
        break;
    case 2:
        convert(number, 8);
        break;
    case 3:
        convert(number, 16);
        break;
    default:
        break;
    }
    printf("\n");
    return 0;
}