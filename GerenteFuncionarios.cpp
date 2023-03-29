#include "GerenteFuncionarios.h"
gerenteFuncionarios::gerenteFuncionarios(){}
void gerenteFuncionarios::AddFuncionario(Funcionario &f){
Lista.push_back(&f);
}
void gerenteFuncionarios::removerFuncionario(int	matricula){
  if(Lista.size()==0){cout<<"Lista vazia!"<<endl;return;}
  list<Funcionario*>::iterator L;
  for(L = Lista.begin();L!=Lista.end();L++){
    if( (*L)->getMatricula() == matricula){Lista.remove((*L));cout<<"\nFuncionário removido!"<<endl;return;}}
  cout<<"\nMatrícula não encontrada!"<<endl;return;
  }
void	gerenteFuncionarios::pagar(int	 matricula,	 int	 CR,	 int	 mês, int	 ano,	 string	 descrição){
if(Lista.size()==0){cout<<"Lista vazia!"<<endl;return;}
list<Funcionario*>::iterator L;
  for(L = Lista.begin();L!=Lista.end();L++){
    if( (*L)->getMatricula() == matricula){(*L)->RealizarPagamento(CR, mês, ano, descrição);cout<<"Pagamento Realizado!"<<endl;return;}}
  cout<<"Matrícula não encontrada!"<<endl;
}
void gerenteFuncionarios::consultarSalario(int	 matricula,	 int	 CH){
  list<Funcionario*>::iterator L;
  for(L = Lista.begin();L!=Lista.end();L++){
    if( (*L)->getMatricula() == matricula){cout<<"Salário: "<<(*L)->getSalario(CH)<<" R$"<<endl;return;}}
  cout<<"Matrícula não encontrada!"<<endl;
}
void	gerenteFuncionarios::buscarFuncionario(int	 matricula){
  list<Funcionario*>::iterator L;
  for(L = Lista.begin();L!=Lista.end();L++){
    if( (*L)->getMatricula() == matricula){cout<<(*L)->toString()<<endl;return;}}
  cout<<"\nMatrícula não encontrada!"<<endl;
}
void gerenteFuncionarios::imprimirFuncionários(){
if(Lista.size()==0){cout<<"Lista vazia!"<<endl;return;}
list<Funcionario*>::iterator L;
  for(L = Lista.begin();L!=Lista.end();L++){
  cout<<"\nNome: "<<(*L)->getNome()<<"\nMatrícula: "<<to_string((*L)->getMatricula())<<"\nTempo de empresa: "<<to_string((*L)->getHT())<<endl;}
  return;
  }