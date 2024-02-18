//
// Created by dimak on 18.02.2024.
//

#include "CircularBuffer.h"

void CircularBuffer :: buf_check() {
    std::cout << "full? " << this->full() << "\n";
    std::cout << "empty? " << this->empty() << "\n";

    this->put(1);
    this->put(2);
    this->put(3);
    this->put(4);
    this->put(5);

    std::cout << "full? " << this->full() << "\n";
    std::cout << "empty? " << this->empty() << "\n";

    std::cout << this->get() << "\n";
    std::cout << this->get() << "\n";
    std::cout << this->get() << "\n";
    std::cout << this->get() << "\n";
}
