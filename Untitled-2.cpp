#include "Directory.h"
#include <fstream>
#include <iostream>

void Directory::addCompany(const Company& company) {
    companies.push_back(company);
}

void Directory::printAllCompanies() const {
    for (const auto& company : companies) {
        company.print();
        std::cout << "---------------------------" << std::endl;
    }
}

std::vector<Company> Directory::searchByName(const std::string& name) const {
    std::vector<Company> result;
    for (const auto& company : companies) {
        if (company.getName() == name) {
            result.push_back(company);
        }
    }
    return result;
}

std::vector<Company> Directory::searchByOwner(const std::string& owner) const {
    std::vector<Company> result;
    for (const auto& company : companies) {
        if (company.getOwner() == owner) {
            result.push_back(company);
        }
    }
    return result;
}

std::vector<Company> Directory::searchByPhone(const std::string& phone) const {
    std::vector<Company> result;
    for (const auto& company : companies) {
        if (company.getPhone() == phone) {
            result.push_back(company);
        }
    }
    return result;
}

std::vector<Company> Directory::searchByActivity(const std::string& activity) const {
    std::vector<Company> result;
    for (const auto& company : companies) {
        if (company.getActivity() == activity) {
            result.push_back(company);
        }
    }
    return result;
}

void Directory::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        companies.clear();
        std::string name, owner, phone, address, activity;
        while (file >> name >> owner >> phone >> address >> activity) {
            companies.emplace_back(name, owner, phone, address, activity);
        }
    }
}

void Directory::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& company : companies) {
            file << company.getName() << " "
                 << company.getOwner() << " "
                 << company.getPhone() << " "
                 << company.getAddress() << " "
                 << company.getActivity() << "\n";
        }
    }
}
