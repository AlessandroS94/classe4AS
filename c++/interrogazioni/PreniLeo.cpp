#include <iostream>
#include <string>

using namespace std;

class Tv
{
private:
     int numeroAttacchi;
     int grandezza;
     string titolo;
     void setNumeroAttacchi(int attacchi);
     void setGrandezza(int grandezza);
     void setTitolo(string nome);

public:
     void getNumeroAttacchi();
     void getGrandezza();
     void getTitolo();
     int calcolaMediaAttacchiGrandezza();
     Tv();
     Tv(int numeroAttacchi, int grandezza, string titolo);
     ~Tv();
};

Tv::Tv()
{
    numeroAttacchi = 8;
    grandezza = 28;
    titolo = "Programma in C++";
}
Tv::Tv(int numeroAttacchiVal, int GrandezzaVal, string titoloVal)
{
     setNumeroAttacchi(numeroAttacchiVal);
     setGrandezza(GrandezzaVal);
     setTitolo(titoloVal);
}
void Tv::setNumeroAttacchi(int grandezza)
{
     if (grandezza)
     {          numeroAttacchi = grandezza;
     }
     else
     {
         numeroAttacchi = 8;
     }
}
void Tv::setGrandezza(int grandezza)
{
     if (grandezza)
     {
         grandezza = grandezza;
     }
    else
     {
         grandezza = 28;
     }
}
void Tv::setTitolo(string nome)
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
void Tv::getGrandezza() { cout << grandezza << endl; }

void Tv::getTitolo() { cout << titolo << endl; }

int Tv::calcolaMediaAttacchiGrandezza()
{
    return (numeroAttacchi / grandezza);
}
void Tv::getNumeroAttacchi()
{
    cout <<numeroAttacchi << endl;
}
Tv::~Tv()
{
}

int main()
{
    Tv tv;
    cout << "Attacchi per grandezza:\t" <<tv.calcolaMediaAttacchiGrandezza() << "\n";
    tv.getTitolo();
    tv.getNumeroAttacchi();
    tv.getGrandezza();
    //Tv tv2;
}
