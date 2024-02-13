#include "routes/routes.hpp"

int main(int argc, char** argv)
{
    httplib::Server server;

    server.set_post_routing_handler([](const auto& req, auto& res) 
    {
        res.set_header("Access-Control-Allow-Origin", "*");
    });

    msg::initRegRoutes(server);

    server.listen("localhost", 5000);

    return 0;
}
