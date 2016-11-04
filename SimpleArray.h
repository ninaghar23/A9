#ifndef SIMPLEARRAY_H_
#define SIMPLEARRAY_H_

#include <iostream>
using std::cout;
using std::endl;
#include <exception>
#include <iomanip>
using std::setw;

#include <typeinfo>

template< typename T, int size > class SimpleArray {
private:

    T *arrayStore;
public:

    SimpleArray() {
        arrayStore = new T[size];
    }

    T &operator[](int i) {

        if (i < 0 || i >= size) {
            throw std::runtime_error("invalid index");
        } else {
            return arrayStore[i];
        }
    }
};



#endif
