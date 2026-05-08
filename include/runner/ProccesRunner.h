#pragma once 

#include <string>


struct ProcessResult
{
    int exitCode = -1;
};

class ProcessRunner
{
    public:

        ProcessResult run_command
        (
            const std::wstring& command
        );

};