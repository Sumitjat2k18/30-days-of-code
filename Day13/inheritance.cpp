#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};
// #include "numeric"
// class Student :public Person{
//     private:
//         vector<int> testScores;
//     public:Student(string firstname, string lastname, int id, vector<int> scores) : Person(firstname, lastname, id){
//             testScores = scores;}
// char calculate(){
//                 int avg =accumulate(testScores.begin(), testScores.end(), 0)/testScores.size();

//             switch(avg){
//                 case 90 ... 100:
//                     return 'O';
//                     break;
//                 case 80 ... 89:
//                     return 'E';
//                     break;
//                 case 70 ... 79:
//                     return 'A';
//                     break;
//                 case 55 ... 69:
//                     return 'P';
//                     break;
//                 case 40 ... 54:
//                     return 'D';
//                     break;
//                 default:
//                     return 'T';
//                     break;
//                     }
//         }
// };
#include <numeric>
class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstname, string lastname, int id, vector<int> scores) : Person(firstname, lastname, id)
    {
        testScores = scores;
    }
    char calculate()
    {
        int avg = accumulate(testScores.begin(), testScores.end(), 0) / testScores.size();
        switch (avg)
        {
        case 90 ... 100:
            return 'O';
            break;
        case 80 ... 89:
            return 'E';
            break;
        case 70 ... 79:
            return 'A';
            break;
        case 55 ... 69:
            return 'P';
            break;
        case 40 ... 54:
            return 'D';
            break;
        default:
            return 'T';
            break;
        }
    }
};
/*
 *   Class Constructor
 *
 *   Parameters:
 *   firstName - A string denoting the Person's first name.
 *   lastName - A string denoting the Person's last name.
 *   id - An integer denoting the Person's ID number.
 *   scores - An array of integers denoting the Person's test scores.
 */
// Write your constructor here

/*
 *   Function Name: calculate
 *   Return: A character denoting the grade.
 */
// Write your function here

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}