#ifndef Des_H_
#define Des_H_
#include "Funcionario.h"
class Designer: virtual public Funcionario{
  public:
  Designer(int matricula,string Nome,int HT, int EE);
  void RealizarPagamento(int CR,int mes,int ano,string des= "Sálario");
  float getSalario(int CR);
  string toString();
};         
#endif