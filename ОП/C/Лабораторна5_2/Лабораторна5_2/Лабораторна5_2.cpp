#include <iostream>
using namespace std;

int main() 
{
    int n;
    int kilk = 1;
    int dil;
    
    cout << "enter quantity of prime numbers(n>=1)" << endl;
    cin >> n;
    cout << "Prime number is 2" << endl;
    for (int num_now = 3; kilk<n; num_now += 1) 
    {
        dil = 2;
        while (double(num_now) / dil != num_now / dil && num_now != dil) dil += 1;
        if (num_now == dil) 
        {
            kilk += 1;
            cout << "prime number is " << num_now << endl;
        }
    }   
 
    
    return 0;
}