#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

#include <cstdlib>
    


class Pet {
    public:
    char type;

    Pet(char petType);
    
    //member functions
    void feed();
    void wash();
    void sleep();

    char getType() const;
};