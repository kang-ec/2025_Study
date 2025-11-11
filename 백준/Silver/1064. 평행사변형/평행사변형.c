#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) {
        printf("-1.0\n");
        return 0;
    }
    double ab = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    double bc = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    double ca = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    double p1 = ab + bc;
    double p2 = bc + ca;
    double p3 = ca + ab;
    double max = p1, min = p1;
    if (p2 > max) max = p2;
    if (p3 > max) max = p3;
    if (p2 < min) min = p2;
    if (p3 < min) min = p3;
    printf("%.10lf\n", 2 * (max - min));
    return 0;
}