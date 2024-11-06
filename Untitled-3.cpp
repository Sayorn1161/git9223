#include "Directory.h"
#include <iostream>

void showMenu() {
    std::cout << "1. Додати компанію\n"
              << "2. Вивести всі компанії\n"
              << "3. Пошук за назвою\n"
              << "4. Пошук за власником\n"
              << "5. Пошук за телефоном\n"
              << "6. Пошук за родом діяльності\n"
              << "7. Зберегти у файл\n"
              << "8. Завантажити з файлу\n"
              << "9. Вихід\n";
}

void addCompany(Directory& directory) {
    std::string name, owner, phone, address, activity;
    std::cout << "Введіть назву: ";
    std::cin >> name;
    std::cout << "Введіть власника: ";
    std::cin >> owner;
    std::cout << "Введіть телефон: ";
    std::cin >> phone;
    std::cout << "Введіть адресу: ";
    std::cin >> address;
    std::cout << "Введіть рід діяльності: ";
    std::cin >> activity;
    directory.addCompany(Company(name, owner, phone, address, activity));
}

void searchAndPrint(const std::vector<Company>& results) {
    for (const auto& company : results) {
        company.print();
        std::cout << "---------------------------" << std