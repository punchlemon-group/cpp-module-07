#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T *array, unsigned int length, F func) {
    for (unsigned int i = 0; i < length; ++i)
        func(array[i]);
}

#endif // ITER_HPP
