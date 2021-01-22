#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaring all variables
    int index = 1;
    cin >> index;
    int n[index];
    int numofEven = 0;
    int numofOdd = 0;

    // User must input the number of indexes and their values
    for (int i = 0; i < index; i++)
    {
        cin >> n[i];
    }


    // Checking number of even numbers
     for (int x = 0; x < index; ++x)
    {

        if (n[x] % 2 == 0)
            numofEven += 1;

        else
            numofOdd +=1;

    }


    // If most values in the list are evens, the output will be the index of only odd number in the list
        if(numofEven > numofOdd)
        {
            // Searching for odd then print it
            for (int y = 0; y < index; ++y)
            {

                if(n[y] % 2 != 0)
                {
                    cout << endl << y + 1 << endl;
                    break;
                }

            }

        }


        // If most values in the list are odds, the output will be the index of only even number in the list
        if(numofOdd > numofEven)
        {
            // Searching for even then print it
            for (int y = 0; y < index; ++y)
            {

                if(n[y] % 2 == 0)
                {
                    cout << endl << y + 1 << endl;
                    break;
                }

            }

        }
    int o;
    cin >> o;
}
