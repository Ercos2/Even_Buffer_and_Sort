//
// Created by dimak on 18.02.2024.
//

#ifndef TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_H
#define TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_H


#include <iostream>
#include <deque>

class CircularBuffer {
public:
    virtual void put(size_t val) = 0;

    virtual int get() = 0;

    virtual bool empty() const = 0;

    virtual bool full() const = 0;

    virtual size_t capacity() const = 0;

    void buf_check();

};



#endif //TEST_TASK_LESTA_GAMES_CIRCULARBUFFER_H
