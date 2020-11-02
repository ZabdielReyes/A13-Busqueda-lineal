#include <iostream>
#include "arreglo.h"
#include "computadora.h"
#include "computadora.cpp"
using namespace std;

int main()
{
	Arreglo<Computadora> computadoras;
	

	Computadora c01("linux", "Asus Gaming", 24,1024);
	Computadora c02("windows", "asus gaming", 7.8,512);
	Computadora c03("mac os", "apple", 64,2048);
	Computadora c05("linux", "lenovo", 47.0,1024);
	Computadora c06("windows", "dell", 24.0,512);
	
	computadoras <<c01<<c02<<c03<<c02<<c02;
	Computadora c04("windows", "hp", 24.0, 512);
	
	
	Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c04);
	
	if (ptrs.size()>0) {
		for (size_t i = 0; i < ptrs.size(); i++)
		{
			Computadora *p = ptrs[i];
			cout << *p << endl;
		}
	}
	else {
		cout <<"No existen coincidencias" <<endl;
	}
	
	
	
	///////////////////////////////////////////////////////////////////////////////////BUSCAR
	/*
	Arreglo<Computadora> computadoras;
	
	Computadora c01("windows", "asus gaming", 7.8,512);
	Computadora c02("linux", "Asus Gaming", 24,1024);
	//Computadora c03("mac os", "apple", 64,2048);
	Computadora c05("linux", "lenovo", 47.0,1024);
	Computadora c06("windows", "dell", 24.0,512);
	
	computadoras <<c01<<c02<<c05<<c06;
	
	Computadora c04("linux", "dell", 23.4,512);
	Computadora c03("mac os", "apple", 64,2048);
	Computadora *ptr = computadoras.buscar(c03);
	
	if (ptr != nullptr) {
		cout <<*ptr<<endl;
	}
	else
	{
		cout <<"No existe"<<endl;
	}
	*/
	///////////////////////////////////////////////////////////////////////////////////BUSCAR
	
	/*
	Arreglo<string> arreglo;
	
	
    arreglo.insertar_final("Mensaje2");
    arreglo.insertar_final("Mensaje3");
    arreglo.insertar_final("Mensaje4");
    arreglo.insertar_inicio("Mensaje1");
    
    arreglo.insertar("Mensaje100",2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
	
for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    string *s = arreglo.buscar("Mensaje2");
    cout<< s<< " "<<*s<<endl;
    *s = "hola";
for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    */
	
	return 0;
}
