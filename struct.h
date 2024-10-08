#ifndef TESTS_STRUCT_H  
#define TESTS_STRUCT_H  
  

  struct s_char 
  {
    char* name;
    int strenght;
    int dexterity;
    int intelligence;
    int agility;
    int endurance;
    int wisdom;
    int faith;
    int vigor;
  };
  typedef struct s_char character;
  #endif