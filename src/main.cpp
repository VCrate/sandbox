#include <iostream>

#include <vcrate/Sandbox/SandBox.hpp>

using namespace vcrate::sandbox;
using namespace vcrate;

int main () {
    SandBox sandbox(1 << 24);
    std::cout << "ok";
}