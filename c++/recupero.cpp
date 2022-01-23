#include <iostream>
#include <string>

using namespace std;

class Robot{
    
    private:
        string nome;
        int arti;
        void setArti(int arti);
        void setNome(string nome);
    public:
        string getNome();
        int getArti();
        Robot();
        Robot(string mod);
        ~Robot();
};
Robot::Robot(){}
Robot::~Robot(){}
Robot::Robot(string mod){
    if(mod == "auto"){
        nome = "Pippo";
        arti = 9;
    }
    else 
        {
            int artiI;
            string nomeI;
            cout << "Quanti arti ? "<<endl;
            cin>> artiI;
            setArti(artiI);
            cout << "Il suo nome"<<endl;
            setNome(nomeI);
        }
}

void Robot::setArti(int artiI){
  arti = artiI;
}

void Robot::setNome(string nomeI){
  nome = nomeI;
}

int Robot::getArti(){
  return arti;
}

string Robot::getNome(){
  return nome;
}

int main (){
    Robot zio("auto");
    cout << zio.getArti()<<endl;
    return 0;
}