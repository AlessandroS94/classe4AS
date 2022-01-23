#include <iostream>
#include <string>
// classi
using namespace std;

class Treno
{
private:
    int numeroPasseggeri;
    int vagoni;
    string titolo;
    void setNumeroPasseggeri(int passeggeri);
    void setVagoni(int vagoni);
    void setTitolo(string nome);

public:
    void getNumeroPasseggeri();
    void getVagoni();
    void getTitolo();
    int calcoloMediaPasseggeriVagone();
    Treno();
    Treno(int numeroPasseggeri, int vagoni, string titolo);
};

Treno::Treno()
{
    numeroPasseggeri = 50;
    vagoni = 5;
    titolo = "TrenItalia";
}
Treno :: Treno(int numeroPasseggeriVal, int vagoniVal, string titoloVal)
{
    setNumeroPasseggeri(numeroPasseggeriVal);
    setVagoni(vagoniVal);
    setTitolo(titoloVal);
}
void Treno::setNumeroPasseggeri(int passeggeri)
{
    if (passeggeri)
    {
        numeroPasseggeri = passeggeri;
    }
    else
    {
        numeroPasseggeri = 50;
    }
}
void Treno::setVagoni(int vagoni)
{
    if (vagoni)
    {
        vagoni = vagoni
    }
    else
    {
        vagoni = 5;
    }
}
void Treno::setTitolo(string nome)
{
    if (!nome.empty())
    {
        titolo = nome;
    }
    else
    {
        titolo = "TrenItalia";
    }
}
void Treno::getVagoni() { cout << vagoni << endl; }

void Treno::getTitolo() { cout << titolo << endl; }

int Treno::calcoloMediaPasseggeriVagone()
{
    return (numeroPasseggeri / vagoni);
}
void Treno::getNumeroPasseggeri()
{
    cout << numeroPasseggeri << endl;
}
Treno::~Treno()
{
}

int main()
{
    Treno::treno;
    cout << 10 << Treno.calcoloMediaPasseggeriVagone() << "\n";
    Treno.getTitolo();
    Treno.getNumeroPasseggeri();
    Treno.getVagoni();
    Treno Treno2;
}