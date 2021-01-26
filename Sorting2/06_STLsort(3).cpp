#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int score;

    Student(string name, int score) {
        this->name = name;
        this->score = score;
    };

    bool operator < (Student &student) {
        return this->score < student.score;
    }
};

int main()
{
    Student students[] = {
        Student("박충남", 99),
        Student("조천역", 95),
        Student("인심덕", 93),
        Student("임오이", 88),
        Student("김미역", 90)
    };
    sort(students, students+5);
    for(int i = 0; i < 5; i++) {
        cout << students[i].name << " ";
    }
    cout << "\n";
    return 0;
}