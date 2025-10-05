#include <stdio.h>
#include <math.h>

int main() {
    int d, h, w;
    scanf("%d %d %d", &d, &h, &w);
    double n = sqrt((h*h)+(w*w));
    double height = d*h/n;
    double width = d*w/n;
    printf("%d %d", (int)height, (int)width);
    return 0;
}