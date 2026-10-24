#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Value: ";
    cin>> n;
    int count = 0;
    int sum = 0;
    int i;
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
            cout << i <<" ";
            sum = sum + i;
        }

    }
    cout<<endl;
    cout <<"Total divisor: "<< count << endl;
    cout << "Total: "<< sum;
    return 0;
}