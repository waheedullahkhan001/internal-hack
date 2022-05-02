#include <iostream>
#include <windows.h>

using namespace std;


int g_health = 100;


void setHealth(int health) {
	g_health = health;
}

int getHealth() {
	return g_health;
}


int main() {
	
	setHealth(100);
	while (true) 	{
		Sleep(500);
		cout << "\rHealth: " << getHealth() << "   ";
	}
	
	return 0;
}
