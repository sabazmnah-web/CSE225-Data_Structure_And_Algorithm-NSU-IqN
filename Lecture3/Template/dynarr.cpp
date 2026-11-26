#include "dynarr.h"

// Default constructor
template <class T>
dynArr<T>::dynArr(){
    data = nullptr;
    size = 0;
}

// Parameterized constructor
template <class T>
dynArr<T>::dynArr(int s){
    data = new T[s];
    size = s;
}

// Destructor
template <class T>
dynArr<T>::~dynArr(){
    delete[] data;
}

// Function to allocate memory for the dynamic array
template <class T>
void dynArr<T>::allocate(int s){
    data = new T[s];
    size = s;
}

template <class T>
void dynArr<T>::setValue(int index, T value){
    if (index >= 0 && index < size)
    {
        data[index] = value;
    }
}

// Function to get the value at a specific index in the array
template <class T>
T dynArr<T>::getValue(int index){
    if (index >= 0 && index < size)
    {
        return data[index];
    }
    // In case the index is out of range, you might want to return a default value or throw an exception.
    // For simplicity, let's return a default-constructed T (for types that support it).
    return T();
}

// Explicit instantiation for int
template class dynArr<int>;
// Explicit instantiation for double
template class dynArr<double>;
