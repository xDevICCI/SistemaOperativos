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

	char* n;
	char* p;

	if(argc > 1){
		n = argv[1];
	}
	if(argc > 2){
		p = argv[2];
	}
    	if(argc > 3) {
        	std::ifstream ifs;
		ifs.open ( argv[3], std::ifstream::in | std::ifstream::app );
		ifs.close();
    	}
    	if(argc > 4) {
        	std::ofstream ofs;
		ofs.open ( argv[4], std::ofstream::out | std::ofstream::app );
		ofs.close();
    	}

	string linea;
	ifstream inputfile;
	inputfile.open("texto_sugerido.txt");

	//VARIABLES DE EJEMPLOS PARA PROBAR Y BUSCAR INSTRUCCION ES
	char* search = "ES 7";
	char* efe = "F";

	int offset;

	unsigned int posicionLinea=0;
	//FINAL COMENTARIO
	string s;
	ifstream in(argv[4]); 

	while (!inputfile.eof() &&  getline(inputfile,linea,'#')) 
     	{
     		//cout << linea;
		posicionLinea++;
		getline(inputfile,linea,'#');
		if( (offset = linea.find(search,0)) != string::npos  )
		{
			cout << "encontrado: " << search << posicionLinea << endl;
			if( (offset = linea.find(efe,0) ) != string::npos ){
				//AQUI DEBE HABER UNA FUNCION O ALGORITMO DE ARCHIVO CREACION DE PROCESOS
				exit(0);
			}
		}

     	}// End While


	inputfile.close();


	return 0;
}
