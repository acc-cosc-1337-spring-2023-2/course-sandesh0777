//add include statements
#include "func.h"
#include <iostream>
using std::string; using std::cout;
//add function code here
double get_gc_content(const std::string& dna)
{
    int gc_count = 0;
    for(char c : dna)
    {
        if(c == 'C' || c == 'G')
        {
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.size();
}

std::string get_reverse_string(std::string dna)
{
    for(int i = 0, j = dna.size() - 1; i < j; i++, j--)
    {
        std::swap(dna[i], dna[j]);
    }
    return dna;
}

std::string get_dna_complement(std::string dna)
{
    for(char& c : dna)
    {
        switch(c)
        {
            case 'A':
                c = 'T';
                break;
            case 'T':
                c = 'A';
                break;
            case 'C':
                c = 'G';
                break;
            case 'G':
                c = 'C';
                break;
        }
    }
    return get_reverse_string(dna);
}
