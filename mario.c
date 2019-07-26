#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, spaces, hashes;
    do
    {
        n=get_int("Height ");
    }
    while(n < 1 || n > 8);

for (int i = 1; i <= n; i++)
    {
        for(int s = n; s > i; s--)
    {
        printf(" ");
    }

            for(int h = 0; h < i; h++)
    {
        printf("#");
    }
    {
        printf("\n");
    }
    }
}