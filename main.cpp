//Bryan Blair
//Alejandro Cruz 

#include <iostream>
using namespace std;

void foo_funtion(void);
void Init_Fifo(void);
void Escribe_Fifo(void);
void Lee_Fifo(void);
int i=0;  // valor global para foo funtion
int FIFO[19];
int guardar;
int pasar;
int *ptrR=nullptr;
int *ptrW=nullptr;
const int size=20;


// Estructura de datos 1
struct MiEstructura1
{
    int d1= 5;
    char d2='b';
    float d3= 3.877;
    char d4= 'e';
    double d5= 3.242526242526;
    int d6= 45;
}varstruct1;



// Estructura de datos 2
struct MiEstructura2
{
    int a= 0;
    int b= 0;
    float c= 2.00;
    char d= 'e';
    char e= 'g';
    double f= 0.00;

}varstruct2;





int main()
{


    char *mystring = "Esta es mi cadena";

    std::cout<<"Cadena my_string: "<<"\n\n";


    //operador ->

    MiEstructura1 *ptr=&varstruct1;

   std::cout<<"valor de int1 estructura 1: "<<ptr->d1<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr->d2<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr->d3<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr->d4<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr->d5<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr->d6<<"\n\n";


    //operador ->

   MiEstructura2 *ptr2=&varstruct2;

   std::cout<<"valor de int1 estructura 1: "<<ptr2->a<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr2->b<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr2->c<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr2->d<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr2->e<<"\n";

   std::cout<<"valor de int1 estructura 1: "<<ptr2->f<<"\n";


     //Type casting

   std::cout<<"TYPE CASTING ESTRUCTURA 1"<<"\n\n";

   std::cout<<"type casting "<<*((int*)ptr)<<"\n";
   std::cout<<"type casting "<<*((char*)ptr+4)<<"\n";
   std::cout<<"type casting "<<*((float*)ptr+2)<<"\n";
   std::cout<<"type casting "<<*((char*)ptr+12)<<"\n";
   std::cout<<"type casting "<<*((double*)ptr+2)<<"\n";
   std::cout<<"type casting "<<*((int*)ptr+6)<<"\n\n";


   std::cout<<"TYPE CASTING ESTRUCTURA 2"<<"\n\n";

   std::cout<<"type casting "<<*((int*)ptr2)<<"\n";
   std::cout<<"type casting "<<*((int*)ptr2+1)<<"\n";
   std::cout<<"type casting "<<*((float*)ptr2+2)<<"\n";
   std::cout<<"type casting "<<*((char*)ptr2+12)<<"\n";
   std::cout<<"type casting "<<*((char*)ptr2+13)<<"\n";
   std::cout<<"type casting "<<*((double*)ptr2+2)<<"\n\n";


   //sizeof


   std::cout<<"dimesion de la estructura "<<sizeof(varstruct1)<<"\n";
   /*compilacion realizada en gdb online, en este caso la variable double de la estructura tiene un
      tamaC1o de 8 bytes por lo que los espacios son de 8 bytes, la variable int y char, gastan 5 bytes
      de los 8; por lo que se pasa al siguiente bloque de 8 bytes, gastada por la variable de tipo
      float y char, en este gastando un total de 5 bytes, la variable double como mencionamos antes
      se gasta los 8 bytes del bloque siguiente de memoria y en el ultimo bloque de 8 solo se gastan
      4 bytes por la variable int. Generando 4 bloques de 8 bytes por lo tanto 8 * 4 = 32 bytes */

   std::cout<<"dimesion de la estructura "<<sizeof(varstruct2)<<"\n";
   /*el compilador en este caso optimiza el uso del espacio en memoria, por lo que cada variable
    tiene un valor de 4 bytes menos las variables tipo char que ocupan un byte, sereparten de la
    siguiente forma. Las 2 variables enteras ocupan el primer bloque de 8 bytes, luego la variable
    tipo float y las dos tipo char ocupan 6 bytes de memoria por lo que se pasa al siguiente
    bloque, luego se ocupan 4 bytes del bloque. los bloques son de 8 por lo que 8 * 3 = 24 */


// llamar funcion foo funtion

   foo_funtion();
   foo_funtion();
   foo_funtion();
   foo_funtion();
   Init_Fifo();

       pasar = 1;
       Escribe_Fifo();
       pasar = 2;
       Escribe_Fifo();
       pasar = 3;
       Escribe_Fifo();
       pasar = 4;
       Escribe_Fifo();
       pasar = 5;
       Escribe_Fifo();
       pasar = 6;
       Escribe_Fifo();
       pasar = 7;
       Escribe_Fifo();
       pasar = 8;
       Escribe_Fifo();
       pasar = 9;
       Escribe_Fifo();
       pasar = 10;
       Escribe_Fifo();
       pasar = 11;
       Escribe_Fifo();
       Lee_Fifo();
       std::cout<<"Dato leido: "<<guardar<<std::endl;
       pasar = 12;
       Escribe_Fifo();
       Lee_Fifo();
       std::cout<<"Dato leido: "<<guardar<<std::endl;
       pasar = 13;
       Escribe_Fifo();
       pasar = 14;
       Escribe_Fifo();
       pasar = 15;
       Escribe_Fifo();
       pasar = 16;
       Escribe_Fifo();
       pasar = 17;
       Escribe_Fifo();
       Lee_Fifo();
       std::cout<<"Dato leido: "<<guardar<<std::endl;
       pasar = 18;
       Escribe_Fifo();
       pasar = 19;
       Escribe_Fifo();
       pasar = 20;
       Escribe_Fifo();
       pasar = 21;
       Escribe_Fifo();
       pasar = 22;
       Escribe_Fifo();



    return 0;
}

void foo_funtion(void)
{
    int arreglo[4]={2,4,6,8};
    int *ptr3;
    ptr3 = arreglo;
    std::cout<< "puntero vector "<<*(ptr3+i)<< std::endl;
    i= i+1;

    if(i>=4){
    i=0;
    }

}



void Init_Fifo(void)
{
    ptrR=&FIFO[0];
    ptrW=&FIFO[0];

}




void Escribe_Fifo(void)
{
    if (ptrW+1==ptrR  || ptrW-ptrR== size-1){
                std::cout << "La FIFO esta FULL " << std::endl;
    }

      else
    {
        *ptrW=pasar;
    }
      if (ptrW==&FIFO[size-1])
      {
                 ptrW=&FIFO[0];
      }
      else
      {
          ptrW++;
          std::cout << "escritura OK" << std::endl;
      }


}

void Lee_Fifo (void)
{
    if (ptrW == ptrR)
    {
        std::cout << "La FIFO esta vacia" << std::endl;
    }

  else
    {

        guardar=*ptrR;

        if (ptrR==&FIFO[size-1])
        {
             ptrR=&FIFO[0];
        }

        else
         {
            ptrR++;
            std::cout << "Lectura OK " << std::endl;
        }
    }

  }






