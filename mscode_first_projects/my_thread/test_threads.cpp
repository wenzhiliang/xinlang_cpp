#include<iostream>
#include<thread>
#include<vector>
#include <mutex>
using namespace std;

struct Counter {
    int value;

    Counter() : value(0) {}

    void increment() {
        ++value;
    }

    void decrement() {
        if (value == 0) {
            throw "Value cannot be less than 0";
        }

        --value;
    }
};

struct ConcurrentCounter {
    std::mutex mutex;
    Counter counter;

    void increment() {
        mutex.lock();
        counter.increment();
        mutex.unlock();
    }

    void decrement() {
        mutex.lock();
        try {
            counter.decrement();
        }
        catch (std::string e) {
            mutex.unlock();
            throw e;
        }

        mutex.unlock();
    }
};

int main_004() {
    ConcurrentCounter counter;

    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i) {
        threads.push_back(std::thread([&]() {
            for (int i = 0; i < 100; ++i) {
                counter.increment();
            }
            }));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << counter.counter.value << std::endl;

    return 0;
}


