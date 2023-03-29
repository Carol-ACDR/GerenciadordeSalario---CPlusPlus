#include "Pagamento.h"

Pagamento::Pagamento(int mes, int ano,float valor,string descrição){
  this->mes =mes;
  this->ano = ano;
  this->valor = valor;
  this->descrição = descrição;
}
int Pagamento::getmes(){
  return this->mes;
}
int Pagamento::getano(){
  return this->ano;
}
float Pagamento::getvalor(){
  return this->valor;
}
string Pagamento::getdescrição(){
  return this->descrição;
}