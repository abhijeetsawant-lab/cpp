#include<bits/stdc++.h>
using namespace std;
 
int sum(int x , int y){
    int c;
    c = x + y;
    // cout << "the sum is : " << c;
    return c;
}
int main(){
  int num1 , num2;
  cin >> num1 >> num2 ;
//   sum(num1 , num2);

  int result = sum(num1,num2);
  cout << result;
  return 0;
}