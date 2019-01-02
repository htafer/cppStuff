#include <iostream>
#include "Animal.h"





int main() {
    //Creation
    Animal jerry("jerry",32);
    Animal gina=jerry;
    gina.setName("Gina");
    //Alternative Creation
    Animal  *pCat1;
    pCat1 = new Animal();
    (*pCat1).setName("Freddy");
    pCat1->setName("Freddy");
    delete pCat1;
    //Alternaive creation
    Animal *frog = createAnimal();
    delete frog;
    //Multiple creation : Memory allocation;
    Animal *pAnimal = new Animal[10];
    delete [] pAnimal;
    //
    return 0;
}