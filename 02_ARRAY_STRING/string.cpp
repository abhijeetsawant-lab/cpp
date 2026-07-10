#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s = "Abhi";
    cout << s[3] << endl; // 0 la a ; 1 la b ; 2 la h ; 3 la i

    int len = s.size();
    cout << len << endl;
    cout << "value at last idices is :" << s[len-1];
    return 0;
}