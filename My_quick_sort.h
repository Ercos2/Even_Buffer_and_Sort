//
// Created by dimak on 18.02.2024.
//

#ifndef TEST_TASK_LESTA_GAMES_MY_QUICK_SORT_H
#define TEST_TASK_LESTA_GAMES_MY_QUICK_SORT_H

void quick_sort(int* mass, int start, int end) {
    int left, right, midle_num;

    left = start; right = end;
    midle_num = mass[(start + end) / 2];

    do {
        while ((mass[left] < midle_num) && (left < end)) left++;
        while ((midle_num < mass[right]) && (right > start)) right--;

        if (left <= right) {
            int temp;
            temp = mass[left];
            mass[left] = mass[right];
            mass[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);
    if (start < right) quick_sort(mass, start, right);
    if (left < end) quick_sort(mass, left, end);
}

#endif //TEST_TASK_LESTA_GAMES_MY_QUICK_SORT_H
