#include<iostream>
using namespace std;
int main(){

    int age;
    cin >> age;
    cout << "your age is : " << age << endl;

    if(age<18){
        cout << "you are not eligible for job" << endl;
    }
    //18 peksha jasta ani 57 peksa kami
    else if(age<57){
        cout << "you are eligible for job" << endl;
        //so if madhe ata 53 to 57 paryant che astil 
        if(age>=53){
            cout << "  ,  but retiremnet soon..!" << endl ;
        }
    }
    else{
        cout << "retirement is there";
    }

    return 0;
}