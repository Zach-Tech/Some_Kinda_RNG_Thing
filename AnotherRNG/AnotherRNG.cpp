// AnotherRNG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include <ctime>

int main()
{
    char rep = 'y';
    do
    {
        system("cls");
        double eql;
     /*   double pwr;*/
        srand(time(NULL));
        double randA = (rand() % 465) + 1;
        double randB = (rand() % 290) + 1;
        double randC = (rand() % 2942) + 1;
        double randD = (rand() % 4270) + 1;
        double randE = (rand() % 3206) + 1;
        std::cout << "A: " << randA << "\n";
        std::cout << "B: " << randB << "\n";
        std::cout << "C: " << randC << "\n";
        std::cout << "D: " << randD << "\n";
        std::cout << "E: " << randE << "\n";
        eql = (randA + randB + randC + randD + randE) / 17.6784998;
        /*pwr = pow(randA + randB + randC + randD, 2.0) * (623/10) / 3 ;*/

        std::cout << "Mmmm. RNG\n";
        std::cout << "Total: " << eql;
        std::cout << "\nRepeat: ";
        std::cin >> rep;
    } while (rep == 'y');

    system("pause");
    return 0;
}
        

    

