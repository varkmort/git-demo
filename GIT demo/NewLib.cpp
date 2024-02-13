#include "NewLib.h"

int F00()
{
    static int i{1};
    return i++;
}

bool F01(int a)
{
    return !(a%2);
}
