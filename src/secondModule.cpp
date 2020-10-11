#include <module/secondModule.hpp>

int MySecondModule::foo(int i)
{
    boo();
    return i * 2;
}

void MySecondModule::boo() const
{
}
