#include <iostream>

using namespace std;

int main() {
    int n;
    int kilk = 0;
    int dil;
    bool Bool;
    cout << "enter quantity of prime numbers" << endl;
    cin >> n;
    if (n == 1) cout << "prime number is 2" << endl;
    else {
        cout << "prime number is 2" << endl;
        for (int num_now = 3; kilk != n-1; num_now += 2) {
            dil = 3;
            Bool = true;
            int kilk1 = kilk;
            while (Bool && kilk==kilk1) {
                if (num_now / dil == 1)
                {
                    cout << "prime number is " << num_now << endl;
                    kilk += 1;
                }
                else if (num_now % dil != 0) dil += 2;
                else Bool = false;
            }
        }

    }
    return 0;
}