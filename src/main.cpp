#include <module/secondModule.hpp>
#include <module/module.hpp>
#include <iostream>

int main()
{
    MyModule<MySecondModule> m;

    std::cout << "m.pubFoo(-1, 100) = " << m.pubFoo(-1, 100) << '\n';
    return 0;
}
