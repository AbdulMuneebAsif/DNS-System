#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <conio.h>

#include "list.h"

using namespace std;

//========================= Node Implimentation =======================================

// default constructor

BlockedEntry :: BlockedEntry()
{
	blockID = 0;
	domainName = ""; 
	ipAddress = "";
	country = ""; 
	entryDate = "";
	
	next = NULL;
}


//getter

int BlockedEntry :: getBlockID()
{
	return blockID;
}
string BlockedEntry :: getDomainName()
{
	return domainName;
}
string BlockedEntry :: getIpAddress()
{
	return ipAddress;
}
string BlockedEntry :: getCountry()
{
	return country;
}
string BlockedEntry :: getEntryDate()
{
	return entryDate;
}
BlockedEntry *BlockedEntry :: getNext()
{                                   
	return next;
}

// setter
		
void BlockedEntry :: setBlockID(int blockID)
{
	this -> blockID = blockID;
}
void BlockedEntry ::setDomainName(string domainName)
{
	this -> domainName = domainName;
}
void BlockedEntry ::setIpAddress(string ipAddress)
{
	this -> ipAddress = ipAddress;
}
void BlockedEntry ::setCountry(string country)
{
	this -> country = country;
}
void BlockedEntry ::setEntryDate(string entryDate)
{
	this -> entryDate = entryDate;
}
void BlockedEntry :: setNext(BlockedEntry* next)	
{            
	this -> next = next;
}					 

//============================== list class implimentation ================================

Blacklist :: Blacklist()
{
	head = NULL;
	tail = NULL;
}
void Blacklist :: title()
{
	cout << "\n\n";
	cout << "\t\t\t============================================================\n";
	cout << "\t\t\t==================== DSA ASSIGNMENT # 1 ====================\n";
	cout << "\t\t\t============================================================\n";
	cout << "\n";
}
void Blacklist :: menu()
{
	p:
		
	system("cls");
	title();
	
	cout << "\n 1. create new entry \n";
	cout << "\n 2. Exclude from list \n";
	cout << "\n 3. exclude multiple entries from list \n";
	cout << "\n 4. view / search \n";
	cout << "\n 5. View multiple records \n";
	cout << "\n 6. Exit / Terminate \n";	
	
	cout << "\n\n Please enter your choice :  \n";
	
	int choice;
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			system("cls");
			title();
			
			cout << "\n 1. new entry ";
			cout << "\n 2. new entry w.r.t country";
			cout << "\n 3. return to menu";
				
			cout << "\n\n please enter your choice : ";
				
			cin >>choice;
			switch(choice) 
			{
				case 1:
						
					insert();
					break;
						
				case 2:	
						
					insertByCountry();
					break;
					
				case 3:
						
					menu();
					break;
						
				default:
						
						cout << "\n\n Invalid Choice .. Please Try Again....";
			}
			break;
	
		
		case 2:
			
			system("cls");
			title();
			
			cout << "\n 1. exclude by ID ";
			cout << "\n 2. exclude by Domain name";
			cout << "\n 3. exclude by IP Address";
			cout << "\n 4. return to menu";
				
			cout << "\n\n please enter your choice : ";
				
			cin >>choice;
			switch(choice) 
			{
				case 1:
						
					removeById();
					break;
						
				case 2:	
						
					removeByDomainName();
					break;
					
				case 3:
						
					removeByIpAddress();
					break;
					
				case 4:
					
					menu();
					break;
						
				default:
						
						cout << "\n\n Invalid Choice .. Please Try Again....";
			}
			break;
			
		case 3:
			
			system("cls");
			title();
			
			cout << "\n 1. exclude by country ";
			cout << "\n 2. exclude by entry date ";
			cout << "\n 3. return to menu ";
				
			cout << "\n\n please enter your choice : ";
				
			cin >>choice;
			switch(choice) 
			{
				case 1:
						
					excludeByCountry();
					break;
						
				case 2:	
						
					excludeByEntryDate();
					break;
					
				case 3:
					
					menu();
					break;
						
				default:
						
						cout << "\n\n Invalid Choice .. Please Try Again....";
			}	
			break;
			
		case 4:
			
			system("cls");
			title();
			
			cout << "\n 1. Search by ID ";
			cout << "\n 2. Search by Domain Name ";
			cout << "\n 3. Search by Ip Address ";
			cout << "\n 4. return to menu";
				
			cout << "\n\n please enter your choice : ";
				
			cin >>choice;
			switch(choice) 
			{
				case 1:
						
					searchByID();
					break;
						
				case 2:	
						
					searchByDomainName();
					break;
					
				case 3:
						
					searchByIpAddress();
					break;
					
				case 4:
					
					menu();
					break;
						
				default:
						
						cout << "\n\n Invalid Choice .. Please Try Again....";
			}	
			break;
			
		case 5:
			
			system("cls");
			title();
			
			cout << "\n 1. view by country ";
			cout << "\n 2. view by entry date ";
			cout << "\n 3. return to menu ";
				
			cout << "\n\n please enter your choice : ";
				
			cin >>choice;
			switch(choice) 
			{
				case 1:
						
					printByCountry();
					break;
						
				case 2:	
						
					PrintByEntryDate();
					break;
					
				case 3:
					
					menu();
					break;
						
				default:
						
						cout << "\n\n Invalid Choice .. Please Try Again....";
			}	
			break;	
			
		case 6:
			
				exit(0);
			
			
		default:
			
				cout << "\n\n Invalid Choice .. Please Try Again....";
				cin >> choice;
		break;

	}
		
	getch();
	
	goto p;	
}
bool Blacklist :: isEmpty()
{
	if(head == NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
void Blacklist :: insert()
{
	system("cls");
	
	BlockedEntry *temp = new BlockedEntry();
	
	cout << "\n\n Enter block ID : ";
	int blockID;
	cin >> blockID;
	temp->setBlockID(blockID);
	
	cout << "\n\n Enter domain name : ";
	string domainName;
	cin >> domainName;
	temp -> setDomainName(domainName);
	
	
	cout << "\n\n Enter IP Address : ";
	string ipAddress;
	cin >> ipAddress;
	temp -> setIpAddress(ipAddress);
	
	cout << "\n\n Enter country : ";
	
	string country;
	
	cin >> country;
	temp -> setCountry(country);

	
	cout << "\n\n Enter entry date : ";
	string entryDate;
	cin >> entryDate;
	temp -> setEntryDate(entryDate);
	
	temp -> setNext(NULL);
	
	if(isEmpty())
	{
		head = temp;
		tail = temp;
		
	}
	else
	{
		BlockedEntry *temp2 = head;
		
		while(temp -> getNext() != NULL)
		{
			temp2 = temp2 -> getNext();
		}
		temp2 -> setNext(temp);
	}
	cout << "\n\n\t\t\t New entry inserted Successfully...";

}


void Blacklist :: insertByCountry()
{
	
	system("cls");
	
	string testId = "";
	int found = 0;
	title();
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter country for new entry : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getDomainName())
			{
				system("cls");
				title();
				
				cout << "\n\n Enter block ID : ";
				int blockID;
				cin >> blockID;
				temp->setBlockID(blockID);
	
				cout << "\n\n Enter domain name : ";
				string domainName;
				cin >> domainName;
				temp -> setDomainName(domainName);
	
	
				cout << "\n\n Enter IP Address : ";
				string ipAddress;
				cin >> ipAddress;
				temp -> setIpAddress(ipAddress);
	
				cout << "\n\n Enter country : ";
	
				string country;
	
				cin >> country;
				temp -> setCountry(country);

	
				cout << "\n\n Enter entry date : ";
				string entryDate;
				cin >> entryDate;
				temp -> setEntryDate(entryDate);
	
				temp -> setNext(NULL);
				found++;
			}
			temp = temp -> getNext();
			cout << "\n\n\t\t\t New entry inserted Successfully...";
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
	
}
		
void Blacklist :: searchByID()
{
	system("cls");
	
	int testId, found = 0;
	title();
	
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter ID for search : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getBlockID())
			{
				system("cls");
				title();
				
				cout << "\n\n block ID : " << temp -> getBlockID();
				cout << "\n\n domain name : " << temp -> getDomainName();
				cout << "\n\n IP Address : " << temp -> getIpAddress();
				cout << "\n\n country : " << temp -> getCountry();
				cout << "\n\n entry date : " << temp -> getEntryDate();
				
				found++;	
			}
			temp = temp -> getNext();
		}
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
	
	
}
void Blacklist :: searchByDomainName()
{
	
	system("cls");
	
	string testId = "";
	int found = 0;
	title();
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter Domain Name for search : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getDomainName())
			{
				system("cls");
				title();
				
				cout << "\n\n block ID : " << temp -> getBlockID();
				cout << "\n\n domain name : " << temp -> getDomainName();
				cout << "\n\n IP Address : " << temp -> getIpAddress();
				cout << "\n\n country : " << temp -> getCountry();
				cout << "\n\n entry date : " << temp -> getEntryDate();
				found++;
			}
			temp = temp -> getNext();
		}
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
	
}
void Blacklist :: searchByIpAddress()
{
	
	system("cls");
	
	title();
	string testId = "";
	int found = 0;
	
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter IP Address for search : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getIpAddress())
			{
				system("cls");
				title();
				
				cout << "\n\n block ID : " << temp -> getBlockID();
				cout << "\n\n domain name : " << temp -> getDomainName();
				cout << "\n\n IP Address : " << temp -> getIpAddress();
				cout << "\n\n country : " << temp -> getCountry();
				cout << "\n\n entry date : " << temp -> getEntryDate();
				found++;
			}
			
			temp = temp -> getNext();
		}
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}	
}
			
void Blacklist :: printByCountry()
{
	
	system("cls");
	
	title();
	string testId = "";
	int found = 0;
	
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter country to show Record : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getCountry())
			{
				system("cls");
				title();
				
				cout << "\n\n block ID : " << temp -> getBlockID();
				cout << "\n\n domain name : " << temp -> getDomainName();
				cout << "\n\n IP Address : " << temp -> getIpAddress();
				cout << "\n\n country : " << temp -> getCountry();
				cout << "\n\n entry date : " << temp -> getEntryDate();
				found++;
			}
			
			temp = temp -> getNext();
		}
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}	
}
void Blacklist :: PrintByEntryDate()
{
	
	system("cls");
	
	title();
	string testId = "";
	int found = 0;
	
	
	if (isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter entry date to show Record : ";
		cin >> testId;
		
		BlockedEntry* temp = head; 
		
		while(temp != NULL)
		{
			if(testId == temp -> getCountry())
			{
				system("cls");
				title();
				
				cout << "\n\n block ID : " << temp -> getBlockID();
				cout << "\n\n domain name : " << temp -> getDomainName();
				cout << "\n\n IP Address : " << temp -> getIpAddress();
				cout << "\n\n country : " << temp -> getCountry();
				cout << "\n\n entry date : " << temp -> getEntryDate();
				found++;
			}
			
			temp = temp -> getNext();
		}
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}	
}
	
void Blacklist :: removeById()
{
	system("cls");
	
	title();
	
	int testId, found = 0;
	
	if(isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter ID to remove : ";
		cin >> testId;
		
		if(testId == head -> getBlockID())
		{
			BlockedEntry* temp = head;
			head =  head -> getNext();
			delete temp;
			
			cout << "\n\n deleted Successfully...";
			found++;
		}
		else
		{
			BlockedEntry* prev = head;		//privious node
			BlockedEntry* temp = head;		//current node
			
			while(temp != NULL) 
			{
				if(testId == temp -> getBlockID())
				{
					prev -> setNext(temp -> getNext()); 
					
					delete temp;
					cout << "\n\n deleted Successfully...";
					found++;
					break;
				}
				
				prev = temp;
				temp = temp -> getNext();
			}
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
}
void Blacklist :: removeByDomainName()
{
	system("cls");
	
	title();
	
	string testId = "";
	int found = 0;
	
	if(isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter Domain Name to remove : ";
		cin >> testId;
		
		if(testId == head -> getDomainName())
		{
			BlockedEntry* temp = head;
			head =  head -> getNext();
			delete temp;
			
			cout << "\n\n deleted Successfully...";
			found++;
		}
		else
		{
			BlockedEntry* prev = head;		//privious node
			BlockedEntry* temp = head;		//current node
			
			while(temp != NULL) 
			{
				
				if(testId == temp -> getDomainName())
				{
					prev -> setNext(temp -> getNext()); 
					
					delete temp;
					cout << "\n\n deleted Successfully...";
					found++;
					break;
				}
				
				prev = temp;
				temp = temp -> getNext();
			}
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
}
void Blacklist :: removeByIpAddress()
{
	system("cls");
	
	title();
	
	string testId = "";
	int found = 0;
	
	if(isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter IP Address to remove : ";
		cin >> testId;
		
		if(testId == head -> getIpAddress())
		{
			BlockedEntry* temp = head;
			head =  head -> getNext();
			delete temp;
			
			cout << "\n\n deleted Successfully...";
			found++;
		}
		else
		{
			BlockedEntry* prev = head;		//privious node
			BlockedEntry* temp = head;		//current node
			
			while(temp != NULL) 
			{
				
				if(testId == temp -> getIpAddress())
				{
					prev -> setNext(temp -> getNext()); 
					
					delete temp;
					cout << "\n\n deleted Successfully...";
					found++;
					break;
				}
				
				prev = temp;
				temp = temp -> getNext();
			}
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
}
		
void Blacklist :: excludeByCountry()
{
	system("cls");
	
	title();
	
	string testId = "";
	int found = 0;
	
	if(isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter country to remove : ";
		cin >> testId;
		
		if(testId == head -> getCountry())
		{
			BlockedEntry* temp = head;
			head =  head -> getNext();
			delete temp;
			
			cout << "\n\n deleted Successfully...";
			found++;
		}
		else
		{
			BlockedEntry* prev = head;		//privious node
			BlockedEntry* temp = head;		//current node
			
			while(temp != NULL) 
			{
				
				if(testId == temp -> getCountry())
				{
					prev -> setNext(temp -> getNext()); 
					
					delete temp;
					cout << "\n\n deleted Successfully...";
					found++;
					break;
				}
				
				prev = temp;
				temp = temp -> getNext();
			}
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
}


void Blacklist :: excludeByEntryDate()
{
	system("cls");
	
	title();
	
	string testId = "";
	int found = 0;
	
	if(isEmpty())
	{
		cout << "list is empty...";
	}
	else
	{
		cout << "\n\n enter entry date to remove : ";
		cin >> testId;
		
		if(testId == head -> getEntryDate())
		{
			BlockedEntry* temp = head;
			head =  head -> getNext();
			delete temp;
			
			cout << "\n\n deleted Successfully...";
			found++;
		}
		else
		{
			BlockedEntry* prev = head;		//privious node
			BlockedEntry* temp = head;		//current node
			
			while(temp != NULL) 
			{
				
				if(testId == temp -> getEntryDate())
				{
					prev -> setNext(temp -> getNext()); 
					
					delete temp;
					cout << "\n\n deleted Successfully...";
					found++;
					break;
				}
				
				prev = temp;
				temp = temp -> getNext();
			}
		}
		
		if(found == 0)
		{
			cout << "\n\n Invalid ID....";
		}
	}
}

