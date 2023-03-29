#include "Designer.h"

Designer::Designer(int matricula,string Nome,int HT, int EE):Funcionario(matricula,Nome,HT,EE){}
void Designer::RealizarPagamento(int CR,int mes,int ano,string des){ 
float P=(CR*HT);
Hist_P.push_back(Pagamento(mes,ano,P,des));
cout<<"Salário: "<<P<<" R$"<<endl;
}
float Designer::getSalario(int CR){
    float P=(CR*HT);
    return P;
  } 
string Designer::toString(){
return Funcionario::toString()+"\n";
}