#pragma once


#include <iostream>
#include <cstdint>
#include <string_view>


namespace ws::structure {
    struct Position {
        using size_type = std::uint32_t;


        size_type line = 1, column = 1;

        void nextln(size_type n = 1) {
            column = 1;
            line += n;
        }

        void next(size_type n = 1) {
            column += n;
        }
    };


    inline std::ostream& operator<<(std::ostream& os, const Position& tok) {
        const auto& [line, column] = tok;

        os << "(" << line << ", " << column << ")";

        return os;
    }
}
