#include <cstdlib>
#include <ctime>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::srand(std::time(0)); // gunakan waktu saat ini sebagai seed untuk generator acak
    std::cout << "Random value on [0, " << RAND_MAX << "]: " << std::rand() << '\n';

    _getch();
    return 0;
}