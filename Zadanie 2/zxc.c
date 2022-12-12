#include <stdio.h>
#include <conio.h>

void go_south_east(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon +1;
}

int main() {
    int latitude = 55;
    int longitude = 82;

    go_south_east(&latitude, &longitude);

    printf("Stop: [%d, %d,]", latitude, longitude);
    getch();
    return 0;
}