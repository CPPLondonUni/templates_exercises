
#ifndef PAIR_HPP_INCLUDED
#define PAIR_HPP_INCLUDED

#include <array>
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

// Full specialisation for Pair<int, int>

template <>
class Pair<int, int> {
public:
    Pair(int i, int j)
    {
        members[0] = i;
        members[1] = j;
    }

    int& get_first() { return members[0]; }
    int& get_second() { return members[1]; }

    int get_first() const { return members[0]; }
    int get_second() const { return members[1]; }

private:
    std::array<int, 2> members;
};

// Partial specialisation for Pair<T, T>

template <typename T>
class Pair<T, T> {
public:
    Pair(const T& i, const T& j)
    {
        members[0] = i;
        members[1] = j;
    }

    T& get_first() { return members[0]; }
    T& get_second() { return members[1]; }

    const T& get_first() const { return members[0]; }
    const T& get_second() const { return members[1]; }

private:
    std::array<T, 2> members;
};


template <typename T, typename U>
void print_pair(const Pair<T, U>& p)
{
    std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}


#endif


