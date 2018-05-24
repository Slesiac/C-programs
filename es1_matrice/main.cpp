#include <iostream>

using namespace std;
/*Caricare un ARRAY bidimensionale (3,4) per colonna.
Ordinare la riga con indice 1 e visualizzarla.*/

int main()
{  int v[3][4] , r , c , app , interr;

    for(c=0;c<4;c++)
    {
        for(r=0;r<3;r++)
        {
            cout << "Inserisci ilnumero della riga " << r+1 << " e della colonna " << c+1 << " :";
            cin >> v[r][c];
        }
    }

    cout << endl;
    cout << "   MATRICE   " << endl;

    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            cout << " " << v[r][c] << " ";
        }
        cout << endl;
    }


    do
    {
     interr=0;
      for(c=0;c<3;c++)
      {
        if (v[1][c+1]<v[1][c])
        {
          interr=1;
          app=v[1][c+1];
          v[1][c+1]=v[1][c];
          v[1][c]=app;
        }
      }
    }
    while(interr==1);

    cout << endl;
    cout << " RIGA CON INDICE 1 ORDINATA " << endl;
    for(c=0;c<4;c++)
    {
      cout << v[1][c];
    }

    return 0;
}
