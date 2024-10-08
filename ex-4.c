#include <stdlib.h>
#include <stdio.h>
#include <string.h>  
#include "struct.h"

void fill_struct(character *perso)
{
perso-> wisdom = 35;
perso-> agility = 14;
perso-> strenght = 82;
perso-> dexterity = 25;
perso-> intelligence = 22;
perso-> endurance = 55;
perso-> vigor = 55;
perso-> faith = 20;
}
int main()  
{ 
    character *perso = malloc(sizeof(*perso));  
    perso->name = malloc(strlen("Musashi") * sizeof(char));
    perso->name = strcpy(perso->name, "Musashi");
    fill_struct(perso);  
  
  printf("Your character's name is: %s.  Your character has:  %d vigor  %d agility  %d endurance  %d strenght  %d dexterity  %d intelligence  %d wisdom  %d faith\n", perso->name , perso->vigor, perso->agility, perso->endurance, perso->strenght, perso->dexterity, perso->intelligence, perso->wisdom, perso->faith );

free(perso->name);
free (perso);
exit(0);
}