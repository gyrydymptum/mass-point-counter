#pragma once
#include <string>
class MPC {
public:
    MPC(const std::string& srv_address, const std::string& port, const std::string& db_name, const std::string& user, const std::string& password)
        : srv_address_(srv_address)
        , port_(port)
        , db_name_(db_name)
        , user_(user)
        , password_(password)
    { std::cout << "MPC C-tor\n";}

private:
    const std::string srv_address_;
    const std::string port_;
    const std::string db_name_;
    const std::string user_;
    const std::string password_;
    bool connection_;
};