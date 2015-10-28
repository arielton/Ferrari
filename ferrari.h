#ifndef FERRARI_H
#define FERRARI_H
#include<string>

class Ferrari
{
public:
	Ferrari();
	Ferrari(double , double, int);

	void reduzir(double);
	void acelerar(double);
	void setEstado(bool);

private:

	double velocidadeAtual;
	double kilometroPercorrido;
	bool estado;

};

#endif // FERRARI_H
