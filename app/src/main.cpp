#include <stdio.h>
#include <iostream>

#include <entre-letras/entreletras.h>

int main(int argc, char **argv)
{

    char letras[2] = {};
    if (argc >= 3)
    {
        for (int i = 1; i < 3; ++i)
        {
            letras[i - 1] = argv[i][0];
        }
    }

    EntreLetras entreLetras;
    int cont = entreLetras.contar(letras[0], letras[1]);

    if (cont >= 0)
    {
        std::cout << "Há " << cont << " entre as letras "
                  << letras[0]
                  << " e "
                  << letras[1] << std::endl;
    }
    else
    {
        std::cout << letras[0]
                  << " e "
                  << letras[1] << "Não está na ordem alfabética"
                  << std::endl;
    }
    return 0;
}