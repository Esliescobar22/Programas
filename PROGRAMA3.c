#include stdio.h
int main()
{
    /*Esli Escobar 
    Equipo Alfa Maravilla
    22 abr 21
    Programa 3.Pide dos reales,calcula promedio y muestra el resultavo
    */
   float primer, segundo, tercero;
   printf("\n\n Programa 3");
   printf("\n\n Saca el promedio de valores reales");
   printf("\n\n Dame el primer valor real");
   scanf("%f",&primer); //Permite capturar un valor real y lo guardo en variable primer//
   printf("\n\n Dame el segundo valor real");
   scanf("%f",&segundo); //Permite capturar un valor real y lo guardo en variable primer//
   tercero=(primer+segundo)/3;
   printf("\n El promedio es %f",tercero);
   return 0;
}