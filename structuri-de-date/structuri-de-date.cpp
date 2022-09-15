
#include "Lista.h"

int main()
{
   
	Car c;
	c.brand = "Dacia";
	c.color = "Rosu";
	c.year = 99;

	Car c2 ;
	c2.brand = "Tesla";
	c2.color = "Gri";
	c2.year = 2012;

	Car c3;
	c3.brand = "Audi";
	c3.color = "Nedru";
	c3.year = 2014;

	Car c4;
	c4.brand = "EEEEe";
	c4.color = "Roz";
	c4.year = 100;

	Car c5;
	c5.brand = "P";
	c5.color = "Negru";
	c5.year = 1911;

	List list;
	list.addStart(c);
	list.addStart(c2);
	list.addStart(c3);
	list.addEnd(c4);
	list.addPosition(c5, 2);
	//list.eraseStart();
	//list.erasePosition(2);
	//list.eraseEnd();
	//list.pbinfo546();
	//list.sortarecrescatoare();
	//cout << list.size() << endl;
	//cout<<(list.get(2)).afisare();

	//list.pbinfo486();
	//list.pbinfo553();
	//list.pbinfo547();
	//list.pbinfo490();
	//list.pbinfo487();
	Node* head = list.head;
	

	//head = head->next->next;
	//cout << head->data.brand;

	//list.afisare();
	


}

