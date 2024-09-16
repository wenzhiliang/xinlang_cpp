#include <thread>
#include <future>
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int main002() {
    vector<std::future<size_t>> futures;

    for (size_t i = 0; i < 10; ++i) {
        futures.emplace_back(async(launch::async, [](size_t param) {
            this_thread::sleep_for(std::chrono::seconds(param));
            return param;
            }, i));
    }

    std::cout << "Start querying" << std::endl;

    for (auto& future : futures) {
        std::cout << future.get() << std::endl;
    }

    return 0;
}