#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char name[50];
    printf("Gebe deinen Namen ein: ");
    fgets(name,50,stdin);

    for (int i=0 ; name[i] !='\0' ; i++)
    {
        name[i] = toupper(name[i]);
    }

    printf("%s", name);

    return 0;
}
