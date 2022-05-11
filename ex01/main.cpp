#include <iostream>
#include "Span.h"

int main() {
    Span list(20005);

    for (int i = 0; i < 10000; i+=2) {
        list.addNumber(i);
    }
    list.addNumber(10);
    list.addNumber(5);
    list.addNumber(7);
    list.addNumber(9);
    list.addNumber(11);

    std::vector<int> test(1,100000);
    list.addRange(test.begin(), test.end());

    std::cout << "shortest "<<list.shortestSpan() << std::endl;
    std::cout << "longest "<<list.longestSpan() << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
