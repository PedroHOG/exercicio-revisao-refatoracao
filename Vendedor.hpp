#ifndef VENDEDOR_H
#define VENDEDOR_H


#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;

  public: 
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas); 
    void setQuotaMensalVendas(double quotaMensalVendas);
    double quotaTotalAnual();
    void informacoes(double horasTrabalhadas) override; 
	
};

#endif
