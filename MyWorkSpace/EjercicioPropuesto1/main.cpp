#include <Pila.hpp>
#include <Persona.hpp>

int main(int argc, char **argv)
{
	Persona pers;
	pers = new Persona(5);
	Pila pila;
    
    pila.insertar(pers);
    pila.insertar(pers);
    pila.insertar(pers);
    pila.insertar(pers);
    pila.mostrar();
    
    int cima=pila.cima();
    pila.extraer();
    cout<<"\tDespues de extraer la cima("<<cima<<")..."<<endl;
    pila.mostrar();
    
    pila.insertar(pers);
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    
	return 0;
}