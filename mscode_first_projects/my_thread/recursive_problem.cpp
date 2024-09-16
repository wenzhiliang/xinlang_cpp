#include <thread>
#include <mutex>

//»á±¨´í
struct Complex {
    std::mutex mutex;
    int i;

    Complex() : i(0) {}

    void mul(int x) {
        std::lock_guard<std::mutex> lock(mutex);
        i *= x;
    }

    void div(int x) {
        std::lock_guard<std::mutex> lock(mutex);
        i /= x;
    }

    void both(int x, int y) {
        std::lock_guard<std::mutex> lock(mutex);
        mul(x);
        div(y);
    }
};

int main777() {
    Complex complex;
    complex.both(32, 23);

    return 0;
}