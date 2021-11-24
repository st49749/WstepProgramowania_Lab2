#include <iostream>
#include <time.h>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main()
{
	// task1();
	// task2();
	// task3();
	// task4();
	// task5();
	task6();
}


void task1()
{
	// Grupa laboratoryjna sk�ada si� z n student�w(warto�� n podaje u�ytkownik).Wprowadzamy
	// liczb� punkt�w dla ka�dego studenta.Napisz program, kt�ry obliczy �redni� liczb� punkt�w
	// w grupie z wykorzystaniem p�tli while

	int numberOfStudents;
	cout << "Podaj liczbe studentow: ", cin >> numberOfStudents;

	int i = 0;
	float allPoints = 0;
	while (i < numberOfStudents)
	{
		float numberOfPoints;
		cout << "Podaj liczbe punktow studenta nr : " << i + 1 << ": ", cin >> numberOfPoints;
		allPoints += numberOfPoints;
		i++;
	}

	float average = allPoints / numberOfStudents;
	cout << endl <<"Srednia liczba punktow : " << average << endl;
}

void task2()
{
	// W poprzednim zadaniu u�ytkownik mo�e wprowadza� warto�ci z dowolnego przedzia�u.
	// Zmodyfikuj program tak, by mo�na by�o wprowadza� warto�ci tylko z przedzia�u 0 � 100.

	int numberOfStudents;
	cout << "Podaj liczbe studentow: ", cin >> numberOfStudents;

	int i = 0;
	float allPoints = 0;
	while (i < numberOfStudents)
	{
		float numberOfPoints;
		do
		{
			cout << "Podaj liczbe punktow studenta nr : " << i + 1 << ": ", cin >> numberOfPoints;
		} while (numberOfPoints < 0 || numberOfPoints > 100);

		allPoints += numberOfPoints;
		i++;
	}

	float average = allPoints / numberOfStudents;
	cout << endl << "Srednia liczba punktow : " << average << endl;
}

void task3()
{
	// Zastosuj instrukcje continue w programie z Zadania 2 tak, aby po podaniu liczby punkt�w spoza
	// przedzia�u 0 � 100 pomija� dalsze wykonywanie p�tli.Sprawd� dzia�anie programu.Nast�pnie
	// zmie� p�tl� na niesko�czon�, czyli tak� kt�rej warunek zawsze jest prawdziwy.

	int numberOfStudents;
	cout << "Podaj liczbe studentow: ", cin >> numberOfStudents;

	int i = 0;
	float allPoints = 0;
	while (true)
	{
		float numberOfPoints;

		cout << "Podaj liczbe punktow studenta nr : " << i + 1 << ": ", cin >> numberOfPoints;
		if (numberOfPoints >= 0 && numberOfPoints <= 100)
		{
			allPoints += numberOfPoints;
			i++;
		}
		else 
		{
			continue;
		}

		if (numberOfStudents <= i)
			break;
	}

	float average = allPoints / numberOfStudents;
	cout << endl << "Srednia liczba punktow : " << average << endl;
}

void task4()
{
	// Napisz program, kt�ry pozwoli na wczytanie 10 liczb i wyznaczeniu ilo�ci oraz sumy liczb
	// ujemnych i dodatnich podanych przez u�ytkownika.

	int numbersCount = 10;

	int negativeNumberCount = 0,
		positiveNumberCount = 0,
		negativeNumberSum = 0,
		positiveNumberSum = 0;
	
	for (int i = 0; i < numbersCount; i++)
	{
		int number;
		cout << "Podaj liczbe nr  : " << i + 1 << ": ", cin >> number;
		
		if (number >= 0)
		{
			positiveNumberCount++;
			positiveNumberSum += number;
		}
		else
		{
			negativeNumberCount++;
			negativeNumberSum += number;
		}
	}

	cout << "Ilosc liczb pozytywnych : " << positiveNumberCount << endl;
	cout << "Suma liczb pozytywnych : " << positiveNumberSum << endl;
	cout << "Ilosc liczb negatywnych : " << negativeNumberCount << endl;
	cout << "Suma liczb negatywnych: " << negativeNumberSum << endl;
}

void task5()
{
	// Dany jest ci�g n liczb(n > 0), napisz program pozwalaj�cy na obliczenie sumy wszystkich liczb
	// parzystych w danym ci�gu.

	int numbersCount;
	do
	{
		cout << "Podaj dlugosc ciagu : ", cin >> numbersCount;
	} while (numbersCount <= 0);

	int evenNumberSum = 0;

	for (int i = 0; i < numbersCount; i++)
	{
		int number;
		cout << "Podaj liczbe nr  : " << i + 1 << ": ", cin >> number;

		if (number % 2 == 0)
		{
			evenNumberSum += number;
		}
	}

	cout << "Suma liczb parzystych : " << evenNumberSum << endl;
}

void task6()
{
	// Wykorzystuj�c algorytm z zadania 5, napisz program kt�ry pozwoli u�ytkownikowi na
	// wylosowanie n liczb z przedzia�u(-10, 45) i obliczy sum� wszystkich liczb parzystych w danym
	// ci�gu
	srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, wywo�ywana jest tylko raz

	int numbersCount;
	do
	{
		cout << "Podaj dlugosc ciagu : ", cin >> numbersCount;
	} while (numbersCount <= 0);

	int evenNumberSum = 0;

	for (int i = 0; i < numbersCount; i++)
	{
		int number = rand() % 56 - 10;
		cout << " | " << number;

		if (number % 2 == 0)
		{
			evenNumberSum += number;
		}
	}

	cout << "Suma liczb parzystych : " << evenNumberSum << endl;
}