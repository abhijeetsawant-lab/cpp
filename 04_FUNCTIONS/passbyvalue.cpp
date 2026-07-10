#include<bits/stdc++.h>
using namespace std;
int dosomething(int a){
  cout << a << endl; 
  a = a+5;
  cout << a << endl;
  a = a+5;
  cout << a << endl;
}
int main(){
  int x;
  cin>> x;
  dosomething(x);
  cout << x;
    return 0;
}

