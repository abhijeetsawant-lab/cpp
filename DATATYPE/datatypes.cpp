#include<iostream>
#include <string>

using namespace std;
int main(){

    // FOR INTEGER NUBERS
    int a = 10; // took 4 byte
    long b =763846238; //took 4 bytes 
    long long c = 618431844634; //took 8 bytes
    short d = 6;
     cout << a << endl ;
     cout << b << endl ;
     cout << c << endl ;
     cout << d << endl ;
    
    // FOR DECIMAL POINTS
    float e = 34.34;
    double f =23263.3434;
    long double g = 41234.34234;
      
    cout << e << endl ;
    cout << f << endl ;
    cout << g << endl ;

    //FOR CHARACHTERS
    char h = 'D';

    cout << h << endl ;

    //FOR STRING AND GETLINE
    string s;
    cin >> s ;
    cout << s << endl ;
    //but isse na bs first word of k=sentence hi picked hoga jese "HEY ABHI LIKHA TOH HEY PRINT HOGA ONLY"
     string s1;
     string s2;
     cin >> s1 >> s2 ;
     cout << s1 << s2 << endl  ; 

     string str;
     getline(cin,str);
     cout << str << endl ;

    // FOR BOOLEAN only true and false
    bool x = true;
    cout << x; //print 1 due to true


    return 0;
}
