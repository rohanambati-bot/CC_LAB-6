#include <iostream>
#include <string>

int main() {
    std::cout << "HTTP/1.1 200 OK\r\n";
    std::cout << "Content-Type: text/plain\r\n";
    std::cout << "\r\n";
    std::cout << "Served by backend container" << std::endl;
    return 0;
}