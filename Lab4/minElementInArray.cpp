//            --- Minimum Element -----

#include<iostream>
#include<iterator>

int main()
{
    int arr[] = { 2,3,4,5,6,7,1,9,90};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);   
    int min = arr[0];

    for( int i = 0 ; i < sizeOfArray ; i++)
    {
        if(min > arr[i+1])
        {
            min = arr[i+1];
        }
    }
    std::cout << " The value of the minimum element is "<<min;
}