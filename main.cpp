#include <iostream>
#include <string>
#include <windows.h>
#include "functions.h"
#include <ctype.h>

namespace dt
{
    void Register(std::string &word)
    {
        int chislo;
        for (int i=0;i<word.length();i++)
        {
            chislo = (unsigned char)word[i];
            if((chislo>=224 && chislo<=255) || (chislo>=97 && chislo<=122))
                word[i]= (char)(chislo-32);
            else
                word[i]=tolower(word[i]);
        }
    }
}


int main()
{
    setlocale(LC_ALL,"Rus");
    SetConsoleCP(1251);
    std::string word;
    Read(word);
    dt::Register(word);
    Write(word);
    return 0;
}
