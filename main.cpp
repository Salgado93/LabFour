#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tablero[10][10];
void imprimirMatriz(char[][10],int,int);

int main(int argc,char* argv[]){
	const int columnas = 10;
	const int lineas = 10;
	char tablero[10][10];

	for(int i=0;i<lineas;i++){
		for(int j=0;j<columnas;j++){
			tablero[i][j]='0';
		}
	}
	imprimirMatriz(tablero,columnas,lineas);
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


