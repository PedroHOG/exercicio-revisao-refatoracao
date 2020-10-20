#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos) {

  setNome(nome);
  setSalarioHora(salarioHora);
  setProjetos(projetos);
}

void Engenheiro::setProjetos(int projetos) {

  this->projetos = projetos;
}

int Engenheiro::getProjetos() {

  return this->projetos;
}

void Engenheiro::informacoes(double horasTrabalhadas) {

  std::cout << "Nome: " << this->nome << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << this->projetos << std::endl;
  std::cout << std::endl;
}

