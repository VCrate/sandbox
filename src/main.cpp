#include <iostream>

#include <vcrate/Sandbox/SandBox.hpp>

using namespace vcrate::interpreter;
using namespace vcrate;

int main () {
    SandBox sandbox(1 << 24);
    std::cout << "ok";
}