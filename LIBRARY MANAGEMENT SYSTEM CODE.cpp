using namespace std;
#include<iostream>  //For Input/Output
#include<string>   //For Strings
#include<chrono>  //For Access&Deal Time
#include<thread> //For efficiency of program make it to execute multiple tasks conqurently. 

//Main Menu Funtions
void bookmenu();
void membermenu();
void finedetails();
void profilemenu();
void rules();

//Book Menu Funtions
void searchbook();
void addbook();
void removebook();
void checkavailability();
void issuebook();
void bookdetails();
void totalbooks();
void checkLowBookAvailability();

//Member Menu Funtions
void searchmember();
void addmember();
void removemember();
void memberdetails();
void totalmembers();
void checkLowMemberCount();

//Rules & Regulations Functions
void libraryhours();
void borrowingprivileges();
void finepolicy();
void rights();

//max size of string 100 for adding books and members
const int max_size = 100;

// Predefined books
string bookIds[max_size] = {"101", "102", "103", "104", "105", "106", "107", "108", "109", "110"};
string bookNames[max_size] = {"Sapiens", "Dune", "IT", "1984", "Beloved", "Hatchet", "EMMA", "Speak", "Room", "Blink"};
string authors[max_size] = {"Yuval Noah Harari", "Frank Herbert", "Stefen king", "George Orwell", "Toni Morrison", "Gary Paulsen", "Jane Austen", "Laurie Halse Anderson", "Emma Donoghue", "Malcolm Gladwell"};
string publishedDates[max_size] = {"2014", "1965", "1986", "1949", "1987", "1986", "1815", "1999", "2010", "2005"};
bool availability[max_size] = {true, true, true, true, true, true, true, true, true, true};
string issuedToMemberIds[max_size] = {"N/A", "N/A", "N/A", "N/A", "N/A","N/A","N/A","N/A","N/A","N/A"};
int totalBooks = 10;

// Predefined members
string memberIds[max_size] = {"1001", "1002", "1003", "1004", "1005", "1006", "1007", "1008", "1009", "1010"};
string memberNames[max_size] = {"Hassan", "Mian Moaz", "Mian Ahmar", "Talha AR", "Hasnain Sandhu", "Sikander", "Umm E Salma", "Rumaisa", "Raghad Zia", "Noor Malik"};
string rollNos[max_size] = {"1068", "1052", "1056", "1080", "1065","1079", "1095", "1089", "1101", "1102"};
string departments[max_size] = {"CS", "CS", "CS", "SE", "AI","CS", "AI", "BS", "TT", "FD"};
int totalMembers = 10;

int main()
{
	cout<<"========================================================"<<endl;
	cout<<"              National Textile University               "<<endl;  //Start screen
	cout<<"========================================================"<<endl;
	cout<<"          Welcome To Library Management System          "<<endl;  //Start screen
	cout<<"========================================================"<<endl;
	bool check = false;
	int attempts = 0;
	while(!check)
	{
	  string name;
	  int pass;
	  cout<<"Enter Admin Username (Usename is Admin) : ";
	  cin>>name;
	  cout<<"Enter Password (Password is 1234) : ";
	  cin>>pass;
	  cout<<"========================================================"<<endl;
	   if(name=="Admin"&&pass==1234)//Username and Password
	   {
	   	cout<<"                 Login Successful"<<endl;
	   	cout<<"========================================================"<<endl;
	   	check =  true;
	   }
	   else
	   {
	   	attempts++;//For Checking Attempts for password
	   	cout<<"Invalid Username or Password"<<endl;
	   	cout<<"========================================================"<<endl;
	   	if(attempts>=3)//Three Attempts
	   		{
	   	cout<<"To many attempts.Try Again."<<endl;
		cout<<"========================================================"<<endl;
	   	return 0;//If password is wrong three times.Program Exits.
	    	}
	   }
    }
    cout<<endl;
	   int input;//For selecting option in Main Menu
	   while(true)
	   {
	     cout<<"========================================================"<<endl;
	     cout<<"                   Main Menu                            "<<endl;
	     cout<<"========================================================"<<endl;
	     cout<<"Choose a option                                         "<<endl;
	     cout<<"1. Books Details                                        "<<endl;
	     cout<<"2. Members Details                                      "<<endl;
	     cout<<"3. Fine Details                                         "<<endl;
	     cout<<"4. Rules & Regulations                                  "<<endl;
	     cout<<"5. Personal Profile                                     "<<endl;
	     cout<<"6. Exit                                                 "<<endl;
	     cout<<"========================================================"<<endl;
	     cin>>input;
	     switch(input)
	    	{
	    	case 1:
	    		bookmenu();//For Book Menu
	    		break;
	    	case 2:
	    		membermenu();//For Member Menu
	    		break;
	    	case 3:
	    		finedetails();//For Fine details
	    		break;
	    	case 4:
	    		rules();//For Library Rules & Regulations
	    		break;
	    	case 5:
	    		profilemenu();//For Personal Profile Menu
	    		break;
	    	case 6:
	    		cout<<"Good Bye.Thanks For Coming"<<endl;
	    		return 0;//Exiting Program
	    	default:
	    		cout<<"Invalid Option"<<endl;
			}
       }
}
	
void bookmenu()
{
		int op;//For selecting option in Book Menu
		while(true)
		{
		   cout<<"========================================================"<<endl;
		   cout<<"Choose a option                                         "<<endl;
	       cout<<"1. Search a book                                        "<<endl;
	       cout<<"2. Add a book                                           "<<endl;
	       cout<<"3. Remove a book                                        "<<endl;
	       cout<<"4. Check Availability                                   "<<endl;
	       cout<<"5. Issue a book                                         "<<endl;
	       cout<<"6. Display all book & their details                     "<<endl;
	       cout<<"7. Total books                                          "<<endl;
	       cout<<"8. Exit                                                 "<<endl;
	       cout<<"========================================================"<<endl;
	       cin>>op;
	       switch(op)
	        {
	       	case 1:
	       	 	searchbook();//For search a book
	       	 	break;
	       	case 2:
	       		addbook();//For add a book
	       		break;
	       	case 3:
	       		removebook();//For remove a book
	       		break;
	       	case 4:
	       		checkavailability();//For Checkavailability the book is available or issue
	       		break;
	       	case 5:
	       		issuebook();//For issue a book
	       		break;
	       	case 6:
	       		bookdetails();//For Book Details
	       		break;
	       	case 7:
	       		totalbooks();//Total Number of books
	       		break;
	       	case 8:
	       		return;//For exiting Book Menu
	       	default:
	       		cout<<"Invalid Option"<<endl; 
		    }
		   checkLowBookAvailability();//Checks quantity of books
		}
}

void membermenu()
{
		int option;//For selecting option in Member menu
		while(true)
		{
		   cout<<"========================================================"<<endl;
		   cout<<"Choose a option                                         "<<endl;
	       cout<<"1. Search a member                                      "<<endl;
	       cout<<"2. Add a member                                         "<<endl;
	       cout<<"3. Remove a member                                      "<<endl;
	       cout<<"4. Display all members & their details                  "<<endl;
	       cout<<"5. Total members                                        "<<endl;
	       cout<<"6. Exit                                                 "<<endl;
	       cout<<"========================================================"<<endl;
	       cin>>option;
	       switch(option)
   	        {
	       	case 1:
	       	 	searchmember();//For search a member
	       	 	break;
 	       	case 2:
	       		addmember();//For add a member
	       		break;
	       	case 3:
	       		removemember();//For remove a member
	       		break;
	       	case 4:
	       		memberdetails();//For Member details
	       		break;
	       	case 5:
	       		totalmembers();//Total Members in Library
	       		break;
	       	case 6:
	       		return;//Exiting Member Menu
	       	default:
	       		cout<<"Invalid Option"<<endl; 
		    }
		   checkLowMemberCount();//checks quantity of members
		}
}

void finedetails() 
{
    string id;
    cout << "Enter Book ID to check Fine: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) 
	{
        if (bookIds[i] == id) 
		{
            cout << "Book Found: " << bookNames[i] << endl;
            cout << "Fined: " << (availability[i] ? "No" : "Yes") << endl;

            if (!availability[i]) 
			{
                cout << "Issued to Member ID: " << issuedToMemberIds[i] << endl;

                int fineAmount = 5; // Fine of 5 rupees every 10 seconds
                int totalFine = 0;
                char choice;

                do 
				{
                    totalFine += fineAmount; // Adding the fine after each display
                    cout << "Fine: " << totalFine << " Rupees" << endl;
                    cout << "Do you want to continue? (y/n): ";
                    cin >> choice;
                    this_thread::sleep_for(chrono::seconds(5)); // Sleep for 5 seconds
                }
				while (choice == 'y' || choice == 'Y'); // Continue until the user chooses to exit

                if (choice == 'n' || choice == 'N') 
				{
                    cout << "Exiting fine calculation for this book." << endl;
                }
            }
        }
    }
    cout<<"Book not found"<<endl;
}

	
void rules()
{
	int inp;//For selecting option in Rules&Regulation Funtions
	while(true)
	{
		cout<<"========================================================"<<endl;
		cout<<"Choose a option                                         "<<endl;
		cout<<"1. Library  Hours Details                               "<<endl;
	    cout<<"2. Borrowing Privilieges                                "<<endl;
	    cout<<"3. Fine Policy                                          "<<endl;
	    cout<<"4. University Rights                                    "<<endl;
	    cout<<"5. Exit                                                 "<<endl;
	    cout<<"========================================================"<<endl;
	    cin>>inp;
	       switch(inp)
	        {
	       	case 1:
	       	 	libraryhours();
	       	 	break;
 	       	case 2:
				borrowingprivileges();
	       		break;
	       	case 3:
				finepolicy();
	       		break;
	       	case 4:
				rights();
                break;
	       	case 5:
	       	    return;
	       		break;
	       	default:
	       		cout<<"Invalid Option"<<endl; 
		    }
		}
}
	
void profilemenu()
{
		cout<<"========================================================"<<endl;
		cout<<"Name :                 |     Muhammad                   "<<endl;
		cout<<"F.Name :               |     Muhammad                   "<<endl;
		cout<<"Contact No :           |     0000-0000000               "<<endl;
		cout<<"CNIC No :              |     00000-0000000-0            "<<endl;
		cout<<"Address :              |     Faisalabad                 "<<endl;
		cout<<"Education :            |     Ph.D. in Computer Science  "<<endl;
		cout<<"Institute Name :       |     National Textile University"<<endl;
		cout<<"========================================================"<<endl;
	
}

void addbook() 
{
    if (totalBooks >= max_size) 
	{
        cout << "Book storage is full!" << endl;
        return;
    }

    string id, name, author, date;
    cout << "Enter Book ID: ";
    cin >> id;
    cout << "Enter Book Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter Published Year: ";
    cin >> date;

    bookIds[totalBooks] = id;
    bookNames[totalBooks] = name;
    authors[totalBooks] = author;
    publishedDates[totalBooks] = date;
    availability[totalBooks] = true;
    issuedToMemberIds[totalBooks] = "N/A";
    totalBooks++;

    cout << "Book added successfully!" << endl;
}

void removebook() 
{
    string id;
    cout << "Enter Book ID to remove: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) 
	{
        if (bookIds[i] == id) 
		{
            for (int j = i; j < totalBooks - 1; j++) 
			{
                bookIds[j] = bookIds[j + 1];
                bookNames[j] = bookNames[j + 1];
                authors[j] = authors[j + 1];
                publishedDates[j] = publishedDates[j + 1];
                availability[j] = availability[j + 1];
                issuedToMemberIds[j] = issuedToMemberIds[j + 1];
            }
            totalBooks--;
            cout << "Book removed successfully!" << endl;
            return;
        }
    }
    cout << "Book not found!" << endl;
}
 

void searchbook() 
{
    string id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) 
	{
        if (bookIds[i] == id) 
		{
            cout << "Book Found: " << bookNames[i] << endl;
            cout << "Author: " << authors[i] << endl;
            cout << "Published Year: " << publishedDates[i] << endl;
            cout << "Availability: " << (availability[i] ? "Available" : "Issued") << endl;
            if (!availability[i]) 
			{
                cout << "Issued to Member ID: " << issuedToMemberIds[i] << endl;
            }
            return;
        }
    }
    cout << "Book not found." << endl;
}

void checkavailability() 
{
    string id;
    cout << "Enter Book ID to check availability: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) 
	{
        if (bookIds[i] == id) 
		{
            cout << "Book is " << (availability[i] ? "Available" : "Issued") << endl;
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void issuebook() 
{
    string id, memberId;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) 
	{
        if (bookIds[i] == id) 
		{
            if (!availability[i]) 
			{
                cout << "Book is already issued!" << endl;
                return;
            }
            cout << "Enter Member ID: ";
            cin >> memberId;

            for (int j = 0; j < totalMembers; j++) 
			{
                if (memberIds[j] == memberId) 
				{
                    availability[i] = false;
                    issuedToMemberIds[i] = memberId;
                    cout << "Book issued successfully!" << endl;
                    return;
                }
            }
            cout << "Member not found!" << endl;
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void bookdetails() 
{
    cout << "\nBook Details:\n";
    for (int i = 0; i < totalBooks; i++) 
	{
        cout << "ID: " << bookIds[i] << ", Name: " << bookNames[i]
             << ", Author: " << authors[i] << "\nPublished: " << publishedDates[i]
             << ", Availability: " << (availability[i] ? "Available" : "Issued")
             << ", Issued To: " << issuedToMemberIds[i] << endl;
    }
}

void totalbooks()
{
	cout<<"Total Books in Library : "<<totalBooks<<endl;
}

void checkLowBookAvailability() 
{
    int remainingBooks = 0;
    for (int i = 0; i < totalBooks; i++) 
	{
        if (availability[i]) 
		{
            remainingBooks++;
        }
    }
    if (remainingBooks <= 2) 
	{
        cout << "Warning: Only " << remainingBooks << " books remaining in the library!" << endl;
    }
}

void searchmember() 
{
    string id;
    cout << "Enter Member ID to search: ";
    cin >> id;

    for (int i = 0; i < totalMembers; i++) 
	{
        if (memberIds[i] == id) 
		{
            cout << "Member Found: " << memberNames[i] << ", Roll No: " << rollNos[i] << ", Department: " << departments[i] << endl;
            for (int j = 0; j < totalBooks; j++) 
			{
                if (issuedToMemberIds[j] == id) 
				{
                    cout << "Issued Book: " << bookNames[j] << endl;
                }
            }
            return;
        }
    }
    cout << "Member not found!" << endl;
}

void addmember() 
{
    if (totalMembers >= max_size) 
	{
        cout << "Member storage is full!" << endl;
        return;
    }

    string id, name, rollNo, department;
    cout << "Enter Member ID: ";
    cin >> id;

    cout << "Enter Member Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Roll No: ";
    getline(cin, rollNo);
    cout << "Enter Department: ";
    getline(cin, department);

    memberIds[totalMembers] = id;
    memberNames[totalMembers] = name;
    rollNos[totalMembers] = rollNo;
    departments[totalMembers] = department;
    totalMembers++;

    cout << "Member added successfully!" << endl;
}

void removemember()
{
    string id;
    cout << "Enter Member ID to remove: ";
    cin >> id;

    for (int i = 0; i < totalMembers; i++) 
	{
        if (memberIds[i] == id) 
		{
            for (int j = i; j < totalMembers - 1; j++) 
			{
                memberIds[j] = memberIds[j + 1];
                memberNames[j] = memberNames[j + 1];
                rollNos[j] = rollNos[j + 1];
                departments[j] = departments[j + 1];
            }
            totalMembers--;
            cout << "Member removed successfully!" << endl;
            return;
        }
    }
    cout << "Member not found!" << endl;
}


void memberdetails()
{
    cout << "\nMember Details:\n";
    for (int i = 0; i < totalMembers; i++) 
	{
        cout << "ID: " << memberIds[i] << ", Name: " << memberNames[i] << "\nRoll No: " << rollNos[i] << ", Department: " << departments[i] << endl;
    }
}

void totalmembers()
{
	cout<<"Total Members in Library : "<<totalMembers<<endl;
}

void checkLowMemberCount()
{
    if (totalMembers <= 2)
	{
        cout << "Warning: Only " << totalMembers << " members left!" << endl;
    }

    if (totalMembers >= 100)
	{
        cout << "Warning: Member limit reached out!" << endl;
    }
}

void libraryhours()
{
	cout<<"========================================================"<<endl;
    cout<<"                   Library Hours Details                "<<endl;	
	cout<<"========================================================"<<endl;
	cout<<"Library opens seven days a week according to the        "<<endl;
	cout<<"following schedule:                                     "<<endl;
	cout<<"Monday-Thursday           |   08:30 am to 09:00 pm      "<<endl;
	cout<<"Friday                    |   08:30 am to 04:40 pm      "<<endl;
	cout<<"Saturday & Sunday         |   02:00 pm to 09:00 pm      "<<endl;
	cout<<"There will be one-hour Prayer/Lunch break, as notified  "<<endl;
	cout<<"by the administration.                                  "<<endl;
    cout<<"========================================================"<<endl;
}

void borrowingprivileges()
{
	cout<<"========================================================"<<endl;	
	cout<<"                  Borrowing Privileges                  "<<endl;
	cout<<"========================================================"<<endl;
	cout<<"1. Students can borrow three books for 21 days.         "<<endl;
	cout<<"2. Borrowing facility is not available to NTU Alumni and"<<endl;
	cout<<"   students reffered from other institutions, however   "<<endl;
	cout<<"   other library services are available accordingly.    "<<endl;
	cout<<"3. Some materials, such as reference books, press       "<<endl;
	cout<<"   clippings, CD-ROMs, current periodicals, or  any     "<<endl;
	cout<<"   other publication marked as reference/reserved will  "<<endl;
	cout<<"   not be circulated/issued.                            "<<endl;
	cout<<"========================================================"<<endl;
}

void finepolicy()
{
	cout<<"========================================================"<<endl;
	cout<<"                       Fine Policy                      "<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Studnts incur fines as follows:                         "<<endl;
	cout<<"1. Overdue Books                                        "<<endl;
	cout<<"   Rs. 5/- per book per day                             "<<endl;
	cout<<"2. Lost Books                                           "<<endl;
	cout<<"   In case of loss or damage, a sum of three-time cost  "<<endl;
	cout<<"   of the original price along with overdue fine will be"<<endl;
	cout<<"   charged.                                             "<<endl;
	cout<<"3. Reserve Material                                     "<<endl;
	cout<<"   This material is issued with the written permission  "<<endl;
	cout<<"   from the Senior Librarian for three hours, overnight,"<<endl;
	cout<<"   and three days only. A fine Rs.10 per each extra hour"<<endl;
	cout<<"   /day will be charged.                                "<<endl;
	cout<<"4. Theft                                                "<<endl;
	cout<<"   The wilful damage or theft of library materials will "<<endl;
	cout<<"   result in an automatic refferal to the university    "<<endl;
	cout<<"   administration and may lead to suspension from the   "<<endl;
	cout<<"   university.                                          "<<endl;
	cout<<"Note :  Users are required to pay fines and fees in the "<<endl;
	cout<<"        bank. NTU Library does not deal in any cash     "<<endl;
	cout<<"        transaction.                                    "<<endl;
	cout<<"========================================================"<<endl;
}

void rights()
{
	cout<<"========================================================"<<endl;
	cout<<"                    University Rights                   "<<endl;
	cout<<"========================================================"<<endl; 
	cout<<"1. The University reserves the rights to modify or      "<<endl;
	cout<<"   cancel, without notice, any statement or service in  "<<endl;
	cout<<"   the rules and regulations.                           "<<endl;
	cout<<"2. Please contact the Library HOD/CIRCULATION DESK for  "<<endl;
	cout<<"   further enquiries.                                   "<<endl;
	cout<<"3. Your feedback is welcome that will enable the Library"<<endl;
	cout<<"   Administration to refine and enhance the information "<<endl;
	cout<<"   services.                                            "<<endl;
	cout<<"4. Your cooperation urges us to serve you better.       "<<endl;
	cout<<"========================================================"<<endl;
}



