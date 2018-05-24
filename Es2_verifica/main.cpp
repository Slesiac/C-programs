#include <iostream>

using namespace std;
/*Inserire 5 numeri da 0 a 10.
Se un numero è maggiore di 10 o minore di zero, richiedere un nuovo numero.
Fare poi una funzione (dispari) che restituisce 1 se il numero che hai inserito
è dispari e 0 se è pari. Fare infine la somma dei numeri pari e la media
di quelli dispari.*/

void saluta ()
{
  cout << "Ciao, io sono una funzione che saluta" << endl;
}

int insnum ()
{ int num;

  cout << "Inserisci un numero da 0 a 10: ";
  cin >> num;

  while(num<0 || num>10)
  {
        cout << "Hai appena inserito un numero senza rispettare le regole! Inseriscine un altro: ";
        cin >> num;
  }
  return num;
}

int dispari(int num)
{
  if(num%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }

}


int main()
{   int v[5] , i , sum=0 , sum2=0 , cont=0;
    float media=0;

    saluta();
    saluta();
    saluta();


    for(i=0;i<5;i++)
    {
      v[i]=insnum();
      if(dispari(v[i])==0)
      {
        sum=sum+v[i];
      }
      else
      {
        sum2=sum2+v[i];
        cont++;
      }
    }

    media = 1.0*sum2/cont;

    cout << "La somma dei numeri pari e': " << sum << endl;
    cout << "La media dei numeri dispari e': " << media << endl;


    return 0;
}
