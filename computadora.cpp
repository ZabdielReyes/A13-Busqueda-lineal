#include <iostream>
#include <cstdlib>
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

#include "computadora.h"

Computadora::Computadora()
{
	
	
}

Computadora::Computadora(const string &so,
			  const string &tipo,
		   	  float gb,
			  int ram)
{
	this->so = so;
	this->tipo = tipo;
	this->gb = gb;
	this->ram = ram;
	
}

void Computadora::setSo(const string &v)
{
	so = v;
}

string Computadora::getSo()
{
	return so;
}

void Computadora::setTipo(const string &v)
{
	tipo = v;
}

string Computadora::getTipo()
{
	return tipo;
}

void Computadora::setGb(float v)
{
	gb = v;
}

float Computadora::getGb()
{
	return gb;
}

void Computadora::setRam(int v)
{
	ram = v;
}

int Computadora::getRam()
{
	return ram;
}
