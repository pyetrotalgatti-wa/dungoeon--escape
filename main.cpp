#include <iostream>
#include "personagem.h"

int main() {
  Personagem heroi("Herói", 100, 10);
  heroi.apresentar(); 
  
  Inimigo godlin("Goblin",  30,  5, "Goblin");
  Goblin.apresentar();
  
  return 0;
  
}
