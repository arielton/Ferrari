#include "Ferrari.h"


Ferrari::Ferrari()
{
    this->aceleracao=7.8;
    this->velocidade=0;
    this->estado=0;

}

Ferrari::Ferrari(double aceleracao, double velocidade, int estado)
{
   this->aceleracao=aceleracao;
   this->velocidade=velocidade;
   this->estado=estado;

}

Ferrari::ligar(int ponto){

    this->estado=ponto;

}

Ferrari::acelerar(double segundos){

    this->aceleracao=aceleracao*segundos;
}

Ferrari::reduzir(double freio){

    this->velocidade=velocidade-freio;
}

~Ferrari::Ferrari()

