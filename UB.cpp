#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];
    int i;

    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int low = 0;
    int high = n;

    while (low < high)
    {
        int mid = (low + high) / 2;

        // The only difference from Lower Bound: 
        // We use '<=' instead of '<' to find the first element STRICTLY GREATER than x
        if (arr[mid] <= x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout << "Upper Bound Index: " << low << endl;
    return 0;
}