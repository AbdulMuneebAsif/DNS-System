#ifndef LIST_H
#define LIST_H

#include "node.h"

class Blacklist
{
	private:
		
		BlockedEntry *head;
		BlockedEntry *tail;
		
	public:
		
		Blacklist();

		void title();
		void menu();
		
		bool isEmpty();
		
		void insert();
		void insertByCountry();
		
		void searchByID();
		void searchByDomainName();
		void searchByIpAddress();
			
		void printByCountry();
		void PrintByEntryDate();
		
		void removeById();
		void removeByDomainName();
		void removeByIpAddress();
		
		void excludeByCountry();
		void excludeByEntryDate();
		
		
};

#endif