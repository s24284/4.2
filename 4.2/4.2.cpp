// 4.2.cpp :
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

int main()
{
    int rozmiartablicy, najczestsza, ilewystapien = 0;
    



    std::cout << "Stworze dla ciebie tablice liczb calkowitych. Podaj liczbe elementow, z ktorych ma sie skladac:\n";
    std::cin >> rozmiartablicy;

    std::vector<int> tabliczka(rozmiartablicy);

    for (int i = 0; i < rozmiartablicy; i++)
    {
        std::cout << "Podaj mi " << i + 1 << " liczbe, ktora trafi do tablicy:\n";
        std::cin >> tabliczka[i];

    }
  

    for (int i = 0; i < rozmiartablicy; i++)
    {
        int ilewystapienszukanej = 0;
        int szukanaliczba = tabliczka[i];

        for (int j = 0; j < rozmiartablicy; j++)
        {
            if (tabliczka[j] == szukanaliczba)
            {
                ilewystapienszukanej++;
            }

        }


        if (ilewystapienszukanej > ilewystapien)
        {
            ilewystapien = ilewystapienszukanej;
            najczestsza = szukanaliczba;
        }
       
    }

 std::cout << "Najczesciej powtarza sie " << najczestsza << "\n";

     
   
    return 0;
}

