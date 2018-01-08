#include <iostream>
#include <cmath>
int main()
{
    unsigned int n;
    unsigned int result = 0;
    std::cin >> n;
    unsigned int rotate = std::log2(n);
    unsigned int mask = std::pow(2, rotate);
    unsigned int rotate_2 = 0;
    while (mask > 0)
    {
        // extract
        unsigned int temp = (n & mask) >> rotate;
        // write single bit into new place
        temp = temp << rotate_2;
        result = result | temp;
        rotate--;
        rotate_2++;
        mask /= 2;
    }
    std::cout << result << std::endl;
    return 0;
}
