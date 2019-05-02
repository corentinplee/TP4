#include "Clavier.h"
#include "kbhit.h"

using namespace std;

int nsDigicode::Clavier::SaisirChiffre(){
    int kb= _kbhit();
    if(kb == 0)
        return -1;
    else
        return kb - '0';
}
