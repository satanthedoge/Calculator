#include <stdio.h>
#include <stdlib.h>

int addition (int A, int B)
{
    return A+B;
}
int soustraction (int A, int B)
{
    return A-B;

}
int main()
{

    printf("L'addition de a et b est égale à %d\n", addition(1,4));
    printf("La soustraction de a et b est égale à %d\n", soustraction(1,4));

    return 0;
}
