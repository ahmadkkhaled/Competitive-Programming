// The following code rotates an array of size N clockwise and removes the (R)th element from the end of the array [R is the number of current rotation]
// https://practice.geeksforgeeks.org/problems/rotate-and-delete/0


#include <bits/stdc++.h>

using namespace std;

int arr[100];

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        int r = 0;
        while (n>1)
        {
            int temp = arr[n-1];
            for (int i=n-1; i>0; --i){
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
            ++r;

            int toremove = n-r;
            if (toremove <= 0){
                toremove = 0;
            }


            for (int i=toremove; i<n-1; ++i){
                arr[i]=arr[i+1];
            }
            --n;
        }
        cout << arr[0] << endl;
    }
}
