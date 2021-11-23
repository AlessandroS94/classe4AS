#include <iostream>
#include <string>

using namespace std;

class Libri
{
private:
    int numeroPagine;
    int capitoli;
    string titolo;
    void setNumeroPagine(int pagine);
    void setCapitoli(int capitoli);
    void setTitolo(string nome);

public:
    void getNumeroPagine();
    void getCapitoli();
    void getTitolo();
    int calcolaMediaPagineCapitolo();
    Libri();
    Libri(int numeroPagine, int capitoli, string titolo);
    ~Libri();
};

Libri::Libri()
{
    numeroPagine = 100;
    capitoli = 10;
    titolo = "Programma in C++";
}
Libri::Libri(int numeroPagineVal, int capitoliVal, string titoloVal)
{
    setNumeroPagine(numeroPagineVal);
    setCapitoli(capitoliVal);
    setTitolo(titoloVal);
}
void Libri::setNumeroPagine(int pagine)
{
    if (pagine)
    {
        numeroPagine = pagine;
    }
    else
    {
        numeroPagine = 100;
    }
}
void Libri::setCapitoli(int capitoli)
{
    if (capitoli)
    {
        capitoli = capitoli;
    }
    else
    {
        capitoli = 10;
    }
}
void Libri::setTitolo(string nome)
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
void Libri::getCapitoli() { cout << capitoli << endl; }

void Libri::getTitolo() { cout << titolo << endl; }

int Libri::calcolaMediaPagineCapitolo()
{
    return (numeroPagine / capitoli);
}
void Libri::getNumeroPagine()
{
    cout << numeroPagine << endl;
}
Libri::~Libri()
{
}

int main()
{
    Libri libro;
    cout << "Pagine per capitolo: \t" << libro.calcolaMediaPagineCapitolo() << "\n";
    libro.getTitolo();
    libro.getNumeroPagine();
    libro.getCapitoli();
    Libri libro2;
}
