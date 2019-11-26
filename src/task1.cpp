#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned long num = 1;
    for (unsigned long i = min; i <= max; i++)
        num = num / std::__gcd(num, i) * i;

    return num;
}
