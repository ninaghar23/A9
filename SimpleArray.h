#ifndef SIMPLEARRAY_H_
#define SIMPLEARRAY_H_

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <typeinfo>

// define a clas array of type T
// the type is not know yet and will
// be defined by instantiation
// of object of class array<T> from main
template< typename T > class SimpleArray {
private:
    int arraySize;
    T *arrayStore;
public:
// constructor with user pre-defined size
    SimpleArray (int s) {
        arraySize = s;
        arrayStore = new T [arraySize];
    }

// calss array member function to set element of myarray
// with type T values
    void setArray ( int elem, T val) {
        arrayStore[elem] = val;
    }

    T &operator[](int i){
        try{
            //if (i >= 0 && i < arraySize){
            return arrayStore[i];
            //}
            //else {
            //    throw 20;
            //}
        }
        catch(...)
        {
            cout<< "invalid index";
        }
        return arrayStore[i];
    }

// for loop to display all elements of an array
    void getArray () {
        for ( int j = 0; j < arraySize; j++ ) {
// typeid will retriev a type for each value
            cout << setw( 7 ) << j << setw( 13 ) << arrayStore[ j ]
                 << " type: " << typeid(arrayStore[ j ]).name() << endl;
        }
        cout << "-----------------------------" << endl;
    }
};

#endif