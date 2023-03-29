#ifndef Bib_H_
#define Bib_H_
#include "Gerente.h"
#include "Es.h"
#include "Designer.h"
#include<list>

class gerenteFuncionarios{
  private:
  list<Funcionario*> Lista;
  public:
  gerenteFuncionarios();
  void AddFuncionario(Funcionario &f);
  void removerFuncionario(int	matricula);
  void	pagar(int	 matricula,	 int	 CR,	 int	 mês, int	 ano,	 string	 descrição= "Salário");
  void consultarSalario(int	 matricula,	 int	 CH);
  void	buscarFuncionario(int	 matricula);
  void imprimirFuncionários();
};
#endif