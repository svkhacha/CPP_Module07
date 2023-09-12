#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

# define YELLOW	"\33[1;33m"
# define BLUE	"\33[1;34m"
# define RESET	"\33[0;m"

template <typename T>
void    iter(const T* arr, size_t length, void (*foo)(const T&))
{
    for (size_t i = 0; i < length; ++i)
        foo(arr[i]);
}

template <typename T>
void    iter(T* arr, size_t length, void (*foo)(T&))
{
    for (size_t i = 0; i < length; ++i)
        foo(arr[i]);
}

template <typename T>
void    foo(T& element)
{
    static int index;
    std::cout<<"arr["<<index<<"]";
    std::cout<<"= "<<element<<std::endl;
    index++;
}

#endif