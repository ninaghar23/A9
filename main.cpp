#include <iostream>
#include "SimpleArray.h"



int main() {
    SimpleArray< int, 2 > int_array;
    int_array [1] = 0;
    cout << "2nd element of array is " << int_array[1]<<endl;
    try {
        int_array[7] = 13;

    }
    catch (std::runtime_error &e){
        cout<< e.what() << endl;
    }
    SimpleArray< float, 3 > float_array;

    float_array [2] = 0.9;
    cout << "3rd element of array is " << float_array[1]<<endl;
    try {
        float_array[7] = 13;

    }
    catch (std::runtime_error &e){
        cout<< e.what() <<endl;
    }

    SimpleArray< char, 5 > char_array;

    char_array [3] = 'L';
    cout << "4th element of array is " << char_array[3]<<endl;
    try {
        float_array[7] = 13;

    }
    catch (std::runtime_error &e){
        cout<< e.what();
    }



    return 0;
}
