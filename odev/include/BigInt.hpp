#ifndef BIGINT_HPP
#define BIGINT_HPP
#include "ReverseOrderedArrayList.hpp"
#include<string>
#include<fstream>
class BigInt {

public:
    BigInt(std::string);
    
    friend BigInt &operator*=(BigInt &, const BigInt &);
    friend BigInt &operator+=(BigInt &, const BigInt &);
    
    void set(int, int);
    void printNumber();

    ReverseOrderedArrayList *arrayList;
};

#endif