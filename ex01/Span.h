//
// Created by Prime_Games_2 on 11.05.2022.
//

#ifndef EX01_SPAN_H
#define EX01_SPAN_H

# include <vector>
# include <iostream>

class Span {
private:
    std::vector<int> _vector;
    unsigned int _size;
public:
    Span(unsigned int size);
    ~Span();

    void addNumber(int newNum);
    void addRange(std::vector<int>::iterator start, std::vector<int>::iterator finish);
    int shortestSpan();
    int longestSpan();

};


#endif //EX01_SPAN_H
