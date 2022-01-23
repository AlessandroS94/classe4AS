#include <iostream>
#include <string>
using namespace std;
// Da chiedere
//  nome classse
//  nome veriabili staccate
//  scritto di fretta
//: con ;
// string nomeparametro assente
// non ci siamo proprio
class Condominio
{
private:
    int numero_appartamenti;
    int finestre;
    string colore;
    void setNumeroFinestre(int finestre);
    void setAppartamenti(int appartamenti);
    void setColore(string colore);

public:
    void getNumeroFinestre();
    void getAppartamenti();
    void getColore();
    int calcololaMediaFinestreAppartamenti();
    Condominio();
    Condominio(int numeroFinestre, int appartamenti, string colore);
    ~Condominio();
};

Condominio::Condominio()
{
    finestre = 30;
    numero_appartamenti = 30;
    colore = "blu";
}

Condominio::Condominio(int numeroFinestreVal, int appartamentiVal, string coloreVal)
{
    setNumeroFinestre(numeroFinestreVal);
    setAppartamenti(appartamentiVal);
    setColore(coloreVal);
}

void Condominio::setNumeroFinestre(int numeroFinestre)
{
    if (numeroFinestre)
    {
        finestre = numeroFinestre;
    }
        else
        {
            finestre = 30;
        }
}
void Condominio::setAppartamenti(int finestre)
{
    if (finestre)
    {
        numero_appartamenti = finestre;
    }
    else
    {
        numero_appartamenti = 30;
    }
}
void Condominio::setColore(string colore)
{
    if (!colore.empty())
    {
        colore = colore;
    }
    else
    {
        colore = "blu";
    }
}
void Condominio::getAppartamenti() { cout << numero_appartamenti << endl; }
void Condominio::getColore() { cout << colore << endl; }
int Condominio::calcololaMediaFinestreAppartamenti() { return (finestre / numero_appartamenti); }
void Condominio::getNumeroFinestre() { cout << finestre << endl; }
Condominio::~Condominio(){};
int main()
{
    Condominio condominio;
    cout<< "Finestre per appartamento: It" << condominio.calcololaMediaFinestreAppartamenti()<<endl;
    condominio.getColore();
    condominio.getNumeroFinestre();
    condominio.getAppartamenti();
    Condominio condominio2;

    //perchè condominio.get.... invece di cout get.....? 
}