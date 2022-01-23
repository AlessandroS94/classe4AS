#include <iostream>
#include <string>
/*
Attenzine alla dischiarazine delle variabili
Costruttore stesso nome della classe rispettando anche il case Aa
Attenzione alle parentesi 
Attenzione 
*/
using namespace std;
class Astuccio
{
private:
    int numeroPenne;
    int tasche;
    string nome;
    void setnumeropenne(int penne);
    void setasche(int numtasche);
    void setmatite(int nummatite);
    void setnome(string nome);

public:
    void getnumeropenne();
    void gettasche();
    int calcolamediapennetasche();

    Astuccio();
    Astuccio(int numeropenne, int tasche, string nome);
    ~Astuccio();
};

Astuccio::Astuccio(){
    numeroPenne = 6;
    tasche = 3;
    nome =" Programma in C++";
}

Astuccio::Astuccio(int numeropennevol, int taschevol, string nome){
    setnumeropenne(numeropennevol);
    setasche(taschevol);
    setnome(nome);
}

void Astuccio::setnumeropenne(int penne)
{
    if (penne)
    {
        numeroPenne = penne;
    }
    else
        numeroPenne = 6 ;
}

void Astuccio::setasche(int numtasche) {
    if (numtasche)
        {
            tasche = numtasche;
        }
    else tasche = 3;
}

void Astuccio:: setnome(string nome)
{
    if (!nome.empty())
    {
        nome = nome;
    }
    else
        nome =" Programma in C++";
}
void Astuccio::gettasche() { cout << tasche << endl; }
void Astuccio::getnumeropenne() { cout << numeroPenne << endl; }
int Astuccio::calcolamediapennetasche()
{
    return (numeroPenne / tasche);
}
Astuccio::~Astuccio()
{
}
int main()
{
    Astuccio astuccio;
    cout << "penne per tasca : \t " << astuccio.calcolamediapennetasche() <<endl;
}
