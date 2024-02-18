//
// Created by dimak on 18.02.2024.
//

#ifndef TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_1_H
#define TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_1_H

#include <vector>
#include "CircularBuffer.h"

class CircularBuffer_1 : public CircularBuffer {
public:
    CircularBuffer_1(size_t size);

    void put(size_t val) override;

    int get() override;

    bool empty() const override;

    bool full() const override;

    size_t capacity() const override;

    void buf_check();

private:
    std::vector<size_t> buf;
    size_t head = 0;
    size_t tail = 0;
    const size_t max_size;
    bool full_flag = 0;
};

#endif //TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_1_H
