#ifndef ADDISPLAYMENU_H
#define ADDISPLAYMENU_H

#include "../menu.h"
#include "../../advertisement/advertisement.h"

using namespace std;

class AdDisplayMenu : public Menu{
public:
	AdDisplayMenu(Data* data, unsigned int height, unsigned int width, Advertisement* ad);
	AdDisplayMenu(Data* data, unsigned int height, unsigned int width, char borderChar, Advertisement* ad);
	void print();
	void createMenu();
private:
	Advertisement* ad;
};

#endif