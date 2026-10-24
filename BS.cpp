#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many number in Index you want: ";
    cin >> n;
    cout<<endl;
    cout<<"Give the Values of array: ";

    int arr[100];
    int i;

    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout<<"The value we are looking for is:";
    cin>> x;

    int low = 0;
    int high = n-1;
    int found = -1;

    while (low<=high){
        int mid = (low+high)/2;

    if (arr[mid]==x){
        found = mid;
        break;
    }

    else if (arr[mid]<x)
    {
        low = mid +1;
    }
    else
    {
        high = mid - 1;
    }
    }
    if (found != -1){
        cout <<"Found at index: " << found <<endl;
    }
    else{
        cout <<"Not Found!"<< endl;
    }
    return 0;
}