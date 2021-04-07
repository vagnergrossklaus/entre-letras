#include <entre-letras/entreletras.h>

EntreLetras::EntreLetras() {}

EntreLetras::~EntreLetras() {}

int EntreLetras::contar(const char primeira, const char segunda) const
{

    if (primeira > segunda)
    {
        return -1;
    }

    return segunda - primeira - (segunda == primeira ? 0 : 1);
}