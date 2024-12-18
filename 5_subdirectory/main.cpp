#include <iostream>

#include "answer/answer.hpp"

int main(int argc, char *argv[]) {
    int expected_answer = answer::find_the_ultimate_answer();

    for (;;) {
        std::cout << "What is the ultimate answer? " << std::endl;
        int answer;
        std::cin >> answer;
        if (answer == expected_answer) {
            std::cout << "Correct!" << std::endl;
            break;
        }
    }

    return 0;
}