#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl1, zahl2, summe;
    printf("Bitte gib die erste Zahl ein: ");
    scanf("%d", &zahl1);

    printf("Bitte gib die zweite Zahl ein: ");
    scanf("%d", &zahl2);

    summe=zahl1+zahl2;

    printf("Das  Ergebnis lautet: %d\n", summe);
;
    return 0;
}
