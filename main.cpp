#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void imprimirMatriz(char[][10],int,int);
void entrada(char[][10],int,int);
void llenarMatriz(char[][10],int,int);
void llenarLaberinto(char[][10],int,int);

int main(int argc,char* argv[]){
	int opcion=0;
	while(opcion != 3){
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;
		cout << endl;
		if(opcion == 1){
			const int columnas=10;
			const int lineas=10;
			char tablero[10][10];
			
			llenarMatriz(tablero,lineas,columnas);
        		imprimirMatriz(tablero,lineas,columnas);
			cout << endl;		
        		llenarLaberinto(tablero,lineas,columnas);

		}
		if(opcion == 2){

		}
	}
	
	
	return 0;


}
void imprimirMatriz(char matriz[][10],int filas,int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}
void llenarMatriz(char matriz[][10],int filas,int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matriz[i][j]= '#';
        }
    }
}

void entrada(char matriz[][10],int filas,int columnas){
	int fila;
	int columna;
	int opcion;
	cout << "Ingrese Fila: " << endl;
        cin >> fila;
        cout << "Ingrese Columna: " << endl;
        cin >> columna;
	for (int i = 0; i < filas; i++){
        	for (int j = 0; j < columnas; j++){
			cout << "0 Pared " << endl;
                        cout << "1 Camino " << endl;
                        cout << "Ingrese Elemento En La Casilla: " << i << j << endl;
			cin >> opcion;
			if(opcion == 0){
				matriz[fila][columna]= '0';
			}
			if(opcion == 2){
				matriz[fila][columna]= '1';
			}
			imprimirMatriz(matriz,filas,columnas);
        	}
    	}
}

void llenarLaberinto(char matriz[][10],int filas,int columnas){
	cout << "Crear Laberinto: " << endl;
        for (int i = 0; i < filas; i++){
                for (int j = 0; j < columnas; j++){
			cout << "0 Pared " << endl;
			cout << "1 Camino " << endl;
                       	cout << "Ingrese Elemento En La Casilla: " << i << j << endl;  
			cin >> matriz[i][j]; 
			imprimirMatriz(matriz,filas,columnas);
                }
        }
}


