#ifndef MAIN_H
#define MAIN_H

#include "HelloWorld.h"

class Main 
{
public:
/**
 * @brief Construct a new Main object
 * 
 */
    Main(){}

/**
 * @brief calls the hello object's update method.
 * 
 */
    void update()
    {
        hello_.update();
    }
private:
    HelloWorld hello_;
};

#endif
