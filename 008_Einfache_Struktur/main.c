#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Auto {
    char marke[20];
    int geschwindigkeit;
};

int main()
{
    struct Auto meinAuto;
    strcpy(meinAuto.marke, "BMW");
    meinAuto.geschwindigkeit = 180;
    printf("Marke: %s\n", meinAuto.marke);
    printf("Geschwindigkeit: %d km/h\n", meinAuto.geschwindigkeit);


    return 0;
}
