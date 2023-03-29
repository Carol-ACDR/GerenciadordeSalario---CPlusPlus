#include "GerenteFuncionarios.h"

int main() {
  gerenteFuncionarios P;
  EngSoft Quartzo(1,"Luísa",30, 1);
  EngSoft Lua(2,"Pamela",30, 4);
  Designer Opal(3,"Lisa",30, 5);
  EngSoft Ouro(4,"Anthonia",30, 6);
  Gerente Prisma(5,"Claudia",30,6,3);
  EngSoft Diamante(6,"Milena",30, 9);
  
  P.removerFuncionario(2);
  P.AddFuncionario(Quartzo);
  P.AddFuncionario(Lua);
  P.AddFuncionario(Opal);
  P.AddFuncionario(Ouro);
  P.AddFuncionario(Prisma);
  P.AddFuncionario(Diamante);
  P.pagar(1, 50, 2, 2002,"D");
  P.pagar(2, 50, 2, 2002,"L");
  P.pagar(3, 60, 2, 2002);
  P.pagar(3, 70, 2, 2002);
  P.pagar(3, 80, 2, 2002);
  P.pagar(4, 50, 2, 2002,"M");
  P.pagar(5, 50, 2, 2002,"C");
  P.pagar(6, 50, 2, 2002,"A");
  P.pagar(7, 50, 2, 2002);
  P.consultarSalario(1, 50);
  P.consultarSalario(2, 50);
  P.consultarSalario(3, 50);
  P.consultarSalario(4, 50);
  P.consultarSalario(5, 50);
  P.consultarSalario(6, 50);
  P.consultarSalario(7, 50);
  P.buscarFuncionario(1);
  P.buscarFuncionario(2);
  P.buscarFuncionario(3);
  P.buscarFuncionario(4);
  P.buscarFuncionario(5);
  P.buscarFuncionario(6);
  P.buscarFuncionario(7);
  P.imprimirFuncionários();
  P.removerFuncionario(1);
  P.imprimirFuncionários();
  P.removerFuncionario(2);
  P.imprimirFuncionários();
  P.removerFuncionario(3);
  P.imprimirFuncionários();
  P.removerFuncionario(4);
  P.imprimirFuncionários();
  P.removerFuncionario(7);
  P.imprimirFuncionários();
  P.removerFuncionario(5);
  P.imprimirFuncionários();
  P.removerFuncionario(6);
  P.imprimirFuncionários();
  return 0;
}