#include <iostream>
#include <string>
#include "DataVerifier.hpp"

int main() {
    std::cout << "=== DataVerifier<std::string> ===\n";
    DataVerifier<std::string> v("secret123");

    std::cout << v.verify("secret123") << "\n";
    std::cout << v.verify("wrong") << "\n";
    std::cout << v.getHash() << "\n";

    std::cout << "=== DataVerifier<int> ===\n";
    DataVerifier<int> vi(1234);

    std::cout << vi.verify(1234) << "\n";
    std::cout << vi.verify(9999) << "\n";
    std::cout << vi.getHash() << "\n";

    std::cout << "=== DataVerifier<double> ===\n";
    DataVerifier<double> vd(3.14);

    std::cout << vd.verify(3.14) << "\n";
    std::cout << vd.verify(2.71) << "\n";
    std::cout << vd.getHash() << "\n";

    return 0;
}