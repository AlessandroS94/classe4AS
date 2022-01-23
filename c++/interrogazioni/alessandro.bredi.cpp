/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Astuccio
{
private:
    int numeroPenne;
    int tasche;
    string titolo;
    void setnumeropenne(int penne);
    void settasche(int tasche);
    void settitolo(string nome);

public:
    void getnumeroPenne();
    void gettasche();
    void gettitolo();
    int calcolaMediapennetasche();

    Astuccio();
    Astuccio(int numeroPenne, int tasche, string titolo);
    ~Astuccio();
};

Astuccio::Astuccio()
{
    numeroPenne = 8;
    tasche = 2;
    titolo = "Programma in C++";
}
Astuccio::Astuccio(int numeroPenneVal, int tascheVal, string titoloVal)
{
    setnumeropenne(numeroPenneVal);
    settasche(tascheVal);
    settitolo(titoloVal);
}
void Astuccio::setnumeropenne(int penne)
{
    if (penne)
    {
        numeroPenne = penne;
    }
    else
    {
        numeroPenne = 8;
    }
}
void Astuccio::settasche(int tasche)
{
    if (tasche)
    {
        tasche = tasche;
    }
    else
    {
        tasche = 2;
    }
}
void Astuccio::settitolo(string nome)
{
    if (!nome.empty())
    {
        titolo = nome;
    }
    else
    {
        titolo = "Programma in C++";
    }
}
void Astuccio::gettasche() { cout << tasche << endl; }

void Astuccio::gettitolo() { cout << titolo << endl; }

int Astuccio::calcolaMediapennetasche()
{
    return (numeroPenne / tasche);
}
void Astuccio::getnumeroPenne()
{
    cout << numeroPenne << endl;
}
Astuccio::~Astuccio()
{
}

int main()
{
    Astuccio astuccio;
    cout << "penne per tasche endl :/ t" << astuccio.calcolaMediapennetasche() <<endl;
    astuccio.gettitolo();
    astuccio.getnumeroPenne();
    astuccio.gettasche();
    Astuccio astuccio2;
}
}
