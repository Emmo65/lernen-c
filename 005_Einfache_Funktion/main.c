#include <stdio.h>
#include <stdlib.h>

int quadrat(int zahl)
{
    return zahl*zahl;
}

int main()
{
    int zahl,ergebnis;


    printf("Gebe eine Zahl ein um das Quadrat zu berechnen und bestaetige mit Enter: ");
    scanf("%d", &zahl);
    ergebnis=quadrat(zahl);
    printf("Das Quadrat ist: %d\n", ergebnis);
    return 0;
}
