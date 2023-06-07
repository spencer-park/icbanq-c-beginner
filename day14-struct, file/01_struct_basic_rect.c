#include <stdio.h>

struct Rectangle {
    int width;
    int height;
    int x;
    int y;
};

int main() {
    struct Rectangle rect1 = {10, 20, 5, 5};
    printf("Width: %d\n", rect1.width);
    printf("Height: %d\n", rect1.height);
    printf("X: %d\n", rect1.x);
    printf("Y: %d\n", rect1.y);

    return 0;
}
