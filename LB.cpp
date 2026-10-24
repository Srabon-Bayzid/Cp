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

    int low=0;
    int high = n;

    while (low < high)
    {
        int mid= (low+high)/2;



        if (arr[mid]<x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout <<"Lower Bound Index: " << low<< endl;
    return 0;
}