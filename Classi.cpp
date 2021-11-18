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
    Libri(int numeroPagine,int capitoli,string titolo);
    ~Libri();
};

Libri::Libri()
{
    numeroPagine = 100;
    capitoli = 10;
    titolo = "Programma in C++";
}
Libri::Libri(int numeroPagineVal,int capitoliVal,string titoloVal)
{
    setNumeroPagine(numeroPagineVal);
    setCapitoli(capitoliVal);
    setTitolo(titoloVal);
}
void Libri::setNumeroPagine(int pagine){
    if(pagine)
       { numeroPagine = pagine;}
    else
        {numeroPagine = 100;}
    
}
void Libri::setCapitoli(int capitoli){
    if(capitoli)
        {capitoli = capitoli;}
    else
        {capitoli = 10;}
}
void Libri::setTitolo(string nome){
    if(!nome.empty())
        {titolo = nome;}
    else
       {titolo = "Programma in C++";} 
}
int Libri::calcolaMediaPagineCapitolo(){
    return (numeroPagine/capitoli);
}

Libri::~Libri()
{
}

int main()
{
    Libri libro;
    cout<< "Pagine per capito: \t"<<libro.calcolaMediaPagineCapitolo()<<endl;
    Libri libro2;
    
}
