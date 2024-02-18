//
// Created by dimak on 18.02.2024.
//

#ifndef TEST_TASK_LESTA_GAMES_ISEVEN_H
#define TEST_TASK_LESTA_GAMES_ISEVEN_H

/// function from task
//bool isEven(int value) {
//  return value%2==0;
//  }

/// my function
bool isEven(int value) {
    return !(value & 1);
}

#endif //TEST_TASK_LESTA_GAMES_ISEVEN_H
