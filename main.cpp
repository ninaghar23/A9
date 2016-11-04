#include <iostream>
#include "SimpleArray.h"

/*template<typename T>
class SimpleArray
{
public:
    SimpleArray(int s)  {
        arraySize = s;
        arrayStore = new T [arraySize];
    }
    ~SimpleArray();
    T &operator[](int i);
    bool setArrayBounds(int i);
private:
    bool growStorage(int argArraySize);
    T *arrayStore;
    int arraySize;

};
T &operator[](int i){if i>=0 && i<arraySize){
        try{
            if i>=0 && i<arraySize){
                return arrayStore[i];
            }
            else {
                throw 20
            }
        }
    }
        catch(int e){ cout<< "invalid index";}*/

int main() {
    //std::cout << "Hello, World!" << std::endl;
    // instantiate int_array object of class array<int> with size 2
    SimpleArray< int > int_array(2);
// set value to a first element
// call to array class member function to set array elements
    int_array.setArray(0,3);
// set value to a second element
// NOTE: any attempt to set float to an int array will be translated to int value
    //int_array.setArray(1,3.4);

// call to array class member function to display array elements
    int_array.getArray();
    int_array[6];

// instantiate float_array object of class array<float> with size 3
    SimpleArray< float > float_array(3);

// set value to a first element
// call to array class member function to set array elements
    float_array.setArray(0,3.4);
// set value to a second element
    float_array.setArray(1,2.8);

// call to array class member function to display array elements
    float_array.getArray();
    float_array[4];
// instantiate float_array object of class array<char> with size 5
    SimpleArray< char > char_array(5);

// set value to a first element
// call to array class member function to set array elements
    char_array.setArray(0,'H');
// set value to a other array elements
    char_array.setArray(1,'E');
    char_array.setArray(2,'L');
    char_array.setArray(3,'L');
    char_array.setArray(4,'O');

    char_array.getArray();
    char_array[10];

    return 0;
    return 0;
}