#include "Process.h"

// TCP client that use non-blocking sockets
void StartProcess(int* id) {
	// Unos potrebnih podataka koji ce se poslati serveru
	printf("Unesite id procesa: ");
	scanf("%d", id);
	RegisterService(*id);
}
void Menu() {
	
}
int main()
{
	int id;
	//StartProcess(&id);
	//Menu();
	RegisterService(12);
	return 0;
}
