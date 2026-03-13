//  ------- Finding maximum number of  element -----------

#include<iostream>
#include <iterator>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int count = 0;
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);  // Important concept 
    int max = arr[0];

    for(int i = 0 ; i < lengthOfArray ; i++)
    {
        if( arr[i+1] > max)
        {
            max = arr[i+1];
        }
    }

    std::cout << "The maximum values is "<< max;

}