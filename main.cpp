#include <iostream>

#include "pair.hpp"

#include <string>

int main()
{
    {
        Pair<int, int> p(2, 3);
        print_pair(p);
    }

    {
        Pair<double, double> p(2.71, 3.14);
        print_pair(p);
    }

    {
        Pair<std::string, int> p("Hello world", 42);
        print_pair(p);
    }
}