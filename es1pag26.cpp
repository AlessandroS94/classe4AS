#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, j;
    bool y = true;
    cout << "INSERISCI N " << endl;
    cin >> x;
    
    while (y && x >0)
    {
        string stampa;
        cout << "INSERISCI 1 PER VISUALIZZARE UNA RIGA DI * \n";
        cout << "INSERISCI 2 PER VISUALIZZARE UNA COLONNA DI * \n";
        cout << "INSERISCI 3 PER VISUALIZZARE UNA DIAGONALE DI * \n";
        cout << "INSERISCI 4 PER VISUALIZZARE UNA QUADRATO DI * \n";
        cout << "INSERISCI 5 PER VISUALIZZARE UNA TRIANGOLO DI * \n";
        cout << "INSERISCI 0 PER VISUALIZZARE TERMINARE \n";
        cin >> j;
        if(j==0){
            y = false;
        }
        if (j==1){
            for(int i=0; i<x; i++){
                stampa = stampa + "*";
            }
            cout<<stampa<<endl;
        }
        if (j==2){
            for(int i=0; i<x; i++){
                stampa = stampa + "*\n";
            }
            cout<<stampa<<endl;
        }
        if (j==3){
            for(int colonna=0;colonna<x;colonna++){
                for(int riga=0;riga<colonna;riga++){
                    stampa = stampa = stampa + " ";
                }
                stampa = stampa + "*\n";
            }
            cout<<stampa<<endl;
        }
        if (j==4){
            for(int colonna=0;colonna<x;colonna++){
                for(int riga=0;riga<x;riga++){
                    stampa = stampa = stampa + "*";
                }
                stampa = stampa + "\n";
            }
            cout<<stampa<<endl;
        }
        if (j==5){
            for(int colonna=0;colonna<x;colonna++){
                for(int riga=0;riga<=colonna;riga++){
                    stampa = stampa = stampa + "*";
                }
                stampa = stampa + "\n";
            }
            cout<<stampa<<endl;
        }
    }

    cout <<"FINE"<<endl;
    return 0;
}