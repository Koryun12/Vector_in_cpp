// Example Usage
#include "vector_impl.h"
#include <iostream>

int main() {
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Vector size: " << v.get_size() << std::endl;
    std::cout << "Vector capacity: " << v.get_cap() << std::endl;

    for (size_t i = 0; i < v.get_size(); i++) {
        std::cout << "Element at " << i << ": " << v.at(i) << std::endl;
    }

    v.pop_back();
    std::cout << "After pop_back, size: " << v.get_size() << std::endl;

    return 0;
}

