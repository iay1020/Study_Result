#pragma once
#include"LinkedList.h"

enum class MENU_LIST
{
	TITLE,
	ADD,
	DELETE,
	PRINT,
	EXIT

};

class ChoiceMenu
{
private:
	LinkedList list;
	MENU_LIST select_Number;


public:
	ChoiceMenu();
	~ChoiceMenu();

	bool Update();

	void ShowTitle();
	void AddData();
	void DeleteData();
	void PrintData();

};

