#include "Company.h"
#include <iostream>

Company::Company(const std::string& name, const std::string& owner, const std::string& phone, const std::string& address, const std::string& activity)
    : name(name), owner(owner), phone(phone), address(address), activity(activity) {}

std::string Company::getName() const {
    return name;
}

std::string Company::getOwner() const {
    return owner;
}

std::string Company::getPhone() const {
    return phone;
}

std::string Company::getAddress() const {
    return address;
}

std::string Company::getActivity() const {
    return activity;
}

void Company::print() const {
    std::cout << "Name: " << name << "\n"
              << "Owner: " << owner << "\n"
              << "Phone: " << phone << "\n"
              << "Address: " << address << "\n"
              << "Activity: " << activity << std::endl;
}
