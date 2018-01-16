
#ifndef PAIR_HPP_INCLUDED
#define PAIR_HPP_INCLUDED

#include <iostream>

template <typename T, typename U>
class Pair {
public:
    Pair(const T& t, const U& u);

    T& get_first();
    U& get_second();

    const T& get_first() const;
    const U& get_second() const;

private:
    T first;
    U second;
};

template <typename T, typename U>
Pair<T, U>::Pair(const T& t, const U& u)
    : first(t), second(u)
{}

template <typename T, typename U>
T& Pair<T, U>::get_first()
{
    return first;
};

template <typename T, typename U>
U& Pair<T, U>::get_second()
{
    return second;
};

template <typename T, typename U>
const T& Pair<T, U>::get_first() const
{
    return first;
};

template <typename T, typename U>
const U& Pair<T, U>::get_second() const
{
    return second;
};

template <typename T, typename U>
void print_pair(const Pair<T, U>& p)
{
    std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}


#endif


