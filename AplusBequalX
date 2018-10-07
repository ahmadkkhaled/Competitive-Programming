// given x , get a+b such that a+b=x using the binary for of X
#include <bits/stdc++.h>


/*
┌──┬┐       ┌┐┌┐┌┬─┬┬──┐
│┌┐│└┬──┬─┐┌┘│└┐┌┴┐│├──│
│├┤││││││┼└┤┼│┌┘└┬┴┐│──┤
└┘└┴┴┴┴┴┴──┴─┘└┘└┴──┴──┘
*/


using namespace std;
//int sod(int x ){
//  return x ==0? 0 : x%10 +sod(x/10);
// }





int main()
{

    int x,a=0,b=0,k=1;
    cin >> x;
    while (x!=0){
            bitset<32> num(x);
            k=1;
            a=0;
            b=0;
            for (int i=0; i<32; i++){
                if (num[i]){
                    if (k%2==0){
                        b+=pow(2,i);
                    }
                    else{
                        a+=pow(2,i);
                    }
                    ++k;
                }
            }
            cout << a << " " << b;
            cout << endl;
            cin >> x;
    }
}


