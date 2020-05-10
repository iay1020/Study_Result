#include "ChoiceMenu.h"
#include<iostream>
using namespace std;

ChoiceMenu::ChoiceMenu()
{
	select_Number = MENU_LIST::TITLE;

}

ChoiceMenu::~ChoiceMenu()
{
}

bool ChoiceMenu::Update()
{
	system("cls");

	switch(select_Number)
	{
		case MENU_LIST::TITLE:
			ShowTitle();

			break;

		case MENU_LIST::ADD:
			AddData();

			break;

		case MENU_LIST::DELETE:
			DeleteData();

			break;

		case MENU_LIST::PRINT:
			PrintData();

			break;

		case MENU_LIST::EXIT:
			return false;

			break;

	}

	return true;
}

void ChoiceMenu::ShowTitle()
{
	unsigned short number = 0;

	cout << "1. Add" << endl;
	cout << "2. Delete" << endl;
	cout << "3. Print" << endl;
	cout << "4. Exit" << endl;
	cout << "입력 : ";
	cin >> number;

	if ((int)MENU_LIST::ADD <= number && number <= (int)MENU_LIST::EXIT) select_Number = (MENU_LIST)number;

}

void ChoiceMenu::AddData()
{
	int data_ = 0;

	cout << "추가 데이터 입력 : ";
	cin >> data_;

	list.Add(data_);

	select_Number = MENU_LIST::TITLE;

}

void ChoiceMenu::DeleteData()
{
	int data_ = 0;

	cout << "삭제 데이터 입력 : ";
	cin >> data_;

	//list.Delete(data_);
	list.Delete_2(data_);

	select_Number = MENU_LIST::TITLE;

}

void ChoiceMenu::PrintData()
{
	cout << "데이터 출력" << endl;

	list.Print();

	system("pause");

	select_Number = MENU_LIST::TITLE;

}
