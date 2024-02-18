//
// Created by dimak on 18.02.2024.
//

#ifndef TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_2_H
#define TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_2_H

#include <deque>
#include "CircularBuffer.h"

class CircularBuffer_2 : public CircularBuffer {
public:
    CircularBuffer_2(size_t size);

    void put(size_t val) override;

    int get() override;

    bool empty() const override;

    bool full() const override;

    size_t capacity() const override;

    void buf_check();

private:
    std::deque<size_t> buf;
    const size_t max_size;
};

#endif //TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_2_H
