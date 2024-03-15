#include <iostream> 
#include <stdlib.h> 
#include "clean_function.cpp"
#include <ctime>
#include <string>
  
int main() 
{ 

    std::string petVal = "Henry";

    clean_action(petVal);
    clean_action("Runt");
    clean_action("Michelle");

    clean_action("Josh");
    clean_action("Grgag");
    clean_action("ZZZ");

    return 0; 

}