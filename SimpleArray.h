#ifndef SIMPLEARRAY_H_
#define SIMPLEARRAY_H_

#include <iostream>
using std::cout;
using std::endl;
#include <exception>
#include <iomanip>
using std::setw;

#include <typeinfo>

// define a clas array of type T
// the type is not know yet and will
// be defined by instantiation
// of object of class array<T> from main
template< typename T, int size > class SimpleArray {
private:
    //int arraySize;
    T *arrayStore;
public:
// constructor with user pre-defined size
    //~SimpleArray(){
    //    delete [] arrayStore;
    //}
    SimpleArray () {
        //arraySize = size;
        arrayStore = new T [size];
    }

// calss array member function to set element of myarray
// with type T values
    void setArray ( int elem, T val) {
        arrayStore[elem] = val;
    }

    T &operator[](int i){
        //try{
            if (i < 0 || i >= size){
                throw std::runtime_error("invalid index");
            }
            else {
                //throw 20;
                return arrayStore[i];
            }
        }
        //catch(...)
        //{
        //    cout<< "invalid index";
        //    arraySt
        //}
        //return arrayStore[i];
    //}

// for loop to display all elements of an array
    void getArray () {
        for ( int j = 0; j < size; j++ ) {
// typeid will retriev a type for each value
            cout << setw( 7 ) << j << setw( 13 ) << arrayStore[ j ]
                 << " type: " << typeid(arrayStore[ j ]).name() << endl;
        }
        cout << "-----------------------------" << endl;
    }
};

#endif
