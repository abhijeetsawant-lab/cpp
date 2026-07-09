#include <iostream>

using namespace std;
int main(){
    //FOR STRING AND GETLINE
    string s;
    cin >> s ;
    cout << s << endl ;
    //but isse na bs first word of k=sentence hi picked hoga jese "HEY ABHI LIKHA TOH HEY PRINT HOGA ONLY"
     string s1;
     string s2;
     cin >> s1 >> s2 ;
     cout << s1 << s2 << endl  ; 

cin.ignore();
     string str;
     getline(cin,str);
     cout << str << endl ;

return 0;
} 
