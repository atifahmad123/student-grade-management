#include<iostream>
#include<string>
using namespace std;

struct student_data {
    string student_name;
    int test_score;
    char grade;  
};

char calculateGrade(int test_score) {
    if (test_score >= 90) {
        return 'A';
    } else if (test_score >= 70) {
        return 'B';
    } else if (test_score >= 50) {
        return 'C';
    } else if (test_score >= 30) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int max_stud;
    cout << "Kindly enter the number of students present in your list." << endl;
    cin >> max_stud;

    student_data std[max_stud];

    for (int i = 0; i < max_stud; i++) {
        cin.ignore();
        cout << "Kindly enter the student name." << endl;
        getline(cin, std[i].student_name);
        cout << "Now enter the student test score." << endl;
        cin >> std[i].test_score;
        std[i].grade = calculateGrade(std[i].test_score);
    }

    cout << "\nS.NO\tStudent_Name\tStudent_Score\tGrade \n" << endl;
    for (int j = 0; j < max_stud; j++) {
        cout << j << "\t" << std[j].student_name << "\t\t" << std[j].test_score << "\t\t" << std[j].grade << "\n";
    }
 
    int high_mark = 0;
    for (int i = 1; i < max_stud; i++) {
        if (std[i].test_score > std[high_mark].test_score) {
            high_mark = i;
        }
    }
    // Display the student with the highest score
    cout << "\nHighest marks are = " << std[high_mark].test_score << endl;
    cout << "Student Name = " << std[high_mark].student_name << endl;
    cout << "Grade = " << std[high_mark].grade << endl;

    return 0;
}
