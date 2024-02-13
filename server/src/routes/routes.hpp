#pragma once
#include "core.hpp"

namespace msg
{
    void initRegRoutes(httplib::Server& server, const std::string& route = "/register");
}
