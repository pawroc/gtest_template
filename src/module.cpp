#include <module/module.hpp>

template <class SecondModule>
int MyModule<SecondModule>::pubFoo(int i, int j)
{
    return privFoo(i) * privBoo(j) + m.foo(i);
}

template <class SecondModule>
int MyModule<SecondModule>::privFoo(int i)
{
    return i + 1;
}

template <class SecondModule>
int MyModule<SecondModule>::privBoo(int i)
{
    return i + 2;
}
