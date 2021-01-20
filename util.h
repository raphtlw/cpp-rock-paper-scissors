#ifndef UTIL_H
#define UTIL_H

#include <sstream>
#include <stdlib.h>
#include <vector>
#include <numeric>

namespace util
{
    template <typename T>
    std::string join(const T &v, const std::string &delim)
    {
        std::ostringstream s;
        for (const auto &i : v)
        {
            if (&i != &v[0])
            {
                s << delim;
            }
            s << i;
        }
        return s.str();
    }
} // namespace util

#endif