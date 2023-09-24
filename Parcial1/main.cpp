#include <iostream>


using namespace std;
void publik();

int main()
{
    //patron x

    string patron[8];
    for(int fila=0; fila<8; fila++){
        string tempo;
        for(int columna=0; columna<8;columna++){
            if((fila==columna) || (fila==7-columna)){
                tempo+="1";
            }else{
                tempo+="0";
            }
        }
        patron[fila]=tempo;
        cout<<tempo<<endl;
    }

    //Patron flecha
    string flecha[8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 4; ++j) {
            string temp;

        }
    }

}

