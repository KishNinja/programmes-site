#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string name;
    int age;
    std::string major;

    Student(const std::string& name, int age, const std::string& major)
        : name(name), age(age), major(major) {}
};

void addStudent(std::vector<Student>& students, const std::string& name, int age, const std::string& major) {
    students.emplace_back(name, age, major);
}

void printStudents(const std::vector<Student>& students) {
    std::cout << "Список студентов:\n";
    for (const auto& student : students) {
        std::cout << "Имя: " << student.name << ", Возраст: " << student.age << ", Специальность: " << student.major << '\n';
    }
}

void findStudent(const std::vector<Student>& students, const std::string& name) {
    for (const auto& student : students) {
        if (student.name == name) {
            std::cout << "Студент найден: Имя: " << student.name << ", Возраст: " << student.age << ", Специальность: " << student.major << '\n';
            return;
        }
    }
    std::cout << "Студент с именем " << name << " не найден.\n";
}

int main() {
    std::vector<Student> students;
    
    addStudent(students, "Иван Иванов", 20, "Информатика");
    addStudent(students, "Мария Смирнова", 21, "Математика");
    addStudent(students, "Алексей Петров", 19, "Физика");

    printStudents(students);

    std::string nameToFind;
    std::cout << "\nВведите имя студента для поиска: ";
    std::getline(std::cin, nameToFind);
    findStudent(students, nameToFind);

    return 0;
}