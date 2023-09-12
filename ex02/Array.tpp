#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _elementNum(0), _arrPtr(new(T[0])) { }

template <typename T>
Array<T>::Array(unsigned int n) : _elementNum(n), _arrPtr(new T[n]) { }

template <typename T>
Array<T>::Array(const Array& other) : _elementNum(other._elementNum)
{
    this->_arrPtr = new T[_elementNum];
    for (unsigned int i = 0; i < _elementNum; ++i)
        this->_arrPtr[i] = other._arrPtr[i];
}

template <typename T>
Array<T>&   Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        this->_elementNum = other._elementNum;
        delete[] this->_arrPtr;
        this->_arrPtr = new T[_elementNum];
        for (unsigned int i = 0; i < _elementNum; ++i)
            this->_arrPtr[i] = other._arrPtr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array(void) { delete[] _arrPtr; }

template <typename T>
T&  Array<T>::operator[](unsigned int index) const
{
    if (index > _elementNum)
        throw OutOfBounds();
    return *(_arrPtr + index);
}

template <typename T>
unsigned int    Array<T>::size(void) const
{
    return _elementNum;
}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
    return (RED "EXCEPTION: The index is out of bounds" RESET);
}