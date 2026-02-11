#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A("slugma",100, 4);
    monster B("KAKA");
    monster c("KAAKAA",2,2);
    monster *p;
    p=&c;
    p -> display();
}
