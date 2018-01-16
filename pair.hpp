
#ifndef PAIR_HPP_INCLUDED
#define PAIR_HPP_INCLUDED

#include <iostream>

template <typename T, typename U>
class Pair {
public:
    Pair(const T& t, const U& u)
        : first(t), second(u)
    {}

    T& get_first() { return first; }
    U& get_second() { return second; }

    const T& get_first() const { return first; }
    const U& get_second() const { return second; }

private:
    T first;
    U second;
};

template <typename T, typename U>
void print_pair(const Pair<T, U>& p)
{
    std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}


#endif


