#include "haskell.h"

void loop()
{
    using namespace std::chrono_literals;
    while(true)
    {
        std::cout << "Hello, C++!" << std::endl;
        std::this_thread::sleep_for(5s);
    }
}
extern "C" __declspec(dllexport) void __cdecl run()
{
    std::thread(loop).detach();
}