#include <iostream>
using namespace std;

int main() 
{
    int n; //????????? ??????? ?????
    int kilk;//????????? ????????? ??????? ?????
    int dil;//?????? ??? ????????? ???????
    bool Bool;
    
    cout << "enter quantity of prime numbers(n>=1(int))" << endl;//????? ?? ????????? ??????? ?????
    cin >> n;
    if (n == 1)
    {
        kilk = 1;
        cout << "Prime number is 2" << endl;
    }
    else{
        cout << "Prime number is 2" << endl;///???????? ????? 2 ?? 3 - ????? ?????? ?????
        cout << "Prime number is 3" << endl;//(?? ???? ???????? ?????????? ????????? ?? ???? ????????????. ??? ????? ?? ??????????? ??? ?? ?????? ??????? ?? ????? ??????????)
        kilk = 2;
    }
    
    
    
    for (int num_now = 5; kilk != n; num_now += 2)//???????????, ?? ? ????? num_now ????????
    {
        dil = 3; //??????? ????? ??? ??????? ???????? ???
        Bool = true;
        int kilk1 = kilk;//????????? ??????? ???????? ????????? ????????? ??????? ????? ? kilk1
        while (Bool && kilk==kilk1)//??????????? ???????? ??????? ??????? ?? ?? ?? ????????? ????????? ????????? ??????? ?????
        {
            if ((double(num_now) / dil) == (num_now / dil)) Bool = false; //???????????, ?? ???????? ????? ??????. ???? ???, ?? ???????? ? ?????
            else if (num_now / dil < dil)                                 //???????????, ?? ????????? ??????? ?????? ?? ???????. ???? ???, ?? ?? ? ? ???? ?????? ?????, 
            {                                                             //???? ?? ????? ?? ??????????, ?? ???? ?? ???????? ?????? ?? ????????? ?????. ?????????, ????? 131 - ? ???????. ϳ??? ????, ?? ?? ???????? ???? ?? 13:
                                                                          // 131 / 13 = 10.074, ?? ??? ????? ????? ???? ??????, ???? ???????? ?????????? ??? ??????? ?????? ??????????? ????????? ????????, ??? ?? ??? ????? ? ????????.
    
                cout << "prime number is " << num_now << endl;
                kilk += 1; // ???????? ?????? ????? ?? ?????????? ????????? ????????? ????? ?? 1
            }
            else dil += 2; // ?????????? ???????? ????? ??? ????????? ??????? ?? 2
        }
    }
    return 0;

}
