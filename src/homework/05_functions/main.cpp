#include <iostream>
#include <string>
#include"func.h"


using std::cin;
using std::cout;
using std::cin;



int main()
{
    int choice;
    std::string dna;

    while(true)
    {
        std::cout << "Menu\n";
        std::cout << "1-Get GC Content\n";
        std::cout << "2-Get DNA Complement\n";
        std::cout << "3-Exit\n";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                std::cout << "Enter DNA sequence: ";
                std::cin >> dna;
                std::cout << "GC Content: " << get_gc_content(dna) << std::endl;
                break;
            case 2:
                std::cout << "Enter DNA sequence: ";
                std::cin >> dna;
                std::cout << "DNA Complement: " << get_dna_complement(dna) << std::endl;
                break;
            case 3:
                return 0;
            default:
                std::cout << "Invalid choice\n";
        }
    }

    return 0;
}
