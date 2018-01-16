
# C++ London University Templates Exercise #

The file `pair.hpp` contains the definition of a class `Pair` which (at the
moment) holds a pair of `int`s. The function `print_pair()` can be used to
print the values that the pair contains.


## Exercise 1 ##

a. Change the definition of `Pair` so that it becomes a *class template*. Rather
   than a pair of `int`s, it should be able to hold any two objects of (possibly)
   different types
   
b. After making this change, note that the `print_pair()` function generates a
    compile error. Fix this error by turning `print_pair()` into a *function
    template*, able to print any kind of generic `Pair`
    
c. In `main.cpp`, test your `Pair` and `print_pair()` implementations by 
     creating a `Pair` of `int`s, `Pair` of doubles, and a `Pair` containing a 
    `std::string` and an `int` and making sure that they all print correctly.
    
## Exercise 2 ##

a. At the moment, all the member functions of `Pair` are defined inside the class.
   Move the definitions of the constructor and `get` functions so that they are
   declared inside the class, but defined outside (but still in the header)
   
b. Make sure that your `main()` function still compiles correctly and gives the
   expected results
   
   
## Exercise 3 ##

a. Write a *specialisation* of `Pair` for the case where we have two `int`s. Rather
   than storing two members `first` and `second` as in the base template, use a `std::array<int 2>` to
   store the members.
   
b. What changes do you need to make to the `print_pair()` function?

## Exercise 4 ##

a. Write a *partial specialisation* of `Pair` for the case where the two template
   arguments refer to the same type. Again, use a `std::array` for storing the members
   
## Exercise 5 (advanced, C++17) ##

a. Read up on *constructor template argument deduction* in C++17. Add a 
   *deduction guide* and verify that you can construct a `Pair` of 
   arbitrary types without explicitly specifying the arguments.
   
b. Add a `get()` member function (to both the base template and the specialisations)
   which has a *non-type template parameter* named `I` of type `std::size_t`. If
   If `I` is equal to `0`, return the first member; if `I` is equal to `1`, return
   the second member. Otherwise, throw a `std::out_of_range` exception.
   
   (Hint: you may find it useful to use *return type deduction* and `if constexpr`
    to complete this.)
    
c. Read up about *structured bindings* in C++17. Add the necessary specialisations to
   types in namespace `std` to allow `Pair` to be used with structured bindings.