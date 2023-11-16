#include <iostream>
#include <fstream>

int main() {
    for (int i = 1; i <= 9; ++i) {
        std::ofstream file("file" + std::to_string(i) + ".txt");
        if (file.is_open()) {
            file << "bob";
            file.close();
            std::cout << "Created file" << i << ".txt" << std::endl;
        } else {
            std::cerr << "Unable to create file" << i << ".txt" << std::endl;
        }
    }

    return 0;
}
