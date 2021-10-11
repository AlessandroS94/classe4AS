#include <iostream>

using namespace std;

int main(){
    int num = 20;
    int *pnum;
    cout<<" numero int:";
    cout<<num<<endl;
    cout<<&num<< endl<<endl;
    pnum = &num;
    cout<< "contenuto pnum :";
    cout<< pnum << endl;
    cout<< "indirizzo di pnum:";
    cout<<&pnum << endl;
}