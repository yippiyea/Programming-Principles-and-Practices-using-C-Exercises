#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector <double> primeHolder;
    int x, i, flag;

    cout << "Enter a positive integer ";
    cin >> x;

    cout<<" 10 % 7 is "<<10 % 7<<endl;
    for (i = 2; i <= x/2; i++)
    {
        cout<<"i is : "<<i << "--------x/2 is :  "<<x/2<<" "<<endl;
        cout<<x<<" % "<< i << "is " << x % i <<endl;
        if(x%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";
    return 0;
}