#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "list.h"
#include "ui.h"
#include "testCode.h"



int main(void) {
	InitList();

	LoadListFromFile();
	
	InitDummyData();
	
	EventLoopRun();
	
	SaveListToFile();
	
	ReleaseList();
	return 0;
}