//C++ , CLASSI HOTEL
// CLASSI HOTEL

#include <iostream>
#include <string>

using namespace std;

class Hotel
{
private:
   int numeroStanze;
   int numeroPiani;
   string nomeHotel;
   void setNumeroStanze(int stanze);
   void setNumeroPiani(int piani);
   void setNomeHotel(string nome);

public:
    void getNumeroStanze();
    void getNumeroPiani();
    void getNomeHotel();
    Hotel();
    Hotel(int numeroStanze, int numeroPiani, string nomeHotel);
    ~Hotel();
};

Hotel::Hotel()
{
    numeroStanze = 70;
    numeroPiani = 10;
    nomeHotel =  "Medusa";
}
Hotel::Hotel(int numeroStanzeVal,  int numeroPianiVal, string nomeHotelVal)
{
    setNumeroStanze(numeroStanzeVal);
    setNumeroPiani(numeroPianiVal);
    setNomeHotel(nomeHotelVal);
}
void Hotel::setNumeroStanze(int stanze)
{
     if(stanze)
     {
         numeroStanze = stanze;
     }
    else
     {
        numeroStanze = 70;
     }
}
void Hotel::setNumeroPiani( int piani)
{
     if(piani)
     {
         numeroPiani = piani;
     }
     else
     {
         numeroPiani = 10;
     }
}
void Hotel::setNomeHotel(string nome)
{
    if(!nomeHotel.empty())
    {
        nomeHotel = nome;
    }
    else
    {
        nomeHotel = "Medusa";
    }
}

void Hotel::getNumeroStanze(){ cout << numeroStanze << endl; }

void Hotel::getNumeroPiani(){ cout << numeroPiani << endl;  }

void Hotel::getNomeHotel(){ cout << nomeHotel << endl;   }

Hotel::~Hotel()
{
}

int main()
{

    Hotel hotel4S ;

    hotel4S.getNomeHotel();
    
    
}
