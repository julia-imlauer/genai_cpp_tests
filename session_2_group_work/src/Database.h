#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <unordered_map>
#include <optional>

class Database {
public:
    virtual ~Database() = default;

    // Adds a user to the database
    virtual bool AddUser(const std::string& username, const std::string& email) = 0;

    // Retrieves a user's email by username
    virtual std::optional<std::string> GetUserEmail(const std::string& username) = 0;

    // Updates a user's email
    virtual bool UpdateUserEmail(const std::string& username, const std::string& newEmail) = 0;

    // Deletes a user from the database
    virtual bool DeleteUser(const std::string& username) = 0;
};

#endif // DATABASE_H
