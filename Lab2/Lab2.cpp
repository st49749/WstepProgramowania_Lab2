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
	// Grupa laboratoryjna sk³ada siê z n studentów(wartoœæ n podaje u¿ytkownik).Wprowadzamy
	// liczbê punktów dla ka¿dego studenta.Napisz program, który obliczy œredni¹ liczbê punktów
	// w grupie z wykorzystaniem pêtli while

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
	// W poprzednim zadaniu u¿ytkownik mo¿e wprowadzaæ wartoœci z dowolnego przedzia³u.
	// Zmodyfikuj program tak, by mo¿na by³o wprowadzaæ wartoœci tylko z przedzia³u 0 – 100.

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
	// Zastosuj instrukcje continue w programie z Zadania 2 tak, aby po podaniu liczby punktów spoza
	// przedzia³u 0 – 100 pomijaæ dalsze wykonywanie pêtli.SprawdŸ dzia³anie programu.Nastêpnie
	// zmieñ pêtlê na nieskoñczon¹, czyli tak¹ której warunek zawsze jest prawdziwy.

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
	// Napisz program, który pozwoli na wczytanie 10 liczb i wyznaczeniu iloœci oraz sumy liczb
	// ujemnych i dodatnich podanych przez u¿ytkownika.

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
	// Dany jest ci¹g n liczb(n > 0), napisz program pozwalaj¹cy na obliczenie sumy wszystkich liczb
	// parzystych w danym ci¹gu.

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
	// Wykorzystuj¹c algorytm z zadania 5, napisz program który pozwoli u¿ytkownikowi na
	// wylosowanie n liczb z przedzia³u(-10, 45) i obliczy sumê wszystkich liczb parzystych w danym
	// ci¹gu
	srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, wywo³ywana jest tylko raz

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