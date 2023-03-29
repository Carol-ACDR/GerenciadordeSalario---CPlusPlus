#ifndef Funcionario_H_
#define Funcionario_H_
#include "Pagamento.h"
#include <vector>

class Funcionario{
  protected:
  int matricula;
  string Nome;
  int HT;
  int EE;
  vector<Pagamento> Hist_P;
  public:
  Funcionario(int matricula,string Nome,int HT, int EE);
  int getMatricula();
  string getNome();
  int getHT();
  virtual void RealizarPagamento(int CR,int mes,int ano,string des= "Sálario")=0;
  virtual float getSalario(int CR)=0; 
  virtual string toString();
};
#endif