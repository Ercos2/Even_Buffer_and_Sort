//
// Created by dimak on 18.02.2024.
//
#include "CircularBuffer_2.h"

CircularBuffer_2 :: CircularBuffer_2(size_t size) : max_size(size) {}

void CircularBuffer_2 :: put(size_t val) {
    if(buf.size() == max_size) {
        buf.pop_front();
    }
    buf.push_back(val);
}

int CircularBuffer_2 :: get() {
    if(buf.empty()) {
        return -1;
    }
    int val = buf.front();
    buf.pop_front();
    return val;
}

bool CircularBuffer_2 :: empty() const {
    return buf.empty();
}

bool CircularBuffer_2 :: full() const {
    return buf.size() == max_size;
}

size_t CircularBuffer_2 :: capacity() const {
    return max_size;
}