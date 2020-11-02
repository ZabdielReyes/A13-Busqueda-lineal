#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include<iostream>
#include <iomanip>
using namespace std;

class Computadora
{
	string so;
	string tipo;
	float gb;
	int ram;
public:
	Computadora();
	Computadora(const string &so,
			  const string &tipo,
		   	  float gb,
			  int ram);
	void setSo(const string &v);
	string getSo();
	void setTipo(const string &v);
	string getTipo();
	void setGb(float v);
	float getGb();
	void setRam(int v);
	int getRam();
	
	friend ostream& operator<<(ostream &out, const Computadora &p)
	{
		out << left ;
		out << setw(22) << p.so ;
		out << setw(22) << p.tipo ;
		out << setw(22) << p.gb;
		out << setw(22) << p.ram;
		out <<endl;
		
		return out;
	}
	friend istream& operator >>(istream &in, Computadora &p)
	{
		/*
		string temp;
		float gb;
		int ram;
		*/
		
		cout <<"SO: ";
		getline(cin, p.so);
		
		cout <<"Marca: ";
		getline(cin, p.tipo);
		
		cout <<"Almacenamiento: ";
		cin>> p.gb;
		
		cout <<"Ram: ";
		cin>> p.ram;
		
		return in;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////
	bool operator==(const Computadora& p)
	{
		
		return so == p.so;
	}
	
	bool operator==(const Computadora& p) const
	{
		
		return so == p.so;
	}
};

#endif
