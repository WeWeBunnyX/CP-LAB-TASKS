#include <iostream>
using namespace std;

int maxint(int array[], int n)
{
    int maxnum = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > maxnum)
        {
            maxnum = array[i];
        }
    }
    return maxnum;
}

int main()
{
    int n;
    cout << "Enter the amount of numbers you want to store in the array: ";
    cin >> n;
    int array[n];

    cout << "Enter " << n << " numbers to store in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
    }

    int maximum = maxint(array, n);

    cout << "The largest number is " << maximum << endl;

    return 0;
}
