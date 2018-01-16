
#ifndef PAIR_HPP_INCLUDED
#define PAIR_HPP_INCLUDED

#include <iostream>

class Pair {
public:
    Pair(const int& t, const int& u)
        : first(t), second(u)
    {}

    int& get_first() { return first; }
    int& get_second() { return second; }

    const int& get_first() const { return first; }
    const int& get_second() const { return second; }

private:
    int first;
    int second;
};

void print_pair(const Pair& p)
{
    std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}


#endif


