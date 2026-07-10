#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    //1D array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    //operation
    arr[3] += 3;

    cout << arr[3] << endl ;

    //2D array
    int a[2][3]; // 2 row and 3 coloumn
    a [1][1] = 56;
    cout << a [1][1];

    return 0;
}