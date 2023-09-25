#include <iostream>


using namespace std;
void publik();
void patron1();
void patron2();
void patron3();
void patron4();

int main()
{
    int tiempoRetardo;
    string patrones[4]={"patron1();","patron2();","patron3();","patron4();"};
    cout<<"Ingresa el tiempo de retardo entre patrones: ";cin>>tiempoRetardo;
    for (int i = 0; i <4; ++i) {
        cout<<patrones[i];
        cout<<endl;
    }

}

void patron1(){
    string rombo[8];
    int p1=3; int p2=4;
    for (int i = 0; i < 8; ++i) {

        string tempo="00000000";
        if(i<4){
            for (int k=p1; k <=p2; ++k) {
                tempo[k]='1';
            }
            rombo[i]=tempo;
            p1-=1; p2+=1;
        }else{
            p1+=1; p2-=1;
            for (int k=p1; k <=p2; ++k) {
                tempo[k]='1';
            }
            rombo[i]=tempo;
        }
        cout<<tempo<<endl;
    }
}

void patron2(){
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

}

void patron3(){
    int contador=0;
    for (int i = 0; i < 8; ++i) {
        string tempo="00000000";
        if((i==2 || i==3) || (i==6 || i==7)){
            for(int n=1; n<8;n++){
                if(contador==2 || contador==5) ;
                else{
                    tempo[n]='1';
                }
                contador++;
            }
        }else{
            for(int n=0; n<8;n++){
                if(contador==2 || contador==5);
                else{
                    tempo[n]='1';
                }
                contador++;
            }
        }
        contador=0;
        cout<<tempo<<endl;
    }

}
void patron4(){
    string flecha[8];
    int p1=0; int p2=3;
    for (int i = 0; i < 8; ++i) {

        string tempo="00000000";
        if(i<4){
            for (int k=p1; k <=p2; ++k) {
                tempo[k]='1';
            }
            flecha[i]=tempo;
            p1+=1; p2+=1;
        }else{
            p1-=1; p2-=1;
            for (int k=p1; k <=p2; ++k) {
                tempo[k]='1';
            }
            flecha[i]=tempo;
        }
    }
}
