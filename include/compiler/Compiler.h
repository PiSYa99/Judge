#pragma once

#include <string>


class Compiler{
    public:
        int exit_code = 0;

        int compile
        (
            std::wstring &program
        );
};