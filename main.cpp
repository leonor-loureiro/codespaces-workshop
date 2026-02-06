#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Welcome to the Workshop CLI App!\n";
    std::cout << "\nInstructions:\n";
    std::cout << "1. Fork this repository on GitHub.\n";
    std::cout << "2. Add a new command or option to this app.\n";
    std::cout << "3. Submit a pull request with your changes.\n";
    std::cout << "\nUsage: ./app [command]\n";
    std::cout << "\nAvailable commands:\n";
    std::cout << "  help   - Show this help message\n";
    // Students will add more commands here

    if (argc > 1) {
        std::string cmd = argv[1];
        if (cmd == "help") {
            std::cout << "This is the help command.\n";
        } else {
            std::cout << "Unknown command: " << cmd << "\n";
        }
    }
    return 0;
}
