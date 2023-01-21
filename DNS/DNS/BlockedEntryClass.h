
#ifndef NODE_H
#define NODE_H

#include <string>

class BlockedEntry
{
	private:
		
		int blockID;
		string domainName;
		string ipAddress;
		string country;
		string entryDate;
		
		BlockedEntry *next;
		
	public:
		
		BlockedEntry();
		
		int getBlockID();
		string getDomainName();
		string getIpAddress();
		string getCountry();
		string getEntryDate();
		BlockedEntry* getNext(); 
		
		void setBlockID(int);
		void setDomainName(string);
		void setIpAddress(string);
		void setCountry(string);
		void setEntryDate(string);
		void setNext(BlockedEntry*);
		
		
};

#endif