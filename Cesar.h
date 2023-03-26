#ifndef CESAR_H
#define CESAR_H
#include <iostream>
#include <fstream>
using std::ifstream, std::ofstream, std::string;
namespace cifra{
    class Cesar{
        public:
            void encripte(string in, string out, int k);
    };
}

#endif