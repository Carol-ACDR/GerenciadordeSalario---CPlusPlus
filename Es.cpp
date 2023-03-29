#include "Es.h"

EngSoft::EngSoft(int matricula,string Nome,int HT, int EE):Funcionario(matricula,Nome, HT,EE){
int T = EE/3;
if (T ==0){this->Nivel = "Júnior";return;}
if (T ==1){this->Nivel = "Pleno 1";return;}
if (T ==2){this->Nivel = "Pleno 2";return;}
if (T >=3){this->Nivel = "Sênior";return;}
}
void EngSoft::RealizarPagamento(int CR,int mes,int ano,string des){ 
if (this->Nivel == "Júnior"){
  float P=(CR*HT)+500;
  Hist_P.push_back(Pagamento(mes,ano,P,des));
  cout<<"Salário: "<<P<<" R$"<<endl;
  }
if (this->Nivel == "Pleno 1"){
  float P=(CR*HT)+1500;
  Hist_P.push_back(Pagamento(mes,ano,P,des));
  cout<<"Salário: "<<P<<" R$"<<endl;
  }
if (this->Nivel == "Pleno 2"){float P=(CR*HT)+2500;
 Hist_P.push_back(Pagamento(mes,ano,P,des));
  cout<<"Salário: "<<P<<" R$"<<endl;
  }
if (this->Nivel == "Sênior"){
  float P=(CR*HT)+3500;
  Hist_P.push_back(Pagamento(mes,ano,P,des));
  cout<<"Salário: "<<P<<" R$"<<endl;}
  }


float EngSoft::getSalario(int CR){
  if (this->Nivel == "Júnior"){
  return ((CR*HT)+500);
  }
if (this->Nivel == "Pleno 1"){
 return ((CR*HT)+1500);
  }
if (this->Nivel == "Pleno 2"){return ((CR*HT)+2500);
  }
else{return ((CR*HT)+3500);}
}
string EngSoft::toString(){
  return Funcionario::toString()+"\n\nNível: "+Nivel+"\n";
}