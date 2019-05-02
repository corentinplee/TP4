#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    protected:
        bool myAttente;
        int myDelai;
        Chrono* mypChrono;

    public:
        ObjetTempo(Chrono* pchrono, int delai);
        Chrono* getChrono();
        void finTempo();
        int getDelai();
    };
    class InterfacedeSaisie{

    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
