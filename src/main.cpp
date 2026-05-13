#include <runner/ProcessRunner.h>
#include <compiler/Compiler.h>


#include <iostream>

int main()
{
    std::wstring program = L"brute";
    std::wstring command = L"cmd.exe start brute.exe";

    Compiler compiler;
    ProcessRunner runner;


    int exit_code = compiler.compile(program);

    if (exit_code == 0)
    {
        std::cout << "Success\n";
        ProcessResult result = runner.run_command(command);
        std::cout << result.exitCode;
    }
    else
    {
        std::cout << "Compilation error";
    }

    std::cin.get();

    return 0;
}