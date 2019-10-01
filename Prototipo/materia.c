#include "materia.h"

void hardcodearMateria(eMateria listadoDeMaterias[],int lengMateria)
{

    int i;
    int idMateria[]={100,101,102,103};
    char DescipcionMateria[][25]={"Programacion I","Laboratorio I","Matematica I","S.P.D"};
    int CargaHoraria[]={4,4,6,4};
    for(i=0;i<lengMateria;i++)
    {
        listadoDeMaterias[i].id=idMateria[i];
        strcpy(listadoDeMaterias[i].descripcion,DescipcionMateria[i]);
        listadoDeMaterias[i].cargaHoraria=CargaHoraria[i];

    }




}

void mostrar_Materias(eMateria listadoDeMaterias[],int lengMateria)
{
    int i;
            printf("%s %20s %20s","ID","Materia","C.Horaria");
    for(i=0;i<lengMateria;i++)
    {

        mostrar_unaMateria(listadoDeMaterias[i]);
    }


}

void mostrar_unaMateria(eMateria laMateria)
{

    printf("\n%d %20s %15d\n",laMateria.id,laMateria.descripcion,laMateria.cargaHoraria);

}

int buscar_Materia(eMateria listadoDeMaterias[],int lengMateria,int legajo)
{

    int retorno=-1;
    int i;

    for(i=0;i<lengMateria;i++)
    {
        if(listadoDeMaterias[i].id==legajo)
        {

        retorno=i;
        break;
        }


    }

    return retorno;
}
