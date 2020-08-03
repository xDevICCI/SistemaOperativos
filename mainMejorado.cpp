#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main( int argc, char* argv[]){


	//ifstream inStream;
	//ofstream outStream;

	//VARIABLES QUE ME PERMITIRAN CREAR ARCHIVO EN RUTA DESEADA
        /*FILE* orginalFile = fopen(argv[1], "r");
    	FILE* newFile = fopen(argv[2], "w");

    	if (orginalFile == NULL || newFile == NULL) {
      		printf("Cannot open file");
    	}*/

	FILE* filein = stdin;
    	FILE* fileout = stdout;

	int n=0;
	int p=0;

	if(argc > 1){
		n = argv[1];
	}
	if(argc > 2){
		p = argv[2];
	}
    	if(argc > 3) {
        	filein = fopen(argv[3], "r");
    	}
    	if(argc > 4) {
        	fileout = fopen(argv[4], "w");
    	}

	string linea;
	ifstream inputfile;
	inputfile.open("texto_sugerido.txt");

	//VARIABLES DE EJEMPLOS PARA PROBAR Y BUSCAR INSTRUCCION ES
	char* search = "ES";
	int offset;

	unsigned int posicionLinea=0;
	//FINAL COMENTARIO
	string s;
	ifstream in(argv[2]); 

	while (!inputfile.eof() &&  getline(inputfile,linea,'#')) 
     	{
     		//cout << linea;
		posicionLinea++;
		getline(inputfile,linea);
		if( (offset = linea.find(search,0)) != string::npos  )
		{
			cout << "encontrado: " << search << endl;
		}
		

     	}// End While


	inputfile.close();


	return 0;
}
