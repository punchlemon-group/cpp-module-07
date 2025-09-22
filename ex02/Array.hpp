#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <cstddef>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array {
private:
    T *data;
    unsigned int len;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();
    T &operator[](unsigned int idx);
    const T &operator[](unsigned int idx) const;
    unsigned int size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
