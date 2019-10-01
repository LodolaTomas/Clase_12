#include "inscripcion.h"

void inicializar_Inscripcion(eInscripcion listadoDeInscripcion[],int lengInscrip)
{
    int i;

    for(i=0; i<lengInscrip; i++)
    {
        listadoDeInscripcion[i].estado=LIBRE;

    }


}

int buscar_LibreInscirpcion(eInscripcion listadoDeInscripcion[],int lengInscrip)
{
    int indice = -1;
    int i;

    for(i=0; i<lengInscrip; i++)
    {
        if(listadoDeInscripcion[i].estado==LIBRE)
        {
            indice = i;
            break;
        }
    }
    return indice;//retorno -1 sino encontro un lugar libre
}
eInscripcion cargarInscripcion(eMateria laMateria,int lenMateria)
{
    eInscripcion auxInscripcion;



    return auxInscripcion;

}
int inscribirAlumno(eInscripcion listaDeInscripcion[], int lengInscrip,eAlumno listadoDeAlumnos[],int lengAlumnos,eMateria listadoDeMateria[],int lengMateria,eLocalidad arrayLocalidad[],int lengLocalidad)
{

    int indice;

    int legajo;
    int materia;
    //int id_1;
    int retorno=-1;
    indice = buscar_LibreInscirpcion(listaDeInscripcion, lengInscrip);

    if(indice!=-1)
    {
        //hay lugar
        mostrarListadoAlumnos(listadoDeAlumnos,lengAlumnos,arrayLocalidad,lengLocalidad);
        getValidInt("Ingrese el alumno a Inscribir:","Error,Solo los numeros en Pantalla",1000,1010,&legajo);
        listaDeInscripcion[indice].legajo=legajo;
        borrar();
        mostrar_Materias(listadoDeMateria,lengMateria);
        getValidInt("Ingrese la materia:","Error, solo los numero en la pantalla",100,103,&materia);
        listaDeInscripcion[indice].idMateria=materia;
        borrar();
        listaDeInscripcion[indice].Finscripcion=pedirFecha();

        borrar();
        printf("%d %d %d/%d/%d\n",listaDeInscripcion[indice].legajo,listaDeInscripcion[indice].idMateria,listaDeInscripcion[indice].Finscripcion.day,listaDeInscripcion[indice].Finscripcion.month,listaDeInscripcion[indice].Finscripcion.year);

        retorno=verifyConformity("Los datos ingresados son correctos?(Si/No)","Error, reponda (Si/No)");

        if(retorno==1)
        {
            listaDeInscripcion[indice].estado=OCUPADO;

            //listadoDeAlumnos[indice].legajo=id_1;
            //id_1++;
            //*id_beta=id_1;
        }
        if(retorno==0)
        {
            listaDeInscripcion[indice].estado=LIBRE;
        }

    }


    return retorno;



}


void mostrar_AlumnoInscripto(eInscripcion listaDeInscripcion[], int lengInscrip,eAlumno listadoDeAlumnos[],int lengAlumnos,eMateria listadoDeMateria[],int lengMateria)
{

    int i;
    int alumno;
    int materia;

    for(i=0;i<lengInscrip;i++)
    {

        if(listaDeInscripcion[i].estado==OCUPADO)
        {

            alumno=buscarAlumnoLegajo(listadoDeAlumnos,lengAlumnos,listaDeInscripcion[i].legajo);
            materia=buscar_Materia(listadoDeMateria,lengMateria,listaDeInscripcion[i].idMateria);
            printf("%s %10s %15s %20s\n","ID","NOMBRE","MATERIA","FECHA DE INGRESO");
            mostrar_unAlumnoInscripto(listaDeInscripcion[i],listadoDeAlumnos[alumno],listadoDeMateria[materia]);
            printf("\n\n");
        }

    }







}
void mostrar_unAlumnoInscripto(eInscripcion listaDeInscripcion,eAlumno listadoDeAlumnos,eMateria listadoDeMateria)
{

    printf("%d %8s %15s %8d/%d/%d",listaDeInscripcion.legajo,listadoDeAlumnos.name,listadoDeMateria.descripcion,

    listaDeInscripcion.Finscripcion.day,listaDeInscripcion.Finscripcion.month,listaDeInscripcion.Finscripcion.year);

}
