#include <iostream>
using namespace std;

class NodoPila{
public:
    NodoPila(Persona p, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Persona p;
    NodoPila* siguiente;
    friend class Pila;
};
typedef NodoPila* pnodoPila;
