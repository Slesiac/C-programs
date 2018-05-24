#include <iostream>

using namespace std;
/*Creare una funzione di tipo int (perimetro1) che dati due lati
restituisce il perimetro di un rettangolo.*/

int perimetro (int a , int b)
{   int perimetro;
    perimetro= 2*(a+b);
    return perimetro;
}

void perimetro2 (int a , int b , int *pperimetro) /* *p è un puntatore, ossia una variabile con un indirizzo di memoria*/
{
    *pperimetro=2*(a+b);
}

int main()
{   int perimetrorett=0 , perimetrorett2=0 ;

    perimetrorett=perimetro(3,2);
    cout << perimetrorett <<endl;

    perimetro2(5,9,&perimetrorett2);
    cout << perimetrorett2;

    return 0;
}
