//
// Created by Prime_Games_2 on 11.05.2022.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &arr, int needle)
{
    typename T::iterator result = find(arr.begin(), arr.end(), needle);
    if(arr.end() == result && *arr.end() != needle)
        throw std::exception();
    return result;
}


#endif //EX00_EASYFIND_H
