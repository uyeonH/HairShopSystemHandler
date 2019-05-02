
#include "pch.h"
#include <iostream>
#include "HairShopSystemHandler.h"
#include "CommonThings.h"
using namespace std;
int main()
{
	int sel = 0;

	HairShopSystemHandler sh;
	while (1) {
		sh.ShowMenu();
		cout << ">> "; cin >> sel;
		switch (sel) {
		case MEM:
			sh.ShowMemMenu(); break;
		case DSN:
			sh.ShowDsnMenu(); break;
		case EXIT:
			exit(0);
		}
		if (sel == 1) {
			cout << ">> "; cin >> sel;
			switch (sel) {
			case REGISTER:
				sh.Register(); break;
			case DEPOSIT:
				sh.DepositMoney(); break;
			case DOHAIR:
				sh.doHair(); break;
			case PRINT:
				sh.ShowAllMemInfo(); break;
			case HISTORY_PRINT:
				sh.showHistory(); break;
			default:
				cout << "Illegal Selectoin ..." << endl;
			}
		}
		else if (sel == 2) {
			cout << ">> "; cin >> sel;
			switch (sel) {
			case DREGISTER:
				sh.DRegister(); break;
			case PRINTD:
				sh.ShowAllDesigner(); break;
			case SHOWCAR:
				sh.ShowCareerInfo(); break;
			case SHOWPAY:
				sh.ShowPayCheckInfo(); break;
			default:
				cout << "Illegal Selectoin ..." << endl;
			}
		}
		else cout << "error" << endl;
		

	}
}
