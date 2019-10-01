#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char descripcion[32];
    int cargaHoraria;

}eMateria;

void hardcodearMateria(eMateria listadoDeMaterias[],int lengMateria);
void mostrar_Materias(eMateria listadoDeMaterias[],int lengMateria);
void mostrar_unaMateria(eMateria laMateria);

int buscar_Materia(eMateria listadoDeMaterias[],int lengMateria,int legajo);
