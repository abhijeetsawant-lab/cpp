//wrong he answer yawr

#include <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks ;
    cout << "your marks are : " << marks << endl ;
    cout << "fetching your grades..." << endl ;

    if(marks<25){
        cout << "your grade is F";
    }
    else if(25<=marks>=44){
        cout << "your grade is E";
    }
    else if(45<=marks>=49){
        cout << "your grade is D";
    }
    else if(50<=marks>=59){
        cout << "your grade is C";
    }
    else if(60<=marks>=79){
        cout << "your grade is B";
    }
     else{
        cout << " your grade is A";
    }
/*Problem yahan hai:

25<=marks>=44

C++ isko mathematically 25 ≤ marks ≤ 44 ki tarah nahi samajhta.

Ye actually aise evaluate hota hai:

(25 <= marks) >= 44

Example agar marks = 59:

25 <= 59      // true (1)
1 >= 44       // false (0)

correct is else if (marks >= 25 && marks <= 44)
*/
    return 0;
}