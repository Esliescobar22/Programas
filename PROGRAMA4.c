#include stidio.h
int main()
{
    /*Esli Escobar 
    Equipo Alfa Maravilla
    22 abr 21
    Programa 4. Pide valores reales, calcula, multiplica, divide y muestra resultado
    */

   float primer, segundo, multiplica, division; 
   printf("\n\n Programa 3");
   printf("\n\n Saca el promedio de valores reales");
   printf("\n\n Dame el primer valor real");
   scanf("%f",&primer);// permite capturar un valor real y lo guarda en variable//
   printf("\n\n Dame el segundo valor real");
   scanf("%f",&segundo);// Permite capturar un valor real y lo guarda en variable//
   multiplica=primer*segundo;
   division=primer/segundo;
   printf("\n El producto es %f",multiplica);
   printf("\n El cociente es %f",division);

   return 0;
}