#include "lodepng/lodepng.h"

int main() {
    std::vector<unsigned char> image;
    unsigned width, height;
    lodepng::decode(image, width, height, "test.png");

    // Manipulate pixels here

    lodepng::encode("test.png", image, width, height);

    return 0;
}