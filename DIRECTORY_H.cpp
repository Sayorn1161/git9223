#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "Company.h"
#include <vector>
#include <string>

class Directory {
public:
    void addCompany(const Company& company);
    void printAllCompanies() const;
    std::vector<Company> searchByName(const std::string& name) const;
    std::vector<Company> searchByOwner(const std::string& owner) const;
    std::vector<Company> searchByPhone(const std::string& phone) const;
    std::vector<Company> searchByActivity(const std::string& activity) const;
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;

private:
    std::vector<Company> companies;
};

#endif // DIRECTORY_H
