#include <conio.h>
#include <thread>

#include "Singleton.h"

void Thread01();
void Thread02();

int main() { system("cls");
    std::thread T01(Thread01);
    std::thread T02(Thread02);

    T01.join();
    T02.join();

    return 0;
}

void Thread01() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    Singleton* threadSingle01 = Singleton::getInstance("Showing Thread 01");
    std::cout << threadSingle01->getValue() << std::endl;
    
    // delete threadSingle01;
}

void Thread02() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    Singleton* threadSingle02 = Singleton::getInstance("Showing thread 02\n");
    std::cout << threadSingle02->getValue() << std::endl;
    
    // delete threadSingle02;
}
