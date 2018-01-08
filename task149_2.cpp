#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
//////////////////////////
int main()
{
    short n;
    std::cin >> n;
    std::vector<int> vec( std::istream_iterator<int>(std::cin), std::istream_iterator<int>() );
    std::copy(vec.rbegin(),vec.rend(), std::ostream_iterator<int>(std::cout," ") );
}
