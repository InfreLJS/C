#include <math.h>
#include <stdio.h>

void func(double start, double end);

int main() {
    printf("-0.01x^4+0.14x^3-0.76x^2-0.72x+6.84=0의 근\n");
    func(-20, 0);
    func(0, 10);
    return 0;
}

void func(double start, double end) {
    double startY = ((-0.01 * pow(start, 4)) + (0.14 * pow(start, 3)) -
                     (0.76 * pow(start, 2)) - (0.72 * start) + 6.84);
    double endY = ((-0.01 * pow(end, 4)) + (0.14 * pow(end, 3)) -
                   (0.76 * pow(end, 2)) - (0.72 * end) + 6.84);

    printf("f(a) = %lf, f(b) = %lf\n", startY, endY);

    if ((startY < 0 && endY > 0) || (startY > 0 && endY < 0)) {
        if ((end - start) < 0.001) {
            printf("[%.2lf]\n", (start + end) / 2);
            return;
        } else {
            func(start, (start + end) / 2);
            func((start + end) / 2, end);
            return;
        }
    } else {
        return;
    }
}
