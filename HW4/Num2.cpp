#include <iostream>
#include <vector>
#include <string>
 
struct Student;
 
struct Lesson
{
	Lesson(std::string subj) : subject(subj)
	{}
 
 
	std::string subject;
	std::vector <Student*> students;
};
 
struct Student
{
	Student(std::string human) : name(human)
	{}
 
	std::string name;
	std::vector <Lesson*> lessons;
};
 
void links(Student* student, Lesson* lesson)
{
	(*student).lessons.push_back(lesson);
	(*lesson).students.push_back(student);
}
 
 
int main()
{
	Student s1("Petya"), s2("Vlad");
	Lesson l1("Mathanalysis"), l2("Analmechanics"), l3("English"), l4("Speeddating");
 
	links(&s1, &l1);
	links(&s1, &l2);
	links(&s1, &l3);
 
	links(&s2, &l3);
	links(&s2, &l4);
 
	std::vector <Student> students = { s1, s2 };
	std::vector <Lesson> lessons = { l1, l2, l3 };
 
	for (Student s : students)
	{
		std::cout << s.name << " is studying: ";
		for (Lesson* l : s.lessons)
		{
			(l != s.lessons[s.lessons.size() - 1]) ? std::cout << (*l).subject << ", " :
				std::cout << (*l).subject << ".\n";
		}
	}
}
