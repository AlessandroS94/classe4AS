#include <iostream>
#include <string>
//perfetto
using namespace std;

class Libreria
{
private:
    int numeroMensole;
    int libri;
    string  titolo;
    void setNumeroMensole(int mensole);
    void setLibri(int libri);
    void setTitolo(string nome);

public:
    void getNumeroMensole();
    void getLibri();
    void getTitolo();
    int CalcolaLaMediaLibriMensola();
    Libreria();
    Libreria(int numeroMensole, int libri, string titolo);
    ~Libreria();
};

Libreria::Libreria()
{
    numeroMensole = 7;
    libri = 60;
    titolo = "LibreriaIkea";
}
Libreria::Libreria(int numeroMensoleVal, int libriVal, string titoloVal)
{
    setNumeroMensole(numeroMensoleVal);
    setLibri(libriVal);
    setTitolo(titoloVal);
}
void Libreria::setNumeroMensole(int mensole)
{
    if (mensole)
  {
      numeroMensole = mensole;
  }  
  else
  {
      numeroMensole = 7;
  }
}
void Libreria::setLibri(int libri)
{
    if (libri)
    {
        libri = libri;
    }
    else
    {
        libri = 60;
    }
}
void Libreria::setTitolo(string nome)
{
    if (!nome.empty())
    {
        titolo = nome;
    }
    else 
    {
        titolo = "LibreriaIkea";
    }
}
void Libreria::getLibri() { cout << libri << endl; }

void Libreria::getTitolo() { cout << titolo << endl; }

int Libreria::CalcolaLaMediaLibriMensola()
{
    return (libri / numeroMensole);
}
void Libreria::getNumeroMensole()
{
    cout << numeroMensole << endl;
}
Libreria::~Libreria()
{
}

int main()
{
    Libreria libreria;
    cout<< "Libri per mensola: \t" <<libreria.CalcolaLaMediaLibriMensola()<< "\n";
    libreria.getTitolo();
    libreria.getNumeroMensole();
    libreria.getLibri();
    Libreria libreria2;
}