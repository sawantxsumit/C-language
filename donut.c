#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define DONUT_WIDTH 48
#define DONUT_HEIGHT 16

char donut_pixels[DONUT_WIDTH * DONUT_HEIGHT];

void clear_screen() {
    printf("\x1b[H");
}

void render_frame(double A, double B) {
    double z[DONUT_HEIGHT][DONUT_WIDTH];
    char b[1760];
    int k;

    clear_screen();
    for (; k < 1760; b[k] = k % 80 ? b[k] : 10, k++);

    for (;;)
    {
        memset(z, 0, sizeof(z));
        memset(b, 32, 1760);

        for (int j = 0; 6.28 > j; j += 0.07)
            for (int i = 0; 6.28 > i; i += 0.02)
            {
                double c = sin(i),
                       d = cos(j),
                       e = sin(A),
                       f = sin(j),
                       g = cos(A),
                       h = d + 2,
                       D = 1 / (c * h * e + f * g + 5),
                       l = cos(i),
                       m = cos(B),
                       n = sin(B),
                       t = c * h * g - f * e;

                int x = 40 + 30 * D * (l * h * m - t * n),
                    y = 12 + 15 * D * (l * h * n + t * m),
                    o = x + 80 * y,
                    N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[y][x])
                {
                    z[y][x] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }

        printf("\x1b[H");
        for (k = 0; 1760 > k; k++)
            putchar(k % 80 ? b[k] : 10);

        A += 0.04;
        B += 0.02;
        usleep(30000);
    }
}

int main() {
    double A = 0, B = 0;
    render_frame(A, B);
    return 0;
}
