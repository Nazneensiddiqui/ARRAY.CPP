//w.a.p. to print second largest number.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 32, 30, 28, 40};
    int s = sizeof(arr) / sizeof(arr[0]);
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < s; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    cout << "Second largest number = " << max2;
    return 0;
}
