#include <src/runner/ProcessRunner.cpp>

#include <iostream>

int main()
{
    std::wstring command = L"echo in.txt";
    
    auto result = run_command(command);

    std::cout << result.exitCode;

    return 0;
}