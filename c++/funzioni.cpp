#include <iostream>

using namespace std;

int calcola (int a,int b); //prototipo: parametri formali

void calcola();

int main (){
    int a,b;
    cout<<"inserisci il primo numero intero\n";
    cin>>a;
    cout<<"inserisci il secondo numero intero\n";
    cin>>b;
    cout<<"il numero maggiore è "<<calcola(a,b)<<endl;
    return 0;
}

int calcola(int a,int b){
    if (a>b)
        {return a;}
    else return b;
}

void calcola(){
    cout<<"CIAO\n";
}

//void se non deve restituire niente

