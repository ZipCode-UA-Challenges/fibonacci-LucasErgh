/**
 * @file fibonacci.cpp
 * 
 * @brief Implementation file for the fibonacci and fibonacciRacer
 *        free functions declared in include/fibonacci.hpp.
 */

#include "fibonacci.hpp"
#include <iostream>

namespace fibonacci {

void fibonacciRacer(std::array<uint64_t, MAX_64_BIT_FIBONACCI_INDEX + 1>& results, int start, int end) {
    /**
     * @todo Implement the fibonacciRacer function declared in include/fibonacci.hpp.
     */

    int index = 0;
    uint64_t cur = 1;
    uint64_t prev = 1;
    uint64_t prevPrev = 0;

    while (index <= end) {
        if (index >= start && index <= end) {
            results[index - start] = cur;
            index++;
        }

        cur = prev + prevPrev;

        prevPrev = prev;
        prev = cur;
    }
}

uint64_t fibonacci(int n) {
    /**
     * @todo Implement the fibonacci function declared in include/fibonacci.hpp.
     */

    int index = 1;

    uint64_t cur = 1;
    uint64_t prev = 1;
    uint64_t prevPrev = 0;

    while (index <= n) {
    // std::cout << "Index: " << index << "    " << cur << '\n';
        if (index == n) {
            return cur;
        }
        ++index;

        cur = prev + prevPrev;

        prevPrev = prev;
        prev = cur;

    }
        return -1;
}

} // namespace fibonacci
