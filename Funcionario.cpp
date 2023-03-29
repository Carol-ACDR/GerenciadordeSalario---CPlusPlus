#include "Funcionario.h"

Funcionario::Funcionario(int matricula,string Nome,int HT, int EE){
  this->matricula = matricula;
  this->Nome = Nome;
  this-> HT = HT;
  this->EE=EE;
}

string Funcionario::toString(){
  string P= "\n";
  for(int i=0;i<Hist_P.size();i++){
    P+="\n\nNúmero: "+to_string(i+1)+"\nMês: "+to_string(Hist_P[i].getmes())+"\nAno: "+to_string(Hist_P[i].getano())+"\nValor: "+to_string(Hist_P[i].getvalor())+" R$ \nDescrição: "+Hist_P[i].getdescrição();
  }
  return "Matrícula: "+to_string(this->matricula)+"\nValor de hora Trabalho: "+to_string(this->HT)+"\nTempo de Experiência na Empresa : "+to_string(EE)+" Anos\nHistórico de Pagamento: "+P;
}
int Funcionario::getMatricula(){
  return this->matricula;
}
string Funcionario::getNome(){
  return this->Nome;
}
int Funcionario::getHT(){
  return this->HT;
}