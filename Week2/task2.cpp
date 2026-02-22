//2025(S)-CS-140 , Muhammad Anas Khan
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= 5; j++)
                cout << j, "  ";
            cout << endl;
        }
        else if (i == 2)
        {
            for (int j = 16; j < 20; j++)
            {
                cout << j;
            }
            cout << "6";
            
                
            cout << endl;
        }
        else if (i == 3)
        {
            cout << "152425207" << endl;
        }
        else if (i == 4)
        {
            cout << "142322218" << endl;
        }
        else if (i == 5)
        {
            for (int j = 13; j >= 9; j--)
                cout << j;
            cout << endl;
        }
    }
    return 0;
}