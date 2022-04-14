#include <iostream>
#include <mutex>

class Singleton {
private:
    Singleton() {};
    Singleton(const std::string value)
        :mValue(value) {};

    static Singleton* instance;
    static std::mutex mMutex;

    std::string mValue;

public:
    Singleton(Singleton &other) = delete;               /* Cloneable prevent */
    void operator=(const Singleton &) = delete;         /* Assignable prevent */

    static Singleton* getInstance(const std::string &value);
    std::string getValue() const {return mValue;}

};