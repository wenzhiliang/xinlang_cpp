#include <thread>
#include <future>
#include <iostream>

int main001() {
    auto future = std::async(std::launch::async, []() {
        std::cout << "I'm a thread" << std::endl;
        });

    future.get();

    return 0;
}