#ifndef Es_H_
#define Es_H_
#include "Funcionario.h"
class EngSoft: virtual public Funcionario{
  protected:
  string Nivel;
  public:
  EngSoft(int matricula,string Nome,int HT, int EE);
  void RealizarPagamento(int CR,int mes,int ano,string des= "Sálario");
  float getSalario(int CR);
  string toString();
};         
#endif