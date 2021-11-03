#include <iostream>

using namespace std;

int main(){
    int num = 20;
    int *pnum;
    cout<<"numero int: \t";
    cout<<num<<endl;
    cout<<&num<< endl<<endl;
    pnum = &num;
    cout<< "contenuto pnum:\t";
    cout<< pnum << endl;
    cout<< "indirizzo di pnum:\t";
    cout<<&pnum << endl;
    int *pnum1 = &num;
    cout<< "indirizzo di pnum:\t";
    cout<<pnum1 << endl;
    return 0;
}