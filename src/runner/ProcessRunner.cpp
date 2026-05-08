#include <runner/ProcesRunner.h>

#include <windows.h>

ProcessResult ProcessRunner::run_command
(const std::wstring& command)
{
    STARTUPINFOW start_info{};
    PROCESS_INFORMATION process_info{};

    start_info.cb = sizeof(start_info);

    std::wstring cmd = command;

    bool success = CreateProcessW(
        nullptr,
        cmd.data(),
        nullptr,
        nullptr,
        false,
        0,
        nullptr,
        nullptr,
        &start_info,
        &process_info
    );

    ProcessResult result;

    if (!success)
    {
        result.exitCode = -1;
        return result;
    }

    WaitForSingleObject(process_info.hProcess, INFINITE);

    DWORD exitCode;
    GetExitCodeProcess(process_info.hProcess, &exitCode);

    result.exitCode = static_cast<int>(exitCode);

    CloseHandle(process_info.hProcess);
    CloseHandle(process_info.hThread);

    return result;
}