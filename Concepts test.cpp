#include <iostream>
#include <concepts>

template<typename T>
concept no_int = !std::same_as<T, int>;

void print(no_int auto input) {
    std::cout << input << "\n";
}

int main() {
    print(1.2f);
    // print(12); Will cause an error
}
