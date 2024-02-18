//
// Created by dimak on 18.02.2024.
//
#include "CircularBuffer_1.h"

CircularBuffer_1 :: CircularBuffer_1(size_t size) : buf(std::vector<size_t>(size)), max_size(size) {}

void CircularBuffer_1 :: put(size_t val) {
    buf[head] = val;
    if(full_flag) {
        tail = (tail + 1) % max_size;
    }
    head = (head + 1) % max_size;
    full_flag = (head == tail);
}

int CircularBuffer_1 :: get() {
    if(empty()) {
        return -1;
    }
    auto val = buf[tail];
    full_flag = false;
    tail = (tail + 1) % max_size;
    return val;
}

bool CircularBuffer_1 :: empty() const {
    return !full_flag && (head == tail);
}

bool CircularBuffer_1 :: full() const {
    return full_flag;
}

size_t CircularBuffer_1 :: capacity() const {
    return max_size;
}