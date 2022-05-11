//
// Created by Prime_Games_2 on 11.05.2022.
//

#include "Span.h"
#include <math.h>

Span::Span(unsigned int size) {
_size = size;
}

Span::~Span() {

}

int Span::shortestSpan() {

    if(_vector.size() < 2)
        throw std::invalid_argument("Do not have 2 lists\n");
    int rez = abs(_vector[0] - _vector[1]);

    for (int i = 0; i < _vector.size(); i++)
    {
        for (int j = i+1; j < _vector.size(); j++)
        {
            if(abs(_vector[i] - _vector[j]) < rez)
                rez = abs(_vector[i] - _vector[j]);
        }
    }
    return rez;
}

int Span::longestSpan() {
    if(_vector.size() < 2)
        throw std::invalid_argument("Do not have 2 lists\n");
    int rez = abs(_vector[0] - _vector[1]);

    for (int i = 0; i < _vector.size(); i++)
    {
        for (int j = i+1; j < _vector.size(); j++)
        {
            if(abs(_vector[i] - _vector[j]) > rez)
                rez = abs(_vector[i] - _vector[j]);
        }
    }
    return rez;
}

void Span::addNumber(int newNum) {
    if(_size > _vector.size())
        _vector.push_back(newNum);
    else
        throw std::invalid_argument("Too much arg\n");
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator finish) {
    std::vector<int> test(start, finish);
    if (test.size() + _vector.size()> _size)
        throw std::invalid_argument("Too much arg\n");
    copy(start, finish, std::back_inserter(_vector));
}
