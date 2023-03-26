#include "Cesar.h"
#include <cmath>
using namespace cifra;

void Cesar::encripte(string filein, string fileout, int k){
    ifstream in;
    ofstream out;
    in.open(filein);
    out.open(fileout);
    char a;
    while(!in.eof()){
        in.get(a);
        for (int i = 0; i < abs(k); i++){
            if(a>65&&a<90){
                k<0 ? a-- : a++;
            }
            else if(a==65){
                k<0 ? a=90 : a++;
            }
            else if(a==90){
                k<0 ? a-- : a=65;
            }

            if(a>97&&a<122){
                k<0 ? a-- : a++;
            }
            else if(a==97){
                k<0 ? a=122 : a++;
            }
            else if(a==122){
                k<0 ? a-- : a=97;
            }
        }
            out<<a;
    }
}
