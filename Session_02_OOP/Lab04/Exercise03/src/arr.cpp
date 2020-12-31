#include "arr.h"

template <class T>
Array<T>::Array()
{
    this->num = 0;
}

template <class T>
void Array<T>::Add(T value)
{
    this->arr[num++] = value;
}

template <class T>
void Array<T>::Print()
{
    for(int i = 0; i < this->num; i++)
    {
        cout << this->arr[i] << "\t";      
    }
    cout << endl;
}

//--- define data types which is used for template ---
template class Array<int>;
template class Array<long>;
template class Array<float>;
template class Array<double>;