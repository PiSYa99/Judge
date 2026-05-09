#include <runner/ProcessRunner.h>

#include <iostream>

int main()
{
    std::wstring command = L"cmd.exe /C \"echo Hello world! > in.txt\"";

    ProcessRunner runner;
    
    auto result = runner.run_command(command);

    std::cout << result.exitCode;
    std::cin.get();

    return 0;
}