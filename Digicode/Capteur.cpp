#include "Capteur.h"
#include "kbhit.h"

using namespace std;

int nsDigicode::Capteur::detecter(){

        return _kbhit();
}
