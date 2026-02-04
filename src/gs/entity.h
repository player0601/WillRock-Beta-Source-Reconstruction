#pragma once

typedef void* (*EntityFactoryFunc)(); 

int entRegisterClass(
    void* classObj,
    int entityType,
    int someSortOfID,
    EntityFactoryFunc factory,
    char* name,
    int flags
);
