#include <cs50.h>
#include <stdio.h>

void print_row(int space, int bricks)
{ // Permite imprimir os blocos alinhados à direita.
    for (int y = space; y > 0; y--)
    {
        printf(" ");
    }
    // Imprime blocos.
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    int x;

    do
    {
        // Ask what is the height.
        x = get_int("Height: ");
    }
    while (x < 1);

    // Print a pyramid of #, according to height.
    for (int i = 0; i < x; i++)
    {
        print_row(x - i - 1, i + 1);
    }
}
