#include <iostream>

using namespace std;

template <typename T>
void __swap(T *f, T *s)
{
    T temp = *f;
    *f = *s;
    *s = temp;
}

template < typename T>
void ins_sorter(T *vals, unsigned int num)
{
    T *ptr = vals;

    for (int i = 0; i < num; i++)
        for (int j = i; j > 0 && *(vals+j) < *(vals+j-1); j--)
            __swap((vals+j), (vals+j-1));
}

int main()
{
    const unsigned int SIZE = 12;
    int arr[SIZE] = { 2, 6, 8, 1, 6, 8, 34, 9, 3, 4, 7, 12};

    ins_sorter(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        cout<<arr[i]<<" ";

    return 0;
}
