#include<iostream>

int main()
{
    int arr[5]= {1,2,3,45,5};
    int sum = 0;

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        sum+= arr[i];

    }
    std::cout << "The sum of all the element in array is : " <<  sum;
}