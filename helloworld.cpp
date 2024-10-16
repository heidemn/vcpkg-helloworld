#include <fmt/core.h>
#include <cstdlib>

int main(int argc, char **argv)
{
    const int n = std::atoi(argv[1] ? argv[1] : "42");
    fmt::print("The answer is {}.\n", n); 
    return 0;
}
