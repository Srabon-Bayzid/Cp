#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >>n >> p;
    int count = 0;
    while (n>0)
    {
        n = n/p;
        count = count +n;
    }
    cout<<count <<endl;
    return 0;

}