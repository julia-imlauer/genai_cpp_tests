#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include "Database.h"
#include <string>

class UserManager {
public:
    UserManager(Database* db);
    bool RegisterUser(const std::string& username, const std::string& email);
    std::optional<std::string> RetrieveUser(const std::string& username);
    bool ModifyUserEmail(const std::string& username, const std::string& newEmail);
    bool RemoveUser(const std::string& username);

private:
    Database* database;
};

#endif // USER_MANAGER_H
