#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main( int argc, char* argv[] ){


	ifstream inStream;
	ofstream outStream;
for(int i=1; i < argc; i++){
    cout  << endl << argv[i];
    fstream f;
    f.open(argv[i]);


    //inStream.open("menu1.txt");
   // inStream.open("menu2.txt");
    string n[10];
    double p[10];


    // ifstream m1("menu1.txt");
   //ifstream m2("menu2.txt");


    string name;
    double var;

    string line;
    istringstream iss(line);

    short loop=0;
    if(f.is_open()){

        while(!f.eof()){
            iss >> name >> var;
            getline(f, line);
            while(f>>name>>var){
                n[loop]=name;
                p[loop]=var;
                cout << endl << "Item at index " << loop << " " << n[loop];
                cout << endl << "Cost at index " << loop << " " << p[loop];
                loop++;
            }

        }
        cout << endl;

    f.close();
    }


}


return 0;
}
