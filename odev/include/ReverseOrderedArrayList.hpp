//
// Created by hakki on 4/15/2022.
//

#ifndef DATA_STRUCTURES_REVERSE_ORDERED_ARRAY_LIST_H
#define DATA_STRUCTURES_REVERSE_ORDERED_ARRAY_LIST_H

#include <stdio.h>
#include <stdlib.h>

// ReverseOrderedArrayList class
// 100 -> [1, 0, 0]
//         ^  ^  ^
//         |  |  |
//         |  |  +-- index == elementAt(0) == size - 0
//         |  +---- index == elementAt(1) == size - 1
//         +------ index == elementAt(2) == size - 2
//
// Add 2 to index at elementAt(size) == size - size == 0
//
// 2100 -> [2, 1, 0, 0]
class ReverseOrderedArrayList {
private:
    int *items;
    int length;
    int capacity;

public:
    ReverseOrderedArrayList();
    ReverseOrderedArrayList(int);
    ~ReverseOrderedArrayList();
    int elementAt(int);
    void add(int);
    void set(int, int);
    int size();
    void printAsOrdered();
    void resize(int);
};

#endif //DATA_STRUCTURES_REVERSE_ORDERED_ARRAY_LIST_H
