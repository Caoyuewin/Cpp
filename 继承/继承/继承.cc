#define _CRT_SECURE_NO_WARNINGS 1

class person {
public:
	int _person;
};

class student : virtual public person{
public:
	int _student;
};

class teacher : virtual public person{
public:
	int _teacher;
};

class assitant : public student, public teacher {
public:
	int _assistant;
};


int main() {
	assitant ast;
	ast.student::_person = 1;
	ast.teacher::_person = 2;
	ast._student = 3;
	ast._teacher = 4;
	ast._assistant = 5;

	return 0;
}