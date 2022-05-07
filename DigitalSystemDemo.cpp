/*
    Author: Farah Alkarrad
    Title:  Digital System
*/

#include<iostream>
#include<math.h>
#include<string>
using namespace std;


void Decimal_to_other() {
	long number, x, y;
	int arr[50];
	cout << " plz enter a number in decimal system.\t";
	cin >> number;
	x = number;
	y = number;

	//Binary system
	int i = 0;
	while (number > 0)
	{
		arr[i] = number % 2;
		number /= 2;
		i++;
	}
	cout << "\n Binary = ";
	for (int k = i - 1; k >= 0; k--)
	{
		cout << arr[k];
	}
	cout << endl;

	//Octal system
	int f = 0;
	while (x > 0)
	{
		arr[f] = x % 8;
		x /= 8;
		f++;
	}
	cout << " Octal = ";
	for (int k = f - 1; k >= 0; k--)
	{
		cout << arr[k];
	}

	//Hexa decimal
	int d = 0;
	while (y > 0)
	{
		arr[d] = y % 16;
		y /= 16;
		d++;
	}
	cout << "\n Hexa decimal = ";
	for (int k = d - 1; k >= 0; k--)
	{
		if (arr[k] == 10)
			cout << "A";
		else if (arr[k] == 11)
			cout << "B";
		else if (arr[k] == 12)
			cout << "C";
		else if (arr[k] == 13)
			cout << "D";
		else if (arr[k] == 14)
			cout << "E";
		else if (arr[k] == 15)
			cout << "F";
		else
			cout << arr[k];
	}
	cout << endl;
}


void Binary_to_Decimal() {
	string name, arr[50];
	int num, sum = 0, r[30], k[30], j = 0;
	cout << " plz enter a number in binary system.\t";
	cin >> num;
	int i = 0;
	while (num != 0) {
		r[i] = num % 10;
		sum += r[i] * pow(2, i);
		num /= 10;
		i++;
	}
	cout << "\n decimal = \t" << sum << endl;
}


void Binary_to_Octal() {
	string name, arr[50];
	cout << "plz enter a number in binary system.\t";
	cin >> name;
	int j = 0;
	for (int i = 0; i < name.length(); i += 3)
	{
		if (name.substr(i, 3) == "000")
			arr[j] = "0";
		else if (name.substr(i, 3) == "001")
			arr[j] = "1";
		else if (name.substr(i, 3) == "010")
			arr[j] = "2";
		else if (name.substr(i, 3) == "011")
			arr[j] = "3";
		else if (name.substr(i, 3) == "100")
			arr[j] = "4";
		else if (name.substr(i, 3) == "101")
			arr[j] = "5";
		else if (name.substr(i, 3) == "110")
			arr[j] = "6";
		else if (name.substr(i, 3) == "111")
			arr[j] = "7";
		else if (name.substr(i, 2) == "00")
			arr[j] = "0";
		else if (name.substr(i, 2) == "01")
			arr[j] = "2";
		else if (name.substr(i, 2) == "10")
			arr[j] = "4";
		else if (name.substr(i, 2) == "11")
			arr[j] = "6";
		else if (name.substr(i, 1) == "0")
			arr[j] = "0";
		else if (name.substr(i, 1) == "1")
			arr[j] = "4";
		j++;
	}
	cout << " Octal = ";
	for (int i = 0; i < j; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}


void Binary_to_HexaDecimal() {
	string name, arr[50];
	cout << "plz enter a number in binary system.\t";
	cin >> name;
	int j = 0;
	for (int i = 0; i < name.length(); i += 4)
	{
		if (name.substr(i, 4) == "0000")
			arr[j] = "0";
		else if (name.substr(i, 4) == "0001")
			arr[j] = "1";
		else if (name.substr(i, 4) == "0010")
			arr[j] = "2";
		else if (name.substr(i, 4) == "0011")
			arr[j] = "3";
		else if (name.substr(i, 4) == "0100")
			arr[j] = "4";
		else if (name.substr(i, 4) == "0101")
			arr[j] = "5";
		else if (name.substr(i, 4) == "0110")
			arr[j] = "6";
		else if (name.substr(i, 4) == "0111")
			arr[j] = "7";
		else if (name.substr(i, 4) == "1000")
			arr[j] = "8";
		else if (name.substr(i, 4) == "1001")
			arr[j] = "9";
		else if (name.substr(i, 4) == "1010")
			arr[j] = "A";
		else if (name.substr(i, 4) == "1011")
			arr[j] = "B";
		else if (name.substr(i, 4) == "1100")
			arr[j] = "C";
		else if (name.substr(i, 4) == "1101")
			arr[j] = "D";
		else if (name.substr(i, 4) == "1110")
			arr[j] = "E";
		else if (name.substr(i, 4) == "1111")
			arr[j] = "F";
		else if (name.substr(i, 3) == "000")
			arr[j] = "0";
		else if (name.substr(i, 3) == "001")
			arr[j] = "2";
		else if (name.substr(i, 3) == "010")
			arr[j] = "4";
		else if (name.substr(i, 3) == "011")
			arr[j] = "6";
		else if (name.substr(i, 3) == "100")
			arr[j] = "8";
		else if (name.substr(i, 3) == "101")
			arr[j] = "A";
		else if (name.substr(i, 3) == "110")
			arr[j] = "C";
		else if (name.substr(i, 3) == "111")
			arr[j] = "E";
		else if (name.substr(i, 2) == "00")
			arr[j] = "0";
		else if (name.substr(i, 2) == "01")
			arr[j] = "4";
		else if (name.substr(i, 2) == "10")
			arr[j] = "8";
		else if (name.substr(i, 2) == "11")
			arr[j] = "C";
		else if (name.substr(i, 1) == "0")
			arr[j] = "0";
		else if (name.substr(i, 1) == "1")
			arr[j] = "8";
		j++;
	}
	cout << " Hexa decimal = ";
	for (int i = 0; i < j; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}


void Octal_to_Decimal() {
	int num, arr[20], i = 0, fact = 0, sum = 0; string r[20];
	cout << " plz enter a octal number.\t";
	cin >> num;
	while (num > 0)
	{
		arr[i] = num % 10;
		num = num / 10;
		if (arr[i] == 0)
			r[i] = "000";
		else if (arr[i] == 1)
			r[i] = "001";
		else if (arr[i] == 2)
			r[i] = "010";
		else if (arr[i] == 3)
			r[i] = "011";
		else if (arr[i] == 4)
			r[i] = "100";
		else if (arr[i] == 5)
			r[i] = "101";
		else if (arr[i] == 6)
			r[i] = "110";
		else if (arr[i] == 7)
			r[i] = "111";
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		fact = arr[j] * pow(8, j);
		sum = sum + fact;
	}
	cout << "\n decimal = \t" << sum << endl;
}


void Octal_to_Binary() {

	int num, arr[20], i = 0; string r[20];
	cout << " plz enter a number in Octal system.\t";
	cin >> num;
	while (num > 0)
	{
		arr[i] = num % 10;
		num = num / 10;

		if (arr[i] == 0)
			r[i] = "000";
		else if (arr[i] == 1)
			r[i] = "001";
		else if (arr[i] == 2)
			r[i] = "010";
		else if (arr[i] == 3)
			r[i] = "011";
		else if (arr[i] == 4)
			r[i] = "100";
		else if (arr[i] == 5)
			r[i] = "101";
		else if (arr[i] == 6)
			r[i] = "110";
		else if (arr[i] == 7)
			r[i] = "111";
		i++;
	}
	cout << " binary = ";
	for (int z = i - 1; z >= 0; z--)
	{
		cout << r[z];
	}
	cout << endl;

}


void Octal_to_HexaDecimal() {
	//Octal -> Binary -> HexaDecimal

	int octalnum[8] = { 0, 1, 10, 11, 100, 101, 110, 111 };
	long long octal, binary = 0, num = 1, check, ch;
	char hex[50] = "";
	int index, count = 0;
	cout << " Plz Enter Octal Number:\t";
	cin >> octal;
	check = octal;

	while (check > 0) {
		ch = check % 10;
		check /= 10;
		while (ch > 7) {
			cout << "\n Invalide number please inter a new Octal number again:\t";
			cin >> octal;
			check = octal;
			ch = check % 10;
			check /= 10;
		}
	}

	// First Convert Octal to Binary
	while (octal > 0)
	{
		index = octal % 10;
		binary = binary + (octalnum[index] * num);
		octal /= 10;
		num *= 1000;
		count++;
	}


	// Convert Binary to Hexadecimal
	int i = count - 1;
	while (binary > 0)
	{
		index = binary % 10000;
		switch (index)
		{
		case 1:
			hex[i] = '1';
			break;
		case 10:
			hex[i] = '2';
			break;
		case 11:
			hex[i] = '3';
			break;
		case 100:
			hex[i] = '4';
			break;
		case 101:
			hex[i] = '5';
			break;
		case 110:
			hex[i] = '6';
			break;
		case 111:
			hex[i] = '7';
			break;
		case 1000:
			hex[i] = '8';
			break;
		case 1001:
			hex[i] = '9';
			break;
		case 1010:
			hex[i] = 'A';
			break;
		case 1011:
			hex[i] = 'B';
			break;
		case 1100:
			hex[i] = 'C';
			break;
		case 1101:
			hex[i] = 'D';
			break;
		case 1110:
			hex[i] = 'E';
			break;
		case 1111:
			hex[i] = 'F';
			break;
		}
		binary /= 10000;
		i--;
		if (binary < 1)
			hex[i] = '0';
	}
	cout << " \n Hexadecimal = \t" << hex << endl;
}


void HexaDecimal_to_Decimal() {
	string name; int fact = 0, sum = 0, r[20], m[20];
	cout << " plz enter a hexa decimal number.\t";
	cin >> name;
	for (int i = 0; i < name.length(); i++)
	{
		if (name.substr(i, 1) == "A" || name.substr(i, 1) == "a")
			r[i] = 10;
		else if (name.substr(i, 1) == "B" || name.substr(i, 1) == "b")
			r[i] = 11;
		else if (name.substr(i, 1) == "C" || name.substr(i, 1) == "c")
			r[i] = 12;
		else if (name.substr(i, 1) == "D" || name.substr(i, 1) == "d")
			r[i] = 13;
		else if (name.substr(i, 1) == "E" || name.substr(i, 1) == "e")
			r[i] = 14;
		else if (name.substr(i, 1) == "F" || name.substr(i, 1) == "f")
			r[i] = 15;
		else if (name.substr(i, 1) == "0")
			r[i] = 0;
		else if (name.substr(i, 1) == "1")
			r[i] = 1;
		else if (name.substr(i, 1) == "2")
			r[i] = 2;
		else if (name.substr(i, 1) == "3")
			r[i] = 3;
		else if (name.substr(i, 1) == "4")
			r[i] = 4;
		else if (name.substr(i, 1) == "5")
			r[i] = 5;
		else if (name.substr(i, 1) == "6")
			r[i] = 6;
		else if (name.substr(i, 1) == "7")
			r[i] = 7;
		else if (name.substr(i, 1) == "8")
			r[i] = 8;
		else if (name.substr(i, 1) == "9")
			r[i] = 9;
	}
	int i = 0;
	for (int j = name.length() - 1; j >= 0; j--) {
		fact = r[j] * pow(16, i);
		sum = sum + fact;
		i++;
	}
	cout << "\n decimal = " << sum << endl;
}


void HexaDecimal_to_Binary() {
	string f[20], name;
	cout << " plz enter a hexa decimal number.\t";
	cin >> name;
	for (int i = 0; i < name.length(); i++)
	{
		if (name.substr(i, 1) == "A" || name.substr(i, 1) == "a")
			f[i] = "1010";
		else if (name.substr(i, 1) == "B" || name.substr(i, 1) == "b")
			f[i] = "1011";
		else if (name.substr(i, 1) == "C" || name.substr(i, 1) == "c")
			f[i] = "1100";
		else if (name.substr(i, 1) == "D" || name.substr(i, 1) == "d")
			f[i] = "1101";
		else if (name.substr(i, 1) == "E" || name.substr(i, 1) == "e")
			f[i] = "1110";
		else if (name.substr(i, 1) == "F" || name.substr(i, 1) == "f")
			f[i] = "1111";
		else if (name.substr(i, 1) == "0")
			f[i] = "0000";
		else if (name.substr(i, 1) == "1")
			f[i] = "0001";
		else if (name.substr(i, 1) == "2")
			f[i] = "0010";
		else if (name.substr(i, 1) == "3")
			f[i] = "0011";
		else if (name.substr(i, 1) == "4")
			f[i] = "0100";
		else if (name.substr(i, 1) == "5")
			f[i] = "0101";
		else if (name.substr(i, 1) == "6")
			f[i] = "0110";
		else if (name.substr(i, 1) == "7")
			f[i] = "0111";
		else if (name.substr(i, 1) == "8")
			f[i] = "1000";
		else if (name.substr(i, 1) == "9")
			f[i] = "1001";
		else if (name.substr(i, 1) == ".")
			f[i] = ".";
	}
	cout << " Binary = ";
	for (int i = 0; i < name.length(); i++)
	{
		cout << f[i];
	}
	cout << endl;
}


void HexaDecimal_to_Octal() {
	//HexaDecimal -> Binary -> Octal

	long i, y, hexa[20], binary[20], rem, octal = 0, z = 0, temp = 1, w = 0;
	char input[20];
	cout << "plz enter Hexadecimal Number: \t";
	cin >> input;

	//first convert HexaDecimal to Binary
	for (y = 0; input[y] != '\0'; y++);
	for (i = y - 1; i >= 0; i--)
	{
		if (input[i] >= 'A' && input[i] <= 'F')
			hexa[i] = input[i] - 55;
		else if (input[i] >= 'a')
			hexa[i] = input[i] - 87;
		else
			hexa[i] = input[i] - 48;
		for (int y = 0; y < 4; y++)
		{
			rem = hexa[i] % 2;
			hexa[i] /= 2;
			binary[z++] = rem;
		}
	}


	//Convert Binary to Octal
	for (i = 0; i < z;)
	{
		for (y = 0; y < 3; y++)
		{
			if (i >= 0)
				octal += binary[i++] * pow(2, y);
		}
		w += octal * temp;
		octal = 0;
		temp *= 10;
	}
	cout << "\n Octal =  \t" << w << endl;
}



int main()
{
	int number;
	cout << "\n To covert between number system plz enter a number of the following:\n Decimal to other.\t\t press 1\n"
        <<" Binary to Decimal.\t\t press 2\n Binary to Octal.\t\t press 3\n Binary to HexaDecimal.\t\t press 4\n Octal to"
        <<"Decimal.\t\t press 5\n Octal to Binary.\t\t press 6\n Octal to HexaDecimal.\t\t press 7\n HexaDecimal"
        <<" to Decimal.\t press 8\n HexaDecimal to Binary.\t\t press 9\n HexaDecimal to Octal.\t\t press 10\n";
	cin >> number;
	switch (number) {
	case 1:
		Decimal_to_other();
		break;
	case 2:
		Binary_to_Decimal();
		break;
	case 3:
		Binary_to_Octal();
		break;
	case 4:
		Binary_to_HexaDecimal();
		break;
	case 5:
		Octal_to_Decimal();
		break;
	case 6:
		Octal_to_Binary();
		break;
	case 7:
		Octal_to_HexaDecimal();
		break;
	case 8:
		HexaDecimal_to_Decimal();
		break;
	case 9:
		HexaDecimal_to_Binary();
		break;
	case 10:
		HexaDecimal_to_Octal();
		break;
	default:
		cout << "\n exit number.\n";
	}

	return 0;
}

