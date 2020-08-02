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

    if(argc > 1) {
        filein = fopen(argv[1], "r");
    }
    if(argc > 2) {
        fileout = fopen(argv[2], "w");
    }

	string linea;
	ifstream inputfile;
	inputfile.open("texto_sugerido.txt");



	while (!inputfile.eof()) 
     	{
     		getline(inputfile,linea);

     		if (linea.length() == 0 || linea[0] == '#')
     		{
			cout << "IGNORANDO COMENTARIOS\n";}
     		else
     		{
			cout << linea << "\n";
		}

     	}// End While


	inputfile.close();


	return 0;
}
