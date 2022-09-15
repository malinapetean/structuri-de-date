#pragma once
#include "Node.h"
struct List {
	Node* head = NULL;

	void addStart(Car car) {

		if (head == NULL) {

			head = new Node;
			head->data = car;
			head->next = NULL;
		}
		else {

			Node* nou = new Node;

			nou->data = car;
			nou->next = head;

			head = nou;

		}
	}
	void addEnd(Car car)
	{
		Node* nou = new Node;
		nou->data = car;
		nou->next = NULL;
		if (head == NULL)
		{
			head = nou;
		}
		else
		{
			Node* k = head;
			while (k->next != NULL)
				k = k->next;
			k->next = nou;
		}
	}
	void addPosition(Car car, int poz)
	{
		int ct = 0;
		if (head == NULL) {

			head = new Node;
			head->data = car;
			head->next = NULL;
		}
		else
		{
			Node* aux = head;
			while (ct < poz - 1)
			{
				aux = aux->next;
				ct++;
			}
			Node* nou = new Node;
			nou->data = car;
			nou->next = aux->next;
			aux->next = nou;

		}
	}

	void eraseStart()
	{
		Node* aux = head;
		aux = aux->next;
		head = aux;
	}

	void eraseEnd()
	{
		Node* aux = head;
		while (aux->next->next != NULL)
		{
			aux = aux->next;
		}
		aux->next= NULL;
	}

	void erasePosition(int poz)
	{
		int ct = 0;
		Node* aux = head;
		while (ct != poz - 1)
		{
			aux = aux->next;
			ct++;
		}
		aux->next = aux->next->next;

	}

	int pbinfo633()
	{
		int anpar = 0;
		int animpar = 0;
		Node* aux = head;
		while (aux != NULL)
		{
			if (aux->data.year % 2 == 0)
				anpar++;
			else if (aux->data.year % 2 != 0)
				animpar++;
			aux = aux->next;
		}
		if (anpar >= animpar)
			return anpar - animpar;
		else
			return animpar - anpar;
	}
	void pbinfo546()
	{
		int nrfinal;
		Node* aux = head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		nrfinal = aux->data.year;
		aux = head;
		while (aux != NULL)
		{
			if (aux->data.year % nrfinal == 0)
				cout << aux->data.afisare() << endl;
			aux = aux->next;
		}
	}
	void sortarecrescatoare()
	{
		int sch = 1;
		Node* aux = head;
		while (sch == 1)
		{
			sch = 0;
			while (aux != NULL)
			{
				if (aux->data.year > aux->next->data.year)
				{
					Node* aux2 = aux;
					aux = aux->next;
					aux->next = aux2;
					sch = 1;
				}
				aux = aux->next;
			}
		}
	}
	void afisare() {

		Node* it = head;
		while (it != NULL)
		{
			cout << it->data.afisare() << endl;
			it = it->next;
		}
	}

	void pbinfo486()
	{
		int minim = 999999;
		int maxim = 0;
		Node* aux = head;
		while (aux != NULL)
		{
			if (aux->data.year > maxim)
				maxim = aux->data.year;
			else if (aux->data.year <minim)
				minim = aux->data.year;
			aux = aux->next;
		}
		cout << minim << " " << maxim;
	}
	void pbinfo553()
	{
		int pozmin = 0;
		int pozmax = 0;
		int minim = 999999;
		int maxim = 0;
		int ct = 0;
		Node* aux = head;
		while (aux != NULL)
		{
			if (aux->data.year > maxim) {
				maxim = aux->data.year;
				pozmax = ct;
			}
			else if (aux->data.year < minim)
			{
				minim = aux->data.year;
				pozmin = ct;
			}
			ct++;
			aux = aux->next;
		}
		cout << pozmin << " " << pozmax;
	}
	void pbinfo547()
	{
		int minim = 999999;
		int maxim = 0;
		int ct = 0;
		Node* aux = head;

		while (aux != NULL)
		{
			if (aux->data.year > maxim)
				maxim = aux->data.year;
			else if (aux->data.year < minim)
				minim = aux->data.year;
			aux = aux->next;
		}
		aux = head;
		while (aux != NULL)
		{
			if (aux->data.year == maxim - minim)
				ct++;
			aux = aux->next;
		}
		cout << maxim << " " << minim << " " << ct;
	}
	void pbinfo490()
	{
		int pozmin = 0;
		int pozmax = 0;
		int minim = 999999;
		int maxim = 0;
		int ct = 0;
		Node* aux = head;
		while (aux != NULL)
		{
			if (aux->data.year > maxim) {
				maxim = aux->data.year;
				pozmax = ct;
			}
			else if (aux->data.year < minim)
			{
				minim = aux->data.year;
				pozmin = ct;
			}
			ct++;
			aux = aux->next;
		}

		cout << pozmin << " " << pozmax<<" ";
		ct = 0;
		aux = head;
		if (pozmin > pozmax)
		{
			while (aux != NULL && ct!=pozmin)
			{
				if (pozmax <= ct)
				{
					cout << aux->data.year<<" ";
				
				}
				ct++;
				aux = aux->next;
			}
			cout << minim;
		}
		if (pozmin < pozmax)
		{
			while (aux != NULL && ct != pozmax)
			{
				if (pozmin <= ct)
				{
					cout << aux->data.year<<" ";
					
				}
				ct++;
				aux = aux->next;
			}
			cout << maxim;
		}
	}
	void pbinfo487()
	{
		int ct = 0,s = 0;
		Node* aux = head;
		while (aux != NULL)
		{
			s += aux->data.year;
			ct++;
			aux = aux->next;
		}
		int m = s / ct;
		aux = head;
		ct = 0;
		while (aux != NULL)
		{
			if (aux->data.year > m)
			{
				ct++;
			}
			aux = aux->next;
		}
		cout << m << " " << ct;

	}
	

	//size-nr noduri din lista 
	int size()
	{
		Node* aux = head;
		int size = 0;
		while (aux != NULL)
		{
			aux = aux->next;
			size++;
		}
		return size;
	}
	//get ->returneaza  masina de pe o anumita pozitie
	Car get(int poz)
	{
		Node* aux = head;
		int ct = 0;
		while (ct != poz-1)
		{
			aux = aux->next;
			ct++;
		}
		return aux->data;
	}
	//set->ce pune o masina pe o anumita pozitie
	void set(Car car)
	{

	}

};