#ifndef Gerente_H_
#define Gerente_H_
#include "Funcionario.h"

class Gerente: virtual public Funcionario{
  protected:
  int NE;
  public:
  Gerente(int matricula,string Nome,int HT, int EE,int NE);
  void RealizarPagamento(int CR,int mes,int ano,string des= "Sálario");
  float getSalario(int CR); 
  string toString();
  
};
#endif