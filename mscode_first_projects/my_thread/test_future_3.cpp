#include <thread>
#include <future>
#include <iostream>
#include <chrono>

using namespace std;

int main003() {
    auto future = async(std::launch::async, []() {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        return 42;
        });

    future.wait();
    future.wait();
    future.wait();

    cout << future.get() << std::endl;

    return 0;
}