#include "fecha.h"


eFecha pedirFecha(){

       eFecha laFecha;

       getValidInt("Ingrese el dia: ","Error, Solo numeros",0,31,&laFecha.day);
       getValidInt("Ingrese el mes: ","Error, Solo numeros",0,12,&laFecha.month);
       getValidInt("Ingresre el year: ","Error, Solo numero",2000,2019,&laFecha.year);

    return laFecha;
}
