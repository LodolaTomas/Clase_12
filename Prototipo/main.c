#include <stdio.h>
#include <stdlib.h>


#include "inscripcion.h"
//settings-Enviroment-GeneralSetings-TerminaltoLunchConsolePrograms
//settings-Editor-GeneralSettings-EditorSettings-Fonts-Manjari
#define LL 3
//lengh localidad
#define LA 11
//lengh Alumnos
#define LM 4
//lengh incirpcion
#define LI 44


int main()
{
    eLocalidad listaDelocalidades[LL];
    eAlumno listaDeAlumnos[LA];
    eMateria listaDeMateria[LM];
    eContador listaDeContador[LL];
    eInscripcion listaDeInscripcion[LI];
    int id_beta=1000;
    int opcion;
    int respuesta;

    inicializar_Alumnos(listaDeAlumnos,LA);

    hardcode_Localidad(listaDelocalidades,LL);
    hardCodearAlumnos(listaDeAlumnos,10,&id_beta);
    hardcode_Contador(listaDeContador,LL,listaDelocalidades);
    hardcodearMateria(listaDeMateria,LM);

    //mostrar_Materias(listaDeMateria,LM);
    //mostrar_AlumnoLocalidad(listaDeAlumnos,LA,listaDelocalidades,LL);


    //mostrar_AlumnoInscripto(listaDeInscripcion,LI,listaDeAlumnos,LA,listaDeMateria,LM);

    do
    {
    getValidInt("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n6. Incsribir Alumno\n7.Salir\nElija una opcion: ","Error, solo numeros[1-7]",1,7,&opcion);

    switch(opcion)
    {
    case 1:
        borrar();//Usar Punteros para esto.
        respuesta=agregarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL,&id_beta);
        switch(respuesta)
        {
        case 0:
            printf("Alumno no Cargado\n");
            break;
        case 1:
            printf("Alumno Cargado\n");
            break;
        case -1:
            printf("Espacio no Disponible\n");
            break;
        }
        pausa();
        break;
    case 2:
        borrar();
        submenu_Mostrar(listaDeAlumnos,LA,listaDelocalidades,LL,listaDeContador,LL);
        pausa();
        break;
    case 3:
        borrar();
        sortStudentsByNameAndAverage(listaDeAlumnos,LA);
        pausa();
        break;
    case 4:
        borrar();
        respuesta = eliminarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL);
        switch(respuesta)
        {
        case 0:
            borrar();
            printf("Accion cancelada por el usuario\n");
            pausa();
            break;
        case 1:
            borrar();
            printf("Alumno eliminado\n");
            pausa();
            break;
        case -1:
            borrar();
            printf("Dato no encontrado\n");
            pausa();
            break;
        }

        break;
    case 5:
/*
        respuesta = modificarAlumno(listaDeAlumnos,A,102);
        switch(respuesta)
        {
        case 0:
            printf("Accion cancelada por el usuario\n");
            break;
        case 1:
            printf("Alumno modificado\n");
            break;
        case -1:
            printf("Dato no encontrado\n");
            break;
        }*/
        break;
        case 6:
        respuesta=inscribirAlumno(listaDeInscripcion,LI,listaDeAlumnos,LA,listaDeMateria,LM,listaDelocalidades,LL);
        switch(respuesta)
        {
        case 0:
            printf("Accion cancelada por el usuario\n");
            break;
        case 1:
            printf("Alumno Inscripto\n");
            break;
        case -1:
            printf("No hay Espacio\n");
            break;
        }
        break;
    }
    borrar();
    }
    while(opcion!=7);


    return 0;
}



