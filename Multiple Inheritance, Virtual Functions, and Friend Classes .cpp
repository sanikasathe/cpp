#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    string getName() const { return name; }
    int getAge() const { return age; }
};

class Student : public Person {
protected:
    int rollNumber;
    string branch;
    float marks;
    float CGPA;

public:
    Student(string n, int a, int r, string b, float m)
        : Person(n, a), rollNumber(r), branch(b), marks(m) {
        CGPA = marks / 10;
    }

    void display() override {
        cout << "Student Details:" << endl;
        Person::display();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks: " << marks << ", CGPA: " << CGPA << endl;
    }

    string getBranch() const { return branch; }
    float getMarks() const { return marks; }
};

class Faculty : public Person {
protected:
    int facultyID;
    string department;
    float salary;

public:
    Faculty(string n, int a, int fID, string dept, float sal)
        : Person(n, a), facultyID(fID), department(dept), salary(sal) {}

    void display() override {
        cout << "Faculty Details:" << endl;
        Person::display();
        cout << "Faculty ID: " << facultyID << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }

    int getFacultyID() const { return facultyID; }
    string getDepartment() const { return department; }
    float getSalary() const { return salary; }
};

class TeachingAssistant : public Student, public Faculty {
public:
    TeachingAssistant(string n, int a, int r, string b, float m, int fID, string dept, float sal)
        : Student(n, a, r, b, m), Faculty(n, a, fID, dept, sal) {}

    void display() override {
        cout << "Teaching Assistant Details:" << endl;
        Student::display();
        cout << "Faculty ID: " << Faculty::getFacultyID() << endl;
        cout << "Department: " << Faculty::getDepartment() << endl;
        cout << "Salary: " << Faculty::getSalary() << endl;
    }
};

class Administration {
public:
    void displayDetails(const Student& s, const Faculty& f) {
        cout << "Administration Friend Function:" << endl;
        cout << "Student " << s.getName() << " from " << s.getBranch() << " scored " << s.getMarks() << " marks." << endl;
        cout << "Faculty " << f.getName() << " teaches " << f.getDepartment() << "." << endl;
    }
};

int main() {
    string name, branch, department;
    int age, rollNumber, facultyID;
    float marks, salary;

    cout << "Enter Student Details:" << endl;
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age;
    cout << "Roll Number: "; cin >> rollNumber;
    cin.ignore();
    cout << "Branch: "; getline(cin, branch);
    cout << "Marks: "; cin >> marks;
    Student student1(name, age, rollNumber, branch, marks);

    cout << "\nEnter Faculty Details:" << endl;
    cin.ignore();
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age;
    cout << "Faculty ID: "; cin >> facultyID;
    cin.ignore();
    cout << "Department: "; getline(cin, department);
    cout << "Salary: ? "; cin >> salary;
    Faculty faculty1(name, age, facultyID, department, salary);

    cout << "\nEnter Teaching Assistant Details:" << endl;
    cin.ignore();
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age;
    cout << "Roll Number: "; cin >> rollNumber;
    cin.ignore();
    cout << "Branch: "; getline(cin, branch);
    cout << "Marks: "; cin >> marks;
    cout << "Faculty ID: "; cin >> facultyID;
    cin.ignore();
    cout << "Department: "; getline(cin, department);
    cout << "Salary: ? "; cin >> salary;
    TeachingAssistant ta1(name, age, rollNumber, branch, marks, facultyID, department, salary);

    student1.display();
    cout << endl;
    faculty1.display();
    cout << endl;
    ta1.display();
    cout << endl;

    Administration admin;
    admin.displayDetails(student1, faculty1);

    return 0;
}
