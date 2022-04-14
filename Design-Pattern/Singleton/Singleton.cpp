#include "Singleton.h"

Singleton* Singleton::instance = NULL;
std::mutex Singleton::mMutex;

Singleton* Singleton::getInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mMutex);
    if(NULL == instance)
        instance = new Singleton(value);
    return instance;
}