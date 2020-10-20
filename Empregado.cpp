#include "Empregado.hpp"
#define HORASPADRAO 8
#define METADE 0.5

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
  double _horasTrabalhadas = horasTrabalhadas;
	  
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > HORASPADRAO) {
    double _horaExtra = horasTrabalhadas - HORASPADRAO;
    _horasTrabalhadas += _horaExtra * METADE;
  }
  return _horasTrabalhadas * salarioHora;
}

void Empregado::setSalarioHora(double salarioHora) {

  this->salarioHora = salarioHora;
}

std::string Empregado::getNome() {

  return this->nome;
} 

void Empregado::setNome(std::string nome) {

  this->nome = nome;
}