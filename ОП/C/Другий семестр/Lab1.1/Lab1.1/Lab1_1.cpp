#include "CreateMainTXT2.h"
#include "ReadTXT.h"
#include "CreateNew.h"
#include "SearchIdent.h"
#include "Windows.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	CreateMainTXT2();
	ReadTXT("Main.txt");
	
	//CreateNew("Even.txt", "Odd.txt");
	

	Search("Main.txt", "ID.txt");
	ReadTXT("ID.txt");

	return 0;
}