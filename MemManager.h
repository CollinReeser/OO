
#ifndef MEMORY_MANAGER
#define MEMORY_MANAGER

class MemoryManager
{
public:
    // This is the basic constructor for the memory manager
    MemoryManager();
    // Return bool declaring whether a new scope was successfully created. This
    // adds a scope to the end of the scopeList, allowing for method calls and
    //whatnot to be made
    bool createScope();
    // Returns a bool declaring whether unallocating all elements in the deepest
    // scope was successful while removing the deepest scope
    bool exitCurrentScope();
private:
    // List of scopes used for methods calls and some such
    Scope* scopeList;
    // This describes the number of entries into the scope list we are
    int numOfScopeEntries;
    // This describes the amount of memory allocated for the scopeList
    size_t scopeListSize;
};

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