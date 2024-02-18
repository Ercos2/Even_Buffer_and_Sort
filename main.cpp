#include <iostream>

#include "CircularBuffer.h"
#include "CircularBuffer_1.h"
#include "CircularBuffer_2.h"

#include "isEven.h"

#include "My_quick_sort.h"

int main() {

    std::cout << "is 5 even? " << isEven(5) << "\n";
    std::cout << "is 4 even? " << isEven(4) << "\n";

    std::cout << "\n";

    CircularBuffer *buf_1 = new CircularBuffer_1(4);
    buf_1->buf_check();

    std::cout << "\n";

    CircularBuffer *buf_2 = new CircularBuffer_2(4);
    buf_2->buf_check();

    std::cout << "\n";

    int *mass = new int[]{1, 3, 6, 2, 5, 4};
    for (int a = 0; a < 6; ++a) {
        std::cout << mass[a] << "\n";
    };

    quick_sort(mass, 0, 5);
    std::cout << "\n";

    for (int a = 0; a < 6; ++a) {
        std::cout << mass[a] << "\n";
    };

    return 0;
}
