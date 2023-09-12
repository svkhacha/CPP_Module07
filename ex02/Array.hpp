#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ctime>
#include <cstdlib>

#define RED	    "\33[1;31m"
#define GREEN	"\33[1;32m"
#define YELLOW	"\33[1;33m"
#define BLUE	"\33[1;34m"
#define CYAN	"\33[1;36m"
# define PINK	"\33[1;35m"
#define RESET	"\33[0;m"

template <typename T>
class Array
{
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array& other);
        Array&  operator=(const Array& other);
        ~Array(void);

        T&              operator[](unsigned int index) const;
        unsigned int    size(void) const;

        class OutOfBounds : public std::exception
        {
            const char* what() const throw();
        };    

    private:
        unsigned int    _elementNum;
        T*              _arrPtr;
};

#include "Array.tpp"

#endif