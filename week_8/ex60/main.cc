#include <iostream>
#include <algorithm>
#include <future>

using namespace std;

void quickSort(int *beg, int *end)
{
    if (end - beg <= 1)
        return;
    
    int lhs = *beg;
    int *mid = partition(beg + 1, end, 
        [&](int arg)
        {
            return arg < lhs;
        }
    );
    
    swap(*beg, *(mid - 1));

    async(launch::async, quickSort, beg, mid);
    async(launch::async, quickSort, mid, end);
}

int main()
{
    int ia[] = {16, 2, 77, 40, 12071, 12, 3134, 42, 5, 2453, 45, 3456, 35, 6, 56, 546, 2};
    size_t iaSize = 17; 

    quickSort(ia, ia + iaSize);
    
    for (int el: ia)
        cout << el << '\n';
}