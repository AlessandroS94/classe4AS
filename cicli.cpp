#include <iostream>

using namespace std;

int main(){

    char lettera;
    int cicli;

    cout<<"digita la lettera\n";
    cin>>lettera;

    cout<<"INIZIO CODICE\n";
    cin>>cicli;
    
    switch(cicli){
        case 1:
        {
            cout<<"Fine";
            break;
        }
        case 2:
            {
            int uscita =1;
            cout<<"ciclo infinito\n";

            while(uscita==1){
                cout<<"Inserisci un numero diverso da 1 per uscire\n";
                cin>>uscita;
            }
            break;}
    }

    return 0;
}