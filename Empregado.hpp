#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    double salarioHora;  
    std::string nome;  

  public:
    double pagamentoMes(double horasTrabalhadas);
    void setSalarioHora(double salarioHora);
    std::string getNome();
    void setNome(std::string nome);
    virtual void informacoes(double horasTrabalhadas) = 0; 
	
};

#endif