#pragma once

#include <module/secondModule.hpp>

template <class SecondModule>
class MyModule
{
public:
    int pubFoo(int i, int j);

private:
    int privFoo(int i);
    int privBoo(int i);

#ifndef BUILD_TESTING
private:
#else
public:
#endif
    SecondModule m;
};

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
