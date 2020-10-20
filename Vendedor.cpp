#include "Vendedor.hpp"
#define MESESNOANO 12

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) {

  setNome(nome);
  setSalarioHora(salarioHora);
  setQuotaMensalVendas(quotaMensalVendas);
}

double Vendedor::quotaTotalAnual() {

  return quotaMensalVendas * MESESNOANO;
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas) {

  this->quotaMensalVendas = quotaMensalVendas;
}

void Vendedor::informacoes(double horasTrabalhadas) {

  std::cout << "Nome: " << this->nome << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;  
  std::cout << std::endl;
}
