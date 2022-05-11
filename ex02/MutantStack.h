//
// Created by Prime_Games_2 on 11.05.2022.
//

#ifndef EX02_MUTANTSTACK_H
#define EX02_MUTANTSTACK_H

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{
public:
    MutantStack<T>(){}
    ~MutantStack<T>(){}

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator	begin( void ) { return this->c.begin(); }
    iterator	end( void ) { return this->c.end(); }
};


#endif //EX02_MUTANTSTACK_H
