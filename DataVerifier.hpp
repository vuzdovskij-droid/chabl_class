#pragma once
#include <functional>
#include <cstddef>

template<typename T>
class DataVerifier {
private:
    std::size_t referenceHash;

public:
    explicit DataVerifier(const T& value)
        : referenceHash{std::hash<T>{}(value)} {}

    bool verify(const T& candidate) const {
        return std::hash<T>{}(candidate) == referenceHash;
    }

    std::size_t getHash() const {
        return referenceHash;
    }
};