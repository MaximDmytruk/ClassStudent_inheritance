/*Завдання 1
Створіть клас Student, який міститиме інформацію
про студента.
За допомогою механізму успадкування, реалізуйте клас
Aspirant (аспірант — студент, який готується до захисту
кандидатської роботи) похідний від Student.*/
#include <iostream>
#include <string>
using namespace std;
class Student					//Батьківський клас студент
{
private:
	string name;				
	int year;
public:
	void SetName() {					//Сетер для імен
		cout << "Enter Name ";
		cin >> name;
		
	}
	void GetName() {					//Гетер для імен
		cout << "Name is "<<name<<endl;
	}
	void SetYear() {					//Сетер для віку
		cout << "Enter Year = ";
		cin >> year;
		
	}
	void GetYear() {				//геттер для віку
		cout << "Year = "<<year;
	}
};

class Aspirant : public Student			//Дочірній клас Аспіранту налідуємий від класа студент 
{
private:
	string facult;	//Факультет		
	int middleBal;	//сер.бал
public:
	void SetFacult() {			//сеттер для факультету 
		cout << " Enter facults";
		cin >> facult;
	}
	void GetFacult() {				//Гетер для факультету 
		cout << " Facult is "<< facult;
	}
	void SetMiddleBal() {				//сетер факультету
		cout << " Enter Your middleBal = ";
		cin >> middleBal;
	}
	void GetMiddleBal() {				//гетер для факультету 
		cout << " middleBal = " << middleBal << endl;	 
	}
};

int main()
{
	cout << "Enter some info about our student: " << endl;	//Просимо ввести дані 
	Student One;		//Об'єкт класу студент один 
	One.SetName();		//ВВодимо дані
	One.SetYear();

	Student Two;		//Обєкт класу студент два
	Two.SetName();		//вводимо дані 
	Two.SetYear();

	cout << "Enter some info about our Aspirant: " << endl;	//Просимо ввести дані 
	Aspirant first;							//Обєкт дочірнього класу 
	first.SetName();
	first.SetYear();						//Вводимо дані 
	first.SetFacult();
	first.SetMiddleBal();

	cout << "Our Students are:" << endl;	//Далі виводимо усі дані по сутдентах та аспірантах 
	cout << "1.";
	One.GetName();
	One.GetYear();
	cout << endl;
	cout << "2.";
	Two.GetName();
	Two.GetYear();
	cout << endl;

	cout << "Our Aspirants are: " << endl;
	cout << "1.";
	first.GetName();
	first.GetYear();
	first.GetFacult();
	first.GetMiddleBal();

	
}

