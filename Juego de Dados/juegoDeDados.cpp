#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string arrojar;

int main()
{
    while (true)
    {
        cout << " ***JUEGO DE DADOS*** GANAS CON 4 , 6 , 8 Y PERDES CON: 2 y 12 " << endl;
        cout<<" !PRESIONA UNA TECLA AL AZAR Y DETERMINA TU SUERTE!: " << endl;
        cin >> arrojar;
        
        system ("cls");
        for (int i= 0; i<= 1; i++)
        {
            srand (time (0));
            dado1 = rand()%(6)+1;
            dado2 = rand()%(6)+1; 
        }
        
        cout << " Dado # 1 = " << dado1 <<endl;
        cout << " Dado # 2 = " << dado2 <<endl;
        cout << " SUMASTE!: [" << dado1 + dado2 << "]" <<endl;
        
		if ( dado1 + dado2 == 4 or dado1 + dado2 == 6 or dado1 + dado2 == 8 )
        {
            cout << " \n *** ERES EL GANADOR! *** " <<endl;
            break;
        }
        if ( dado1 + dado2 == 2 or dado1 + dado2 == 12 )
        {
            cout << " \n*** PERDISTE... LA CASA GANA! *** " <<endl;
            break;
        }
        cout<< " \n Vuelve a lanzar " <<endl;
        system( "pause" );
        system ("cls");
    }   
}
