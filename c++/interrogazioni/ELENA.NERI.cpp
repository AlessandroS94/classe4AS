#include <iostream>
#include <string>

using namespace std;

class Casa
{
private:
    int numeroStanze;
    int finestre;
    string colore;
    void setNumeroStanze(int stanze);
    void setFinestre(int finestre);
    void setColore(string colore);

public:
    void getNumeroStanze();
    void getFinestre();
    void getColore();
    int calcolaMediaStanzeFinestre();
    Casa();
    Casa(int numeroStanze, int finestra , string titolo);
    ~Casa();
};

Casa::Casa()
{
    numeroStanze = 5;
    finestre = 200;
    colore = "Blu";
}
Casa::Casa(int numeroStanzeVal, int finestreVal, string coloreVal)
{
    setNumeroStanze(numeroStanzeVal);
    setFinestre(finestreVal);
    setColore(coloreVal);
}
void Casa::setNumeroStanze(int stanze)
{
    if (stanze)
    {
        numeroStanze = stanze;
    }
    else
    {
        numeroStanze = 100;
    }
}
void Casa::setFinestre(int finestre)
{
    if (finestre)
    {
        finestre = finestre;
    }
    else
    {
        finestre = 10;
    }
}
void Casa::setColore(string colore)
{
    if (!colore.empty())
    {
        colore = colore;
    }
    else
    {
        colore = "Rosa";
    }
}
void Casa::getFinestre() { cout << finestre << endl; }

void Casa::getColore() { cout << colore << endl; }

int Casa::calcolaMediaStanzeFinestre()
{
    return (finestre /numeroStanze);
}
void Casa::getNumeroStanze()
{
    cout << numeroStanze << endl;
}
Casa::~Casa()
{
}

int main()
{
    Casa casa;
    cout << "Finestre per stanza: \t" << casa.calcolaMediaStanzeFinestre() << "\n";
    casa.getColore();
    casa.getNumeroStanze();
    casa.getFinestre();
    Casa casa2;
}


