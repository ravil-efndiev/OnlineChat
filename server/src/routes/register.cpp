#include "routes.hpp"

using namespace httplib;

namespace msg
{
    void initRegRoutes(Server& server, const std::string& route)
    {
        server.Get(route + "/hello", [&](const auto& req, auto& res)
        {
            res.set_content(", World!", "text/plain");
        });
    }
} 
