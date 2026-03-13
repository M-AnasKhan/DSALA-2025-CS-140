
//          ---------------  Reversing Array  -----------------

#include<iostream>

int main()
{
    int arr[10] = {1,23,3,4,5,6,6,7,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int condition = size/2;
    int temp = 0;

    for( int i = 0 ; i < condition ; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1 - i];
        arr[size-1-i] = temp;
    }

    std::cout << "arr[10] = {";
    for(int i = 0 ; i < size - 1 ; i++)
    {
        std::cout << arr[i] << ",";   
    }
    std::cout <<arr[size-1]<<"}";

    return 0 ;
}