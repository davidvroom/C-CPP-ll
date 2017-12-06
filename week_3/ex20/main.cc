#include "operations/operations.h"

int main()
{
    Operations obj;

    obj += obj;
    Operations{} += obj;
    Operations obj2 = obj + obj;
    obj2 = Operations{} + obj;

    obj -= obj;
    Operations{} -= obj;
    Operations obj3 = obj - obj2;
    obj3 = Operations{} - obj;
}
