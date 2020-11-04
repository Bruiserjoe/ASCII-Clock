#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include <string>
bool am = true;
void printDigit(int dig, int dig4, int dig2, int dig3) {
	std::string zero0[5] = { " 0000 ", "00  00", "00  00", "00  00", " 0000 " };
	std::string one1[5] = { "1111  ", "  11  ", "  11  ", "  11  ", "111111" };
	std::string two2[5] = { "  2222", "22  22", "    22", "  22  ", "222222" };
	std::string three3[5] = { " 3333 ", "33  33", "   333", "33  33", "  333 " };
	std::string four4[5] = { "44  44", "44  44", "444444", "    44", "    44" };
	std::string five5[5] = { "555555", "55    ", "55555 ", "    55", "55555 " };
	std::string six6[5] = { " 6666 ", "66    ", "66666 ", "66  66", " 6666 " };
	std::string seven7[5] = { "777777", "   77 ", "  77  ", " 77   ", "77    " };
	std::string eight8[5] = { " 8888 ", "88  88", " 8888 ","88  88"," 8888 " };
	std::string nine9[5] = { " 9999 ", "99  99", " 99999", "    99", "  9999" };
	std::string colon[5] = { "  ", "::", "  ", "::", "  " };
	std::string p[5] = { "ppp   ", "p  p  ", "ppp   ", "p     ", "p     "  };
	std::string m[5] = {"      ","      ","mmmm  ","m m m ","m m m "};
	std::string a[5] = { "      ","      ", " aa   ","a a   ","aaa   ", };
	for (int i = 0; i < 5; i++) {
		switch (dig) {
		case 0:
			std::cout << zero0[i];
		break;
		case 1:
			std::cout << one1[i];
			break;
		case 2:
			std::cout << two2[i];
			break;
		case 3:
			std::cout << three3[i];
			break;
		case 4:
			std::cout << four4[i];
			break;
		case 5:
			std::cout << five5[i];
			break;
		case 6:
			std::cout << six6[i];
			break;
		case 7:
			std::cout << seven7[i];
			break;
		case 8:
			std::cout << eight8[i];
			break;
		case 9:
			std::cout << nine9[i];
		break;
		}
		std::cout << "  ";
		switch (dig4) {
			case 0:
				std::cout << zero0[i];
				break;
			case 1:
				std::cout << one1[i];
				break;
			case 2:
				std::cout << two2[i];
				break;
			case 3:
				std::cout << three3[i];
				break;
			case 4:
				std::cout << four4[i];
				break;
			case 5:
				std::cout << five5[i];
				break;
			case 6:
				std::cout << six6[i];
				break;
			case 7:
				std::cout << seven7[i];
				break;
			case 8:
				std::cout << eight8[i];
				break;
			case 9:
				std::cout << nine9[i];
				break;
		}
		std::cout << "  " << colon[i] << "  ";
		switch (dig2) {
		case 0:
			std::cout << zero0[i];
		break;
		case 1:
			std::cout << one1[i];
			break;
		case 2:
			std::cout << two2[i];
			break;
		case 3:
			std::cout << three3[i];
			break;
		case 4:
			std::cout << four4[i];
			break;
		case 5:
			std::cout << five5[i];
			break;
		case 6:
			std::cout << six6[i];
			break;
		case 7:
			std::cout << seven7[i];
			break;
		case 8:
			std::cout << eight8[i];
			break;
		case 9:
			std::cout << nine9[i];
			break;
		}
		std::cout << "    ";
		switch (dig3) {
		case 0:
			std::cout << zero0[i];
			break;
		case 1:
			std::cout << one1[i];
			break;
		case 2:
			std::cout << two2[i];
			break;
		case 3:
			std::cout << three3[i];
			break;
		case 4:
			std::cout << four4[i];
			break;
		case 5:
			std::cout << five5[i];
			break;
		case 6:
			std::cout << six6[i];
			break;
		case 7:
			std::cout << seven7[i];
			break;
		case 8:
			std::cout << eight8[i];
			break;
		case 9:
			std::cout << nine9[i];
			break;
		}
		std::cout << "  ";
		if (am) {
			std::cout << a[i];
		}
		else {
			std::cout << p[i];
		}
		std::cout << m[i];
		std::cout << std::endl;

	}


}


//Function to print the clock
void printClock(std::time_t time1) {
	for (int i = 0; i < 50; i++) {
		std::cout << "#";
	}
	std::cout << std::endl;
	struct tm *tmp = localtime(&time1);
	int mins = tmp->tm_min;
	int hours = (tmp->tm_hour);
	int hours2;
	int hours3;
	am = true;
	if (hours > 12) {
		am = false;
		hours -= 12;
	}
	if (hours > 9) {
		hours2 = hours % 10;
		hours3 = hours / 10 % 10;
		
	}
	printDigit(hours3, hours2, mins/10%10, mins%10);
	
	for (int i = 0; i < 50; i++) {
		std::cout << "#";
	}
	std::cout << std::endl;
}

int main() {
	std::chrono::system_clock::time_point current = std::chrono::system_clock::now();
	while (true) {
		system("cls");
		current = std::chrono::system_clock::now();
		std::time_t c = std::chrono::system_clock::to_time_t(current);
		printClock(c);
		std::this_thread::sleep_for(std::chrono::seconds(10));
	}
	return 0;
}