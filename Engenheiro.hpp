#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int projetos;

  public:
    Engenheiro(std::string nome, double salarioHora, int projetos);
    void setProjetos(int projetos);
    int getProjetos();
    void informacoes(double horasTrabalhadas) override; 
	
};

#endif
