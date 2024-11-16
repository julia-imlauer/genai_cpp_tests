#include "UserManager.h"

UserManager::UserManager(Database* db) : database(db) {}

bool UserManager::RegisterUser(const std::string& username, const std::string& email) {
    return database->AddUser(username, email);
}

std::optional<std::string> UserManager::RetrieveUser(const std::string& username) {
    return database->GetUserEmail(username);
}

bool UserManager::ModifyUserEmail(const std::string& username, const std::string& newEmail) {
    return database->UpdateUserEmail(username, newEmail);
}

bool UserManager::RemoveUser(const std::string& username) {
    return database->DeleteUser(username);
}
