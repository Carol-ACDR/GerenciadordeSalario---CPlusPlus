#ifndef Pagamento_H_
#define Pagamento_H_
#include <iostream>
using namespace std;
class Pagamento{
  private:
  int mes;
  int ano;
  float valor;
  string descrição;
  public:
  Pagamento(int mes, int ano,float valor,string descrição);
  int getmes();
  int getano();
  float getvalor();
  string getdescrição();
  
};
#endif