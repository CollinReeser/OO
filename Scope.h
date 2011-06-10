#ifndef SCOPE
#define SCOPE

class Scope
{
    // This is malloc-ated to account for all the variables that will be
    // declared in this scope
    void* data;
    // This declares the scope level of the current scope. 0 will be the main
    // scope, incremented by 1 for each scope away from the main scope we delve
    int scopeLevel;
    // Constructor for a scope
    Scope();
};

#endif