#include "deposit.h"

int main (){
	int ye,date,d,m,c;
	cout << "Введите сумму вклада(>=10000) и срок(<=365):\n";
	cin >> ye;
	if (ye<10){
		cout << "Введите корректную сумму вклада..\n"; 
		return 0;
	};
	cin >> date;
	if ((date>365)||(date<=0)){
		cout << "Введите корректное число срока вклада..\n"; 
		return 0;
	};
	
	
	if (ye<100) d=1;
		else d=2;
	if (date<=30) c=one(d,ye);
    if ((date<=120) && (date>=31)) c=two(d,ye);
	if ((date<=240) && (date>=121)) c=three(d,ye);
	if ((date<=365) && (date>=241)) c=four(d,ye);
	cout << "\n\n\nОтвет: " << c;
	return 0;
}
