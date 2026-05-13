#include <compiler/Compiler.h>

#include <runner/ProcessRunner.h>


int Compiler::compile(std::wstring &program)
{
    std::wstring command;

    command = L"g++ -O2 " + program + L".cpp -o " + program;

    ProcessRunner runner;

    auto result = runner.run_command(command);

    Compiler::exit_code = result.exitCode;

    return exit_code;
}
