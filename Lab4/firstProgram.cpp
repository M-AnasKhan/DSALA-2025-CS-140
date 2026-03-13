//  ------- Finding maximum number of  element -----------

#include<iostream>
#include <iterator>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int count = 0;
  
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < lengthOfArray ; i++)
    {

        std::cout << arr[i] << " ";
        count++;

    }

    std::cout << "The the maximum number of element in array are : "<< count ;

}