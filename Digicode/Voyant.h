#ifndef VOYANT_H
#define VOYANT_H
#include <string>

namespace nsDigicode{

   class Voyant{
       public:
       enum Couleur{vert,rouge};
       enum Etat{allume,eteint};
       std::string getStatut(Etat & A);

       Voyant(Couleur couleur, Etat etat);
       void allumer();
       void eteindre();

       std::string getStatut();
   private:
       Etat myEtat;
       Couleur myCouleur;

   };

}
#endif // VOYANT_H
