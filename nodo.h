#ifndef NODO_H  
#define NODO_H  

#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;  

struct _Nodo{
    DATO dato;
    Nodo *sig;
};

Nodo* crear_nodo();
bool borrar_nodo(Nodo*);
Nodo* asignar_dato(Nodo*,DATO);
DATO obtener_dato(Nodo*);
Nodo* asignar_ref(Nodo*, Nodo*);
Nodo* obtener_ref(Nodo*);

#endif