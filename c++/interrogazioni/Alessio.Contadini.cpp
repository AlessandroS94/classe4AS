#include <iostream>
#include <string>

using namespace std;
//imprecisioni
//; dopo i metodi???
// Il distruttore non è void! 
//COUT << E NON >>
class Scaffale
{
private:
   int numeroRipiani;
   int numeroOggetti;
   string nomeScaffale;
   void setNumeroRipiani(int ripiani);
   void setNumeroOggetti(int oggetti);
   void setNomeScaffale(string nome);

public:
    void getNumeroRipiani();
    void getNumeroOggetti();
    void getNomeScaffale();
    Scaffale();
    Scaffale(int numeroRipiani, int numeroOggetti, string nomeScaffale);
    ~Scaffale();
};
Scaffale::Scaffale()
{
    numeroRipiani = 4;
    numeroOggetti = 10;
    nomeScaffale =  "Blu";
}
Scaffale::Scaffale(int numeroRipianiVal,  int numeroOggettiVal, string nomeScaffaleVal)
{
    setNumeroRipiani(numeroRipianiVal);
    setNumeroOggetti(numeroOggettiVal);
    setNomeScaffale(nomeScaffaleVal);
}

void Scaffale::setNumeroRipiani(int ripiani)
{
     if(ripiani)
     {
         numeroRipiani = ripiani;
     }
    else
     {
        numeroRipiani = 4;
     }
}
void Scaffale::setNumeroOggetti(int oggetti)
{
     if(oggetti)
     {
         numeroOggetti = oggetti;
     }
     else
     {
         numeroOggetti = 10;
     }
}
void Scaffale::setNomeScaffale(string scaffale)
{
    if(!nomeScaffale.empty())
    {
        nomeScaffale = scaffale;
    }
    else
    {
        nomeScaffale = "Blu";
    }
}
void Scaffale::getNumeroRipiani() { cout << numeroRipiani << endl; };

void Scaffale::getNumeroOggetti()  { cout << numeroOggetti << endl;  };

void Scaffale::getNomeScaffale()   { cout << nomeScaffale << endl;   };

Scaffale::~Scaffale(){};

int main()
{

    Scaffale scaffale4S ;

    scaffale4S.getNomeScaffale();
    scaffale4S.getNumeroRipiani();
    scaffale4S.getNumeroOggetti();
    Scaffale Scaffale2;
}
