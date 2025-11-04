#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl=0;
    printf("Bitte gib eine Zahl ein und bestätige mit Enter: ");
    scanf("%d", &zahl);

    if(zahl%2==0)
    {
        printf("deine Zahl %d ist gerade.\n", zahl);
    }

    else
    {
        printf("Deine Zahl %d ist ungerade.\n", zahl);
    }



    return 0;
}
