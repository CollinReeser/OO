

MemoryManager::MemoryManager()
{
    // Initially set room for one scope, which will be the main scope
    scopeList = (Scope*)malloc( sizeof(Scope) );
    numOfScopeEntries = 1;
    scopeListSize = sizeof(Scope);
}

// Create a new scope
bool MemoryManager::createScope()
{
    // First we need to make sure we have space in the scope list for the new
    // scope
    if ( numOfScopeEntries * sizeof(Scope) == scopeListSize )
    {
        
    }
    else
    {
        
    }
    return false;
}

bool MemoryManager::exitCurrentScope()
{
    return false;
}