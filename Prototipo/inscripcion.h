#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "fecha.h"
#include "alumno.h"

typedef struct
{

    int idInscripcion;
    int legajo;
    int idMateria;
    eFecha Finscripcion;
    int estado;

}eInscripcion;


void inicializar_Inscripcion(eInscripcion listadoDeInscripcion[],int lengInscrip);
eInscripcion cargarInscripcion(eMateria laMateria,int lenMateria);
int inscribirAlumno(eInscripcion listaDeInscripcion[], int lengInscrip,eAlumno listadoDeAlumnos[],int lengAlumnos,eMateria listadoDeMateria[],int lengMateria,eLocalidad arrayLocalidad[],int lengLocalidad);
//Buscar libre
void mostrar_AlumnoInscripto(eInscripcion listaDeInscripcion[], int lengInscrip,eAlumno listadoDeAlumnos[],int lengAlumnos,eMateria listadoDeMateria[],int lengMateria);

void mostrar_unAlumnoInscripto(eInscripcion listaDeInscripcion,eAlumno listadoDeAlumnos,eMateria listadoDeMateria);












