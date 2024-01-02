/* A number or a word or a phrase if read backwards
    gives the same number or a word or a phrase as
    it is being read forward..

    Target is reverse the numbers..
    result = 0
    num = ....
    a = num

    remainder = a%10
    result = result * 10 + remainder
    a = a/10
*/

#include <stdio.h>

int main()
{
    int n, result = 0, a, rem;
    printf("Enter the number: \n");
    scanf("%d", &n);

    a = n;
    while (a != 0)
    {
        rem = a % 10;
        result = result * 10 + rem;
        a = a / 10;
    }
    if (result == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}