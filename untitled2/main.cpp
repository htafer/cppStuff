#include <iostream>
#include "Cat.h"

int main() {
    Cat jim;
    jim.setName("Georgina");
    jim.makeHappy();
    Cat gigi = jim;
    
    cout << gigi.getName() << endl;
    cout << jim.getName() << endl;
    cout << jim.toString() << endl;
    jim.speak();

    jim.speak();
    jim.makeSad();
    jim.speak();
    return 0;
}