#include <iostream>
using namespace std;

void maxint(int array[], int n)
{
    int maxnum = array[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > maxnum)
        {
            maxnum = array[i];
            maxIndex = i;
        }
    }

    cout << "\nThe largest number is " << maxnum << " at index " << maxIndex << endl;
}

int main()
{
    int n;
    cout << "Enter the amount of numbers you want to store in the array: ";
    cin >> n;
    int array[n];

    cout << "\nEnter " << n << " numbers to store in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
    }

    maxint(array, n);

    return 0;
}
