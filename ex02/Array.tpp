template <typename T>
Array<T>::Array() : data(0), len(0) {
    std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]()), len(n) {
    std::cout << "Array size constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : data(0), len(other.len) {
    std::cout << "Array copy constructor called" << std::endl;
    if (len)
        data = new T[len]();
    for (unsigned int i = 0; i < len; ++i)
        data[i] = other.data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
    std::cout << "Array assignment operator called" << std::endl;
    if (this != &other) {
        delete[] data;
        len = other.len;
        data = (len ? new T[len]() : 0);
        for (unsigned int i = 0; i < len; ++i)
            data[i] = other.data[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    std::cout << "Array destructor called" << std::endl;
    delete[] data;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx) {
    if (idx >= len)
        throw std::out_of_range("Index out of bounds");
    return data[idx];
}

template <typename T>
const T &Array<T>::operator[](unsigned int idx) const {
    if (idx >= len)
        throw std::out_of_range("Index out of bounds");
    return data[idx];
}

template <typename T>
unsigned int Array<T>::size() const {
    return len;
}
