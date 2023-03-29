#include "Gerente.h"

Gerente::Gerente(int matricula,string Nome,int HT, int EE,int NE):Funcionario(matricula,Nome,HT,EE){
  this->NE = NE;
} 
void Gerente::RealizarPagamento(int CR,int mes,int ano,string des){
  float P=(CR*HT*NE);
  Hist_P.push_back(Pagamento(mes,ano,P,des));
  cout<<"Salário: "<<P<<" R$"<<endl;
}
float Gerente::getSalario(int CR){
  float P=(CR*HT*NE);  
  return P;
}
string Gerente::toString(){
    return Funcionario::toString()+"\n\nNúmero de Equipes: "+to_string(this->NE)+"\n";
  }