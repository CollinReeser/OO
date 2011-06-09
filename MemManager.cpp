

MemoryManager::MemoryManager()
{
    // Initially set room for one scope, which will be the main scope
    scopeList = (Scope*)malloc( sizeof(Scope) );
    numOfScopeEntries = 1;
    scopeListSize = sizeof(Scope);
}

bool MemoryManager::createScope()
{
    if ()
}