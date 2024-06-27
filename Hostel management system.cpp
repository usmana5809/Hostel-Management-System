#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
class management{
	protected:
		int fine[200],bill[200];
	public:
	void manage()
	{
		cout<<"\nEach Hostel Has... ";
		cout<<"\n--> Separate hostel mess system.";
		cout<<"\n--> One cook for kitchen.";
		cout<<"\n--> Four sweepers.";
		cout<<"\n--> Five guards.";
		cout<<"\n--> One serving boy.";
	}
};
class hostel1:public management{
	public:
		string s_name[201],f_name[201],s_rolno[201],s_idno[201];
		int no[201],i,z,num;
		char y;
	public:
	void s_input()
	{ system("cls")	;
		cout<<"\n\t\t================================= ( ENTERIES OF THE STUDENTS ) ===========================\n";	
		while(z=200)
		{
		cout<<"\nEnter the student number = ";
		cin>>num;
		if(num<201)
		{	
		for(int i=num; i<201; i++)
			{
			cout<<"\n =========>> Enter the Information of "<<i<<" Student";
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student name = ";
			cin>>s_name[i];
			cout<<"\nEnter student father name = ";
			cin>>f_name[i];
			cout<<"\nEnter student rollno = ";
			cin>>s_rolno[i];
			cout<<"\nDo you want enter more entries of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			
		}
		else
		cout<<"\nSeats are fulled";
		Sleep(3000);
		break;
		}
		stu1_entrymenu();
		system("cls");
	}	
	
void s_output(){
	system("cls");
	string n;
	fstream hstl_stu1;
	hstl_stu1.open("1.Student1.txt",ios::app|ios::out);
	for(int i=num; i<201; i++)
	{	hstl_stu1.read((char *)this, sizeof(hstl_stu1));
		cout<<"\n\t*****  Record Of "<<i+1<<" Student  ******\n";
	    cout<<"\nEnte Student ID no which you want to see : ";
	    cin>>n;
	    hstl_stu1>>s_idno[i];
	   if(n==s_idno[i])
	   {	cout<<"\n\t==> Student idno : "<<s_idno[i];		
			cout<<"\n\t==> Student name : "<<s_name[i];
			cout<<"\n\t==> Student father name : "<<f_name[i];
			cout<<"\n\t==> Student rollno : "<<s_rolno[i];
			hstl_stu1<<"\n\t==> Student idno : "<<s_idno[i];		
			hstl_stu1<<"\n\t==> Student name : "<<s_name[i];
			hstl_stu1<<"\n\t==> Student father name : "<<f_name[i];
			hstl_stu1<<"\n\t==> Student rollno : "<<s_rolno[i];	
			Sleep(3000);
		}
		else
		{
			cout<<"\nYou Enter Wrong choice :";	
			Sleep(3000);	
		}	
		cout<<"\nDo you want to see more entries of students [y/n]? ";
		cin>>y;
		if(y=='n')
		break;
	}
		hstl_stu1.close();
		cout<<"\nStudent1 File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
stu1_entrymenu();	}
	
	void stu1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO STUDENT MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter   the Data of the students";
	cout<<"\n\t\t\t\t  2-Display the Data of the students";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				s_input();	
					break;
				case 2:
				s_output();
					break;
				case 3:
				
					break;
			}
   }			
};
class mess1:public hostel1{
	private:
		int item_no[8],no;
		string m_first[8],m_second[8],m_day[8];
		char m_ch,m_ch1;
	public:
	void m_menuinput()
	{system("cls");
		cout<<"\n\n\t\t ====================== >>>>>>> Design Menu <<<<<<<< =====================";
			for(int i=1; i<7; i++ )
		{
		cout<<"\nEnter day for meal = ";
		cin>>m_day[i];	
		cout<<"\nEnter Item no = ";
		cin>>item_no[i];
		cout<<"\nEnter your meal of first time = ";
		cin>>m_first[i];
		cout<<"\nEnter your meal  of second time = ";
		cin>>m_second[i];
		}
		mess1_menu();
	}
	void m_menuoutput()
	{system("cls");
		cout<<"\n\n\t\t ==================== >>>>>>Welcome to Mess Menu System <<<<<< ====================\n\n";
		ofstream mess1;
		mess1.open("1.mess1.txt",ios::app|ios::out);
		cout<<"\n\t\t\tItemno\t\t\tFirst Time\t\t\tSecond Time";
		for(int i=1; i<7; i++ )
		{
		cout<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		mess1<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		}
		Sleep(2000);
		mess1.write((char *)this, sizeof(mess1));
		mess1.close();
		cout<<"\nMess1 File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		
	}
	void h1_breakfast()
	{
		
			cout<<"\n\n\t\t ========= >>> BREAKFAST <<< =======\n ";
			cout<<"\n = >> Do you want to eat breakfast...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes == >> "<<m_first[i];
				}
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nSee you next time ";
			Sleep(3000);	
			}
			mess1_menu();
	}
	
	void h1_dinner()
	{
	
			cout<<"\n\n\t\t ======== >>> DINNER <<< ========\n ";	
			cout<<"\nDo you want to eat dinner...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes ("<<m_second[i]<<" )";
				}				
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nsee you next time ";	
			Sleep(3000);
			}
			mess1_menu();
	}
	void mess1_menu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO MESS MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n\t\t select one of them ";
		cout<<"\n\t\t 1-To Design the mess menu";
		cout<<"\n\t\t 2-Breakfast";
		cout<<"\n\t\t 3-Dinner";
		cout<<"\n\t\t 4-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
					m_menuinput();
					break;
				case 2:
					m_menuoutput();
					h1_breakfast();
					break;
				case 3:
					m_menuoutput();
					h1_dinner();
					break;
				case 4:
					break;
					
			}
   }		
			
		
	
};
class guests1:public hostel1{
	hostel1 h1;
		public:
		int g_no,g_bil[4],no,g_idno[4];
		string g_name[4],n[200],s_idno1[201];
		char g_ch;
	public:
	void g_input1()
	{	system("cls");
		int z;
		while(z=200)
		{
		
		cout<<"\n\t============================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< =============================\n\n";
		cout<<"\n ==> 1.You have granted permission for your guest from hostel.....'y/n'";
		cout<<"\nEnter Your choice = ";
		cin>>g_ch;
		char y;
		if(g_ch=='y')
		{
			cout<<"\n ==>2.Three guests are allowed for each student";
			
		for(int i=1; i<200;i++)
			{
				cout<<"\nEnter guest no = ";
				cin>>no;
				cout<<"\nEnter your Id no For Your Guest = ";
				cin>>s_idno1[i];
					if(no<4)
					{
						for(int i=1; i<4; i++)
						{
						cout<<"\nGuest Details for "<<s_idno1[i]<<" Student ";
						cout<<"\nEnter Guest Idno = ";
						cin>>g_idno[i];
						cout<<"\nEnter Guest name = ";
						cin>>g_name[i];
						cout<<"\nEnter Guest Mess Bill = ";
						cin>>g_bil[i];
						cout<<"\nDo you have more guests [y/n]? ";
						cin>>y;
						if(y=='n')
						break;
						}	
					}
					else
					{
					cout<<"\nOnly 3 guests are allowed"	;
					Sleep(3000);
					}
				
				break;}
		}
		else
		cout<<"\nSorry....you didn't granted permission.....\n\t_________________Guest is not allowed____________";
		Sleep(3000);
	break;
	}
	gust1_entrymenu();
	}

	void g_output1()
	{system("cls");
		hostel1 h1;
		int n1;
		string nn;
		char y;	
		int z;
			cout<<"\n\t===================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< ===========================\n\n";
			fstream guest1;
			guest1.open("1.guest1.txt",ios::app|ios::out);
			cout<<"\n Guest details you want ";
		for(int i=1;i<201;i++)
		{
			cout<<"\nEnter your  idno = ";
			cin>>nn;
			if(nn==s_idno1[i])
				{		
						cout<<"\n\t==> Guests Of Student : "<<s_idno1[i];
						cout<<"\n\t==> GUEST NO : "<<no;
						//cout<<"\n\t==> Student id no = "<<h1.s_idno[i];
					
					//	cout<<"\n\t==> Guest of student = "<<h1.s_name[i];
						cout<<"\n\t==> Guest Idno = "<<g_idno[i];
						cout<<"\n\t==> Guest name = "<<g_name[i];
						cout<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
						guest1<<"\n\t==> Student id no = "<<h1.s_idno[i];
						guest1<<"\n\t==> Guest of student = "<<h1.s_name[i];
						guest1<<"\n\t==> Guest Idno = "<<g_idno[i];
						guest1<<"\n\t==> Guest name = "<<g_name[i];
						guest1<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
				}
				else
				{
				cout<<"\n You Entered wrong idno....\n";
				Sleep(3000);	
				}
			cout<<"\nDo you want to see more deatails of your guests [y/n]? ";
			cin>>y;
			if(y=='n')
			break;
		}
			guest1.write((char *)this, sizeof(guest1));
			cout<<"\nGuests File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			guest1.close();	
			Sleep(3000);		
			gust1_entrymenu();			
		}
void gust1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO GUESTS MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter    Data of the guests";
	cout<<"\n\t\t\t\t  2-Display  Data of the guests";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				g_input1();	
					break;
				case 2:
				g_output1();
					break;
				case 3:
				
					break;
			}
   }				
};
class clothes1:public hostel1	
	{
	private:
	int iron,wash;
	char c_ch;
	public:
	void clothes()
	{system("cls");
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO CLOTHES MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\t==> Rs.5 Piece for ironing \n\t==> RS.12 Piece for washing \n\t==> You can uses this facility at least once a week.";
		cout<<"\n\n\n\tHave you used this facility before...?____'y/n' ";
		cin>>c_ch;
		if(c_ch=='n')
		{
			cout<<"\nHow many clothes you want to ironing = ";
			cin>>iron;
			cout<<"\nHow many clothes you want to washing = ";
			cin>>wash;
			ofstream clothes1;
			clothes1.open("4.clothes1.txt",ios::app|ios::out);
			int t_iron=iron*5;
			int t_wash=wash*12;
			int t_clothes=t_iron+t_wash;
			int h_share=((t_iron+t_wash)*15)/100;
			int t_income=t_clothes-h_share;
			cout<<"\n\n\t ======= >>>>> Deatails Are <<<<< ==========\n\n";
			cout<<"\n\t==>Ironing Rs."<<t_iron;
			cout<<"\n\t==>Washing Rs."<<t_wash;
			cout<<"\n\t==>Hostel Share Rs."<<h_share;
			cout<<"\n\t==>Total Income Rs."<<t_income;
			clothes1<<"\n\t==>Ironing Rs."<<t_iron;
			clothes1<<"\n\t==>Washing Rs."<<t_wash;
			clothes1<<"\n\t==>Hostel Share Rs."<<h_share;
			clothes1<<"\n\t==>Total Income Rs."<<t_income;
			Sleep(3000);
			clothes1.write((char *)this, sizeof(clothes1));
			cout<<"\n\n\nClothes File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			clothes1.close();	
		}
		else
		cout<<"\n\t------------Not Allowed-------------\n\tYou can use this facility agian in next week____!!!";	
		Sleep(3000);
	}	
	};
class security1:public guests1{
	hostel1 h1;
	guests1 g1;
	private:
	int n;
	char y;
	public:
		void sec_input()
		{system("cls");
			ofstream h1_gstlist;
			h1_gstlist.open("1.Guestlist1.txt",ios::app|ios::out);
			
			cout<<"\n\n\t\t ==================== >>>>>> List Of Guests  <<<<<< ====================";
			for(int i=1;i<200;i++)
			{
			//	if(s_idno[i]==g_idno[i])
				{
				cout<<"\n\t==> Guest of student = "<<g1.s_idno1[i];	
				h1_gstlist<<"\n\t==> Guest of student = "<<g1.s_idno1[i];
				for(int i=1;i<4;i++)
				{
				cout<<"\n\t==> Guest Idno = "<<g1.g_idno[i];	
				h1_gstlist<<"\n\t==> Guest Idno = "<<g1.g_idno[i];
				cout<<"\nDo you want to exit [y/n]? ";
				cin>>y;
				if(y=='y')
				break;
				}
				break;
				}
				
			}
			h1_gstlist.write((char *)this, sizeof(h1_gstlist));
			cout<<"\nGuest list file for hostel1 is sucessfully created......";
			h1_gstlist.close();
			Security_menu();
		}
	void duty()
		{
			system("cls");
			string day_name[3],night_name[3],control_name[2];
			ofstream h1_sec2;
			cout<<"\n\n\t ==================== Duties ==================== ";
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in day time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>day_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in night time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>night_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the chief who will perform thier duty in control room ";
			for(int i=1;i<2;i++)
			{
				cout<<"\nEnter the chief name = ";
				cin>>control_name[i];
			}
			
			for(int i=1; i<3; i++)
			{
			h1_sec2.open("1.Duty1.txt",ios::app|ios::out);
			cout<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			cout<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			cout<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			h1_sec2<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			h1_sec2<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			h1_sec2<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			Sleep(3000);
			break;
			}
			h1_sec2.write((char *)this, sizeof(h1_sec2));
			cout<<"\nDuty  File for hostel1 is sucessfully created......";
			h1_sec2.close();
			Security_menu();
		}
	void trip()
		{
			system("cls");
			ofstream h1_sec3;
			h1_sec3.open("1.trip1.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t==================== Hostel1 Trip Plans  ====================";
 			cout<<"\n\t--> Trip to Naran ";
 			cout<<"\n\t-->  Trip to Parks";
 			cout<<"\n\t-->  Trip to Muree ";
 			cout<<"\n\t-->  BoneFire once a Month";
 			Sleep(3000);
 			h1_sec3<<"\n\t--> Trip to Naran ";
 			h1_sec3<<"\n\t-->  Trip to Parks";
 			h1_sec3<<"\n\t-->  Trip to Muree ";
 			h1_sec3<<"\n\t-->  BoneFire once a Month";
 			h1_sec3.write((char *)this, sizeof(h1_sec3));
			cout<<"\nTrip File of hostel1 is sucessfully created......";
			h1_sec3.close();
			Security_menu();
			
			
		}
	void lost()
		{
			system("cls");
			ofstream h1_sec4;
			h1_sec4.open("1.lost1.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t\t==================== Lost Things Fine ==================== ";
	  		cout<<"\n\n\t---------------------------";
	  		cout<<"\n\tName\t\tFine ";
	  		cout<<"\n\tRoom keys ------>Rs.100";
	  		cout<<"\n\tMobile --------->Rs.200";
	  		cout<<"\n\tUtensils ------->Rs.500";
	  		cout<<"\n\tChargers ------->Rs.500";
	  		cout<<"\n\tLate Coming----->Rs.150";
	  		Sleep(3000);
	  		h1_sec4<<"\n\tName\t\tFine ";
	  		h1_sec4<<"\n\tRoom keys ------>Rs.100";
	  		h1_sec4<<"\n\tMobile --------->Rs.200";
	  		h1_sec4<<"\n\tUtensils ------->Rs.500";
	  		h1_sec4<<"\n\tChargers ------->Rs.500";
	  		h1_sec4<<"\n\tLate Coming----->Rs.150";
			cout<<"\n\n\t---------------------------";
			h1_sec4.write((char *)this, sizeof(h1_sec4));
			cout<<"\nLost File of hostel1 is sucessfully created......";
			h1_sec4.close();
			Security_menu();
		}
   void Security_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SECURITY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Guests Datails";
			cout<<"\n\t --> 2-Duties";
			cout<<"\n\t --> 3-Trip";
			cout<<"\n\t --> 4-Lost Things";
			cout<<"\n\t --> 5-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					sec_input();
					break;
				case 2:
					duty();
					break;
				case 3:
					trip();
					break;
				case 4:
					lost();
					break;
				case 5:
					
					break;
			}
			
   }
};

class salary1:public hostel1{
	private:
		int student=15000;
		int manager=25000;
		int cook =15000;
		int sweepers=10000;
		int guards=15000;
		int servingboy=5000;
		public:
		void h1_salary()
		{
		system("cls");
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook;
		ofstream h1_salary;
		h1_salary.open("1.salary1.txt",ios::app|ios::out);
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SALARY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\n\t--> Total income:      Rs."<<t_income;	
		cout<<"\n\t--> Salary of manager: Rs."<<manager;
		cout<<"\n\t--> Salary Cook:       Rs."<<cook;
		cout<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		cout<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		cout<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary<<"\n\n\t--> Total income:      Rs."<<t_income;	
		h1_salary<<"\n\t--> Salary of manager: Rs."<<manager;
		h1_salary<<"\n\t--> Salary Cook:       Rs."<<cook;
		h1_salary<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		h1_salary<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		h1_salary<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary.write((char *)this, sizeof(h1_salary));
		cout<<"\nSalary File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_salary.close();	
		}	
};
class manag1 : public management,guests1
{
	guests1 g1;
	private:
	string	fines;
	int	fine[201],mess[201],t_bill[201],g_bill[201],s_dues[201],num,s_idno[201],no;
	char y;
	int student=15000,manager=25000,cook =15000,sweepers=10000, guards=15000,servingboy=5000;
	int	roomkeys=100,mobile =200,utensils=500,chargers=500,latecoming=150;
	security1 sec1;
	
	public:
	void bill()
	{system("cls");
	cout<<"\n\t==================== STUDENT FINE INFORMATION ====================";
		
		ofstream h1_fine1;
		h1_fine1.open("1.Fine1.txt",ios::app|ios::out);
		for(int i=1;i<201;i++)
		{	cout<<"\nDo you have any fine.....[y/n]?";
			cin>>y;
			if(y=='y')
			{	
				cout<<"\n\n\tName\t\tFine ";
	  			cout<<"\n\tRoom keys ------>Rs.100";
	  			cout<<"\n\tMobile --------->Rs.200";
	  			cout<<"\n\tUtensils ------->Rs.500";
	  			cout<<"\n\tChargers ------->Rs.500";
	  			cout<<"\n\tLate Coming----->Rs.150\n\n";
				cout<<"\nwhat kind of fine you have \nEnter Your Fine Name = ";
				cin>>fines;
				if(fines =="roomkeys")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines == "mobile")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="utensils")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="chargers")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="latecoming")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
					cout<<"\ndo you want to enter more entries [y/n]? ";
					cin>>y;
					if(y=='n')
					break;	
			}
		
		}
		h1_fine1.write((char *)this, sizeof(h1_fine1));
		h1_fine1.close();
		cout<<"\nFine File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();	
		bill_menu();
	}
	
	
	void hostelprofit()
	{
		system("cls");
	cout<<"\n\t==================== HOSTEL PROFIT INFORMATION ====================\n\n";
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int t_electric=200*4000;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook-t_electric;
	
		ofstream h1_profit;
		h1_profit.open("1.Hostel1 profit.txt",ios::app|ios::out);
		cout<<"\n\n\t ==> Total Hostel income : "<<t_income;
		cout<<"\n\t ==> Hostel profit         : "<<r_income;
		h1_profit<<"\n ==> Total Hostel income = "<<t_income;
		h1_profit<<"\n ==> Hostel profit = "<<r_income;
		h1_profit.write((char *)this, sizeof(h1_profit));
		h1_profit.close();
		cout<<"\nHostel profit File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
	bill_menu();
		
	}	
	void studentdues_input()
	{system("cls");
		cout<<"\n\t==================== ENTER STUDENT DUES INFORMATION ====================";
		cout<<"\n\t==>Enter student number ";
		cin>>num;
		for(int i=num; i<201; i++)
			{
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student dues = ";
			cin>>s_dues[i];
		   cout<<"\nDo you want to enter more dues of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			bill_menu();
	}
	void studentdues_output()
	{system("cls");
		cout<<"\n\t==================== STUDENT DUES INFORMATION ====================";
		ofstream h1_dues;
		h1_dues.open("1.Student Dues1.txt",ios::app|ios::out);
			for(int i=num; i<201; i++)
			{
		cout<<"\n\t==>Enter idno number ";
		cin>>no;
			if(no==s_idno[i])
			cout<<"\n\t ==> Student number "<<i;
			cout<<"\n\t ==> Student idno = "<<s_idno[i];
			cout<<"\n\t ==> Student dues = "<<s_dues[i];
			h1_dues<<"\n\t ==> Student idno = "<<s_idno[i];
			h1_dues<<"\n\t ==> Student dues= "<<s_dues[i];
		    cout<<"\nDo you want to see more dues  of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
		h1_dues.write((char *)this, sizeof(h1_dues));	
		cout<<"\nStudent Dues File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_dues.close();
		bill_menu();
	}
	void bill_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO ACCOUNT MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Students Total Bils";
			cout<<"\n\t --> 2-To See Hostel Profit";
			cout<<"\n\t --> 3-To Enter Student Dues";
			cout<<"\n\t --> 4-To Display Student Dues";
			cout<<"\n\t --> 6-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					bill();
					break;
				case 2:
					hostelprofit();
					break;
				case 3:
					studentdues_input();
					break;
				case 4:
					studentdues_output();
					break;
				case 5:
					
					break;
			}
			
   }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class hostel2:public management{
	public:
		string s_name[201],f_name[201],s_rolno[201],s_idno[201];
		int no[201],i,z,num;
		char y;
	public:
	void s_input()
	{ system("cls")	;
		cout<<"\n\t\t================================= ( ENTERIES OF THE STUDENTS ) ===========================\n";	
		while(z=200)
		{
		cout<<"\nEnter the student number = ";
		cin>>num;
		if(num<201)
		{	
		for(int i=num; i<201; i++)
			{
			cout<<"\n =========>> Enter the Information of "<<i<<" Student";
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student name = ";
			cin>>s_name[i];
			cout<<"\nEnter student father name = ";
			cin>>f_name[i];
			cout<<"\nEnter student rollno = ";
			cin>>s_rolno[i];
			cout<<"\nDo you want enter more entries of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			
		}
		else
		cout<<"\nSeats are fulled";
		Sleep(3000);
		break;
		}
		stu1_entrymenu();
		system("cls");
	}	
	
void s_output(){
	system("cls");
	string n;
	fstream hstl_stu1;
	hstl_stu1.open("2.Student2.txt",ios::app|ios::out);
	for(int i=num; i<201; i++)
	{	hstl_stu1.read((char *)this, sizeof(hstl_stu1));
		cout<<"\n\t*****  Record Of "<<i+1<<" Student  ******\n";
	    cout<<"\nEnte Student ID no which you want to see : ";
	    cin>>n;
	    hstl_stu1>>s_idno[i];
	   if(n==s_idno[i])
	   {	cout<<"\n\t==> Student idno : "<<s_idno[i];		
			cout<<"\n\t==> Student name : "<<s_name[i];
			cout<<"\n\t==> Student father name : "<<f_name[i];
			cout<<"\n\t==> Student rollno : "<<s_rolno[i];
			hstl_stu1<<"\n\t==> Student idno : "<<s_idno[i];		
			hstl_stu1<<"\n\t==> Student name : "<<s_name[i];
			hstl_stu1<<"\n\t==> Student father name : "<<f_name[i];
			hstl_stu1<<"\n\t==> Student rollno : "<<s_rolno[i];	
			Sleep(3000);
		}
		else
		{
			cout<<"\nYou Enter Wrong choice :";	
			Sleep(3000);	
		}	
		cout<<"\nDo you want to see more entries of students [y/n]? ";
		cin>>y;
		if(y=='n')
		break;
	}
		hstl_stu1.close();
		cout<<"\nStudent File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
stu1_entrymenu();	}
	
	void stu1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO STUDENT MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter   the Data of the students";
	cout<<"\n\t\t\t\t  2-Display the Data of the students";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				s_input();	
					break;
				case 2:
				s_output();
					break;
				case 3:
				
					break;
			}
   }			
};
class mess2:public hostel2{
	private:
		int item_no[8],no;
		string m_first[8],m_second[8],m_day[8];
		char m_ch,m_ch1;
	public:
	void m_menuinput()
	{system("cls");
		cout<<"\n\n\t\t ====================== >>>>>>> Design Menu <<<<<<<< =====================";
			for(int i=1; i<7; i++ )
		{
		cout<<"\nEnter day for meal = ";
		cin>>m_day[i];	
		cout<<"\nEnter Item no = ";
		cin>>item_no[i];
		cout<<"\nEnter your meal of first time = ";
		cin>>m_first[i];
		cout<<"\nEnter your meal  of second time = ";
		cin>>m_second[i];
		}
		mess1_menu();
	}
	void m_menuoutput()
	{system("cls");
		cout<<"\n\n\t\t ==================== >>>>>>Welcome to Mess Menu System <<<<<< ====================\n\n";
		ofstream mess1;
		mess1.open("2.mess2.txt",ios::app|ios::out);
		cout<<"\n\t\t\tItemno\t\t\tFirst Time\t\t\tSecond Time";
		for(int i=1; i<7; i++ )
		{
		cout<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		mess1<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		}
		Sleep(2000);
		mess1.write((char *)this, sizeof(mess1));
		mess1.close();
		cout<<"\nMess1 File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		
	}
	void h1_breakfast()
	{
		
			cout<<"\n\n\t\t ========= >>> BREAKFAST <<< =======\n ";
			cout<<"\n = >> Do you want to eat breakfast...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes == >> "<<m_first[i];
				}
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nSee you next time ";
			Sleep(3000);	
			}
			mess1_menu();
	}
	
	void h1_dinner()
	{
	
			cout<<"\n\n\t\t ======== >>> DINNER <<< ========\n ";	
			cout<<"\nDo you want to eat dinner...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes ("<<m_second[i]<<" )";
				}				
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nsee you next time ";	
			Sleep(3000);
			}
			mess1_menu();
	}
	void mess1_menu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO MESS MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n\t\t select one of them ";
		cout<<"\n\t\t 1-To Design the mess menu";
		cout<<"\n\t\t 2-Breakfast";
		cout<<"\n\t\t 3-Dinner";
		cout<<"\n\t\t 4-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
					m_menuinput();
					break;
				case 2:
					m_menuoutput();
					h1_breakfast();
					break;
				case 3:
					m_menuoutput();
					h1_dinner();
					break;
				case 4:
					break;
					
			}
   }		
			
		
	
};
class guests2:public hostel2{
	hostel2 h2;
		public:
		int g_no,g_bil[4],no,g_idno[4];
		string g_name[4],n[200],s_idno1[201];
		char g_ch;
	public:
	void g_input1()
	{	system("cls");
		int z;
		while(z=200)
		{
		
		cout<<"\n\t============================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< =============================\n\n";
		cout<<"\n ==> 1.You have granted permission for your guest from hostel.....'y/n'";
		cout<<"\nEnter Your choice = ";
		cin>>g_ch;
		char y;
		if(g_ch=='y')
		{
			cout<<"\n ==>2.Three guests are allowed for each student";
			
		for(int i=1; i<200;i++)
			{
				cout<<"\nEnter guest no = ";
				cin>>no;
				cout<<"\nEnter your Id no For Your Guest = ";
				cin>>s_idno1[i];
					if(no<4)
					{
						for(int i=no; i<4; i++)
						{
						cout<<"\nGuest Details for "<<s_idno1[i]<<" Student ";
						cout<<"\nEnter Guest Idno = ";
						cin>>g_idno[i];
						cout<<"\nEnter Guest name = ";
						cin>>g_name[i];
						cout<<"\nEnter Guest Mess Bill = ";
						cin>>g_bil[i];
						cout<<"\nDo you have more guests [y/n]? ";
						cin>>y;
						if(y=='n')
						break;
						}	
					}
					else
					{
					cout<<"\nOnly 3 guests are allowed"	;
					Sleep(3000);
					}
				
				break;}
		}
		else
		cout<<"\nSorry....you didn't granted permission.....\n\t_________________Guest is not allowed____________";
		Sleep(3000);
	break;
	}
	gust1_entrymenu();
	}

	void g_output1()
	{system("cls");
		hostel2 h2;
		int n1;
		string nn;
		char y;	
		int z;
			cout<<"\n\t===================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< ===========================\n\n";
			fstream guest1;
			guest1.open("2.guest2.txt",ios::app|ios::out);
			cout<<"\n Guest details you want ";
		for(int i=1;i<201;i++)
		{
			cout<<"\nEnter your  idno = ";
			cin>>nn;
			if(nn==s_idno1[i])
				{		
						cout<<"\n\t==> Guests Of Student : "<<s_idno1[i];
						cout<<"\n\t==> GUEST NO : "<<no;
						cout<<"\n\t==> Guest Idno = "<<g_idno[i];
						cout<<"\n\t==> Guest name = "<<g_name[i];
						cout<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
						guest1<<"\n\t==> Guest Idno = "<<g_idno[i];
						guest1<<"\n\t==> Guest name = "<<g_name[i];
						guest1<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
				}
				else
				{
				cout<<"\n You Entered wrong idno....\n";
				Sleep(3000);	
				}
			cout<<"\nDo you want to see more deatails of your guests [y/n]? ";
			cin>>y;
			if(y=='n')
			break;
		}
			guest1.write((char *)this, sizeof(guest1));
			cout<<"\nGuests File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			guest1.close();	
			Sleep(3000);		
			gust1_entrymenu();			
		}
void gust1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO GUESTS MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter    Data of the guests";
	cout<<"\n\t\t\t\t  2-Display  Data of the guests";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				g_input1();	
					break;
				case 2:
				g_output1();
					break;
				case 3:
				
					break;
			}
   }				
};
class clothes2:public hostel2	
	{
	private:
	int iron,wash;
	char c_ch;
	public:
	void clothes()
	{system("cls");
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO CLOTHES MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\t==> Rs.5 Piece for ironing \n\t==> RS.12 Piece for washing \n\t==> You can uses this facility at least once a week.";
		cout<<"\n\n\n\tHave you used this facility before...?____'y/n' ";
		cin>>c_ch;
		if(c_ch=='n')
		{
			cout<<"\nHow many clothes you want to ironing = ";
			cin>>iron;
			cout<<"\nHow many clothes you want to washing = ";
			cin>>wash;
			ofstream clothes1;
			clothes1.open("2.clothes2.txt",ios::app|ios::out);
			int t_iron=iron*5;
			int t_wash=wash*12;
			int t_clothes=t_iron+t_wash;
			int h_share=((t_iron+t_wash)*15)/100;
			int t_income=t_clothes-h_share;
			cout<<"\n\n\t ======= >>>>> Deatails Are <<<<< ==========\n\n";
			cout<<"\n\t==>Ironing Rs."<<t_iron;
			cout<<"\n\t==>Washing Rs."<<t_wash;
			cout<<"\n\t==>Hostel Share Rs."<<h_share;
			cout<<"\n\t==>Total Income Rs."<<t_income;
			clothes1<<"\n\t==>Ironing Rs."<<t_iron;
			clothes1<<"\n\t==>Washing Rs."<<t_wash;
			clothes1<<"\n\t==>Hostel Share Rs."<<h_share;
			clothes1<<"\n\t==>Total Income Rs."<<t_income;
			Sleep(3000);
			clothes1.write((char *)this, sizeof(clothes1));
			cout<<"\n\n\nClothes File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			clothes1.close();	
		}
		else
		cout<<"\n\t------------Not Allowed-------------\n\tYou can use this facility agian in next week____!!!";	
		Sleep(3000);
	}	
	};
class security2:public guests2{
	hostel2 h2;
	guests2 g2;
	private:
	int n;
	char y;
	public:
		void sec_input()
		{system("cls");
			ofstream h1_gstlist;
			h1_gstlist.open("2.Guestlist2.txt",ios::app|ios::out);
			
			cout<<"\n\n\t\t ==================== >>>>>> List Of Guests  <<<<<< ====================";
			for(int i=1;i<200;i++)
			{
			//	if(s_idno[i]==g_idno[i])
				{
				cout<<"\n\t==> Guest of student = "<<g2.s_idno1[i];	
				h1_gstlist<<"\n\t==> Guest of student = "<<g2.s_idno1[i];
				for(int i=1;i<4;i++)
				{
				cout<<"\n\t==> Guest Idno = "<<g2.g_idno[i];	
				h1_gstlist<<"\n\t==> Guest Idno = "<<g2.g_idno[i];
				cout<<"\nDo you want to exit [y/n]? ";
				cin>>y;
				if(y=='y')
				break;
				}
				break;
				}
				
			}
			h1_gstlist.write((char *)this, sizeof(h1_gstlist));
			cout<<"\nGuest list file for hostel1 is sucessfully created......";
			h1_gstlist.close();
			Security_menu();
		}
	void duty()
		{
			system("cls");
			string day_name[3],night_name[3],control_name[2];
			ofstream h1_sec2;
			cout<<"\n\n\t ==================== Duties ==================== ";
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in day time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>day_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in night time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>night_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the chief who will perform thier duty in control room ";
			for(int i=1;i<2;i++)
			{
				cout<<"\nEnter the chief name = ";
				cin>>control_name[i];
			}
			
			for(int i=1; i<3; i++)
			{
			h1_sec2.open("2.Duty2.txt",ios::app|ios::out);
			cout<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			cout<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			cout<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			h1_sec2<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			h1_sec2<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			h1_sec2<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			Sleep(3000);
			break;
			}
			h1_sec2.write((char *)this, sizeof(h1_sec2));
			cout<<"\nDuty  File for hostel1 is sucessfully created......";
			h1_sec2.close();
			Security_menu();
		}
	void trip()
		{
			system("cls");
			ofstream h1_sec3;
			h1_sec3.open("1.trip1.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t==================== Hostel1 Trip Plans  ====================";
 			cout<<"\n\t-->  Trip to Naran ";
 			cout<<"\n\t-->  Trip to Parks";
 			cout<<"\n\t-->  Trip to Muree ";
 			cout<<"\n\t-->  BoneFire once a Month";
 			Sleep(3000);
 			h1_sec3<<"\n\t--> Trip to Naran ";
 			h1_sec3<<"\n\t-->  Trip to Parks";
 			h1_sec3<<"\n\t-->  Trip to Muree ";
 			h1_sec3<<"\n\t-->  BoneFire once a Month";
 			h1_sec3.write((char *)this, sizeof(h1_sec3));
			cout<<"\nTrip File of hostel1 is sucessfully created......";
			h1_sec3.close();
			Security_menu();
			
			
		}
	void lost()
		{
			system("cls");
			ofstream h1_sec4;
			h1_sec4.open("2.lost2.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t\t==================== Lost Things Fine ==================== ";
	  		cout<<"\n\n\t---------------------------";
	  		cout<<"\n\tName\t\tFine ";
	  		cout<<"\n\tRoom keys ------>Rs.100";
	  		cout<<"\n\tMobile --------->Rs.200";
	  		cout<<"\n\tUtensils ------->Rs.500";
	  		cout<<"\n\tChargers ------->Rs.500";
	  		cout<<"\n\tLate Coming----->Rs.150";
	  		Sleep(3000);
	  		h1_sec4<<"\n\tName\t\tFine ";
	  		h1_sec4<<"\n\tRoom keys ------>Rs.100";
	  		h1_sec4<<"\n\tMobile --------->Rs.200";
	  		h1_sec4<<"\n\tUtensils ------->Rs.500";
	  		h1_sec4<<"\n\tChargers ------->Rs.500";
	  		h1_sec4<<"\n\tLate Coming----->Rs.150";
			cout<<"\n\n\t---------------------------";
			h1_sec4.write((char *)this, sizeof(h1_sec4));
			cout<<"\nLost File of hostel1 is sucessfully created......";
			h1_sec4.close();
			Security_menu();
		}
   void Security_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SECURITY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Guests Datails";
			cout<<"\n\t --> 2-Duties";
			cout<<"\n\t --> 3-Trip";
			cout<<"\n\t --> 4-Lost Things";
			cout<<"\n\t --> 5-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					sec_input();
					break;
				case 2:
					duty();
					break;
				case 3:
					trip();
					break;
				case 4:
					lost();
					break;
				case 5:
					
					break;
			}
			
   }
};

class salary2:public hostel2{
	private:
		int student=15000;
		int manager=25000;
		int cook =15000;
		int sweepers=10000;
		int guards=15000;
		int servingboy=5000;
		public:
		void h1_salary()
		{
		system("cls");
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook;
		ofstream h1_salary;
		h1_salary.open("2.salary2.txt",ios::app|ios::out);
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SALARY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\n\t--> Total income:      Rs."<<t_income;	
		cout<<"\n\t--> Salary of manager: Rs."<<manager;
		cout<<"\n\t--> Salary Cook:       Rs."<<cook;
		cout<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		cout<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		cout<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary<<"\n\n\t--> Total income:      Rs."<<t_income;	
		h1_salary<<"\n\t--> Salary of manager: Rs."<<manager;
		h1_salary<<"\n\t--> Salary Cook:       Rs."<<cook;
		h1_salary<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		h1_salary<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		h1_salary<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary.write((char *)this, sizeof(h1_salary));
		cout<<"\nSalary File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_salary.close();	
		}	
};
class manag2 : public management,guests2
{
	guests1 g1;
	private:
	string	fines;
	int	fine[201],mess[201],t_bill[201],g_bill[201],s_dues[201],num,s_idno[201],no;
	char y;
	int student=15000,manager=25000,cook =15000,sweepers=10000, guards=15000,servingboy=5000;
	int	roomkeys=100,mobile =200,utensils=500,chargers=500,latecoming=150;
	security1 sec1;
	
	public:
	void bill()
	{system("cls");
	cout<<"\n\t==================== STUDENT FINE INFORMATION ====================";
		
		ofstream h1_fine1;
		h1_fine1.open("2.Fine2.txt",ios::app|ios::out);
		for(int i=1;i<201;i++)
		{	cout<<"\nDo you have any fine.....[y/n]?";
			cin>>y;
			if(y=='y')
			{	
				cout<<"\n\n\tName\t\tFine ";
	  			cout<<"\n\tRoom keys ------>Rs.100";
	  			cout<<"\n\tMobile --------->Rs.200";
	  			cout<<"\n\tUtensils ------->Rs.500";
	  			cout<<"\n\tChargers ------->Rs.500";
	  			cout<<"\n\tLate Coming----->Rs.150\n\n";
				cout<<"\nwhat kind of fine you have \nEnter Your Fine Name = ";
				cin>>fines;
				if(fines =="roomkeys")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines == "mobile")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mobile+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="utensils")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(utensils+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="chargers")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(chargers+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="latecoming")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(latecoming+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
					cout<<"\ndo you want to enter more entries [y/n]? ";
					cin>>y;
					if(y=='n')
					break;	
			}
			else
			{		cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
			}
		
		}
		h1_fine1.write((char *)this, sizeof(h1_fine1));
		h1_fine1.close();
		cout<<"\nFine File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();	
		bill_menu();
	}
	
	
	void hostelprofit()
	{
		system("cls");
	cout<<"\n\t==================== HOSTEL PROFIT INFORMATION ====================\n\n";
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int t_electric=200*4000;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook-t_electric;
	
		ofstream h1_profit;
		h1_profit.open("2.Hostel2 profit.txt",ios::app|ios::out);
		cout<<"\n\n\t ==> Total Hostel income : "<<t_income;
		cout<<"\n\t ==> Hostel profit         : "<<r_income;
		h1_profit<<"\n ==> Total Hostel income = "<<t_income;
		h1_profit<<"\n ==> Hostel profit = "<<r_income;
		h1_profit.write((char *)this, sizeof(h1_profit));
		h1_profit.close();
		cout<<"\nHostel profit File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
	bill_menu();
		
	}	
	void studentdues_input()
	{system("cls");
		cout<<"\n\t==================== ENTER STUDENT DUES INFORMATION ====================";
		cout<<"\n\t==>Enter student number ";
		cin>>num;
		for(int i=num; i<201; i++)
			{
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student dues = ";
			cin>>s_dues[i];
		   cout<<"\nDo you want to enter more dues of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			bill_menu();
	}
	void studentdues_output()
	{system("cls");
		cout<<"\n\t==================== STUDENT DUES INFORMATION ====================";
		ofstream h1_dues;
		h1_dues.open("2.Student Dues2.txt",ios::app|ios::out);
			for(int i=num; i<201; i++)
			{
		cout<<"\n\t==>Enter idno number ";
		cin>>no;
			if(no==s_idno[i])
			cout<<"\n\t ==> Student number "<<i;
			cout<<"\n\t ==> Student idno = "<<s_idno[i];
			cout<<"\n\t ==> Student dues = "<<s_dues[i];
			h1_dues<<"\n\t ==> Student idno = "<<s_idno[i];
			h1_dues<<"\n\t ==> Student dues= "<<s_dues[i];
		    cout<<"\nDo you want to see more dues  of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
		h1_dues.write((char *)this, sizeof(h1_dues));	
		cout<<"\nStudent Dues File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_dues.close();
		bill_menu();
	}
	void bill_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO ACCOUNT MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Students Total Bils";
			cout<<"\n\t --> 2-To See Hostel Profit";
			cout<<"\n\t --> 3-To Enter Student Dues";
			cout<<"\n\t --> 4-To Display Student Dues";
			cout<<"\n\t --> 6-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					bill();
					break;
				case 2:
					hostelprofit();
					break;
				case 3:
					studentdues_input();
					break;
				case 4:
					studentdues_output();
					break;
				case 5:
					
					break;
			}
			
   }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class hostel3:public management{
	public:
		string s_name[201],f_name[201],s_rolno[201],s_idno[201];
		int no[201],i,z,num;
		char y;
	public:
	void s_input()
	{ system("cls")	;
		cout<<"\n\t\t================================= ( ENTERIES OF THE STUDENTS ) ===========================\n";	
		while(z=200)
		{
		cout<<"\nEnter the student number = ";
		cin>>num;
		if(num<201)
		{	
		for(int i=num; i<201; i++)
			{
			cout<<"\n =========>> Enter the Information of "<<i<<" Student";
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student name = ";
			cin>>s_name[i];
			cout<<"\nEnter student father name = ";
			cin>>f_name[i];
			cout<<"\nEnter student rollno = ";
			cin>>s_rolno[i];
			cout<<"\nDo you want enter more entries of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			
		}
		else
		cout<<"\nSeats are fulled";
		Sleep(3000);
		break;
		}
		stu1_entrymenu();
		system("cls");
	}	
	
void s_output(){
	system("cls");
	string n;
	fstream hstl_stu1;
	hstl_stu1.open("3.Student3.txt",ios::app|ios::out);
	for(int i=num; i<201; i++)
	{	hstl_stu1.read((char *)this, sizeof(hstl_stu1));
		cout<<"\n\t*****  Record Of "<<i+1<<" Student  ******\n";
	    cout<<"\nEnte Student ID no which you want to see : ";
	    cin>>n;
	    hstl_stu1>>s_idno[i];
	   if(n==s_idno[i])
	   {	cout<<"\n\t==> Student idno : "<<s_idno[i];		
			cout<<"\n\t==> Student name : "<<s_name[i];
			cout<<"\n\t==> Student father name : "<<f_name[i];
			cout<<"\n\t==> Student rollno : "<<s_rolno[i];
			hstl_stu1<<"\n\t==> Student idno : "<<s_idno[i];		
			hstl_stu1<<"\n\t==> Student name : "<<s_name[i];
			hstl_stu1<<"\n\t==> Student father name : "<<f_name[i];
			hstl_stu1<<"\n\t==> Student rollno : "<<s_rolno[i];	
			Sleep(3000);
		}
		else
		{
			cout<<"\nYou Enter Wrong choice :";	
			Sleep(3000);	
		}	
		cout<<"\nDo you want to see more entries of students [y/n]? ";
		cin>>y;
		if(y=='n')
		break;
	}
		hstl_stu1.close();
		cout<<"\nStudent File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
stu1_entrymenu();	}
	
	void stu1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO STUDENT MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter   the Data of the students";
	cout<<"\n\t\t\t\t  2-Display the Data of the students";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				s_input();	
					break;
				case 2:
				s_output();
					break;
				case 3:
				
					break;
			}
   }			
};
class mess3:public hostel3{
	private:
		int item_no[8],no;
		string m_first[8],m_second[8],m_day[8];
		char m_ch,m_ch1;
	public:
	void m_menuinput()
	{system("cls");
		cout<<"\n\n\t\t ====================== >>>>>>> Design Menu <<<<<<<< =====================";
			for(int i=1; i<7; i++ )
		{
		cout<<"\nEnter day for meal = ";
		cin>>m_day[i];	
		cout<<"\nEnter Item no = ";
		cin>>item_no[i];
		cout<<"\nEnter your meal of first time = ";
		cin>>m_first[i];
		cout<<"\nEnter your meal  of second time = ";
		cin>>m_second[i];
		}
		mess1_menu();
	}
	void m_menuoutput()
	{system("cls");
		cout<<"\n\n\t\t ==================== >>>>>>Welcome to Mess Menu System <<<<<< ====================\n\n";
		ofstream mess1;
		mess1.open("3.mess3.txt",ios::app|ios::out);
		cout<<"\n\t\t\tItemno\t\t\tFirst Time\t\t\tSecond Time";
		for(int i=1; i<7; i++ )
		{
		cout<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		mess1<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		}
		Sleep(2000);
		mess1.write((char *)this, sizeof(mess1));
		mess1.close();
		cout<<"\nMess1 File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		
	}
	void h1_breakfast()
	{
		
			cout<<"\n\n\t\t ========= >>> BREAKFAST <<< =======\n ";
			cout<<"\n = >> Do you want to eat breakfast...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes == >> "<<m_first[i];
				}
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nSee you next time ";
			Sleep(3000);	
			}
			mess1_menu();
	}
	
	void h1_dinner()
	{
	
			cout<<"\n\n\t\t ======== >>> DINNER <<< ========\n ";	
			cout<<"\nDo you want to eat dinner...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes ("<<m_second[i]<<" )";
				}				
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nsee you next time ";	
			Sleep(3000);
			}
			mess1_menu();
	}
	void mess1_menu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO MESS MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n\t\t select one of them ";
		cout<<"\n\t\t 1-To Design the mess menu";
		cout<<"\n\t\t 2-Breakfast";
		cout<<"\n\t\t 3-Dinner";
		cout<<"\n\t\t 4-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
					m_menuinput();
					break;
				case 2:
					m_menuoutput();
					h1_breakfast();
					break;
				case 3:
					m_menuoutput();
					h1_dinner();
					break;
				case 4:
					break;
					
			}
   }		
			
		
	
};
class guests3:public hostel3{
	hostel2 h2;
		public:
		int g_no,g_bil[4],no,g_idno[4];
		string g_name[4],n[200],s_idno1[201];
		char g_ch;
	public:
	void g_input1()
	{	system("cls");
		int z;
		while(z=200)
		{
		
		cout<<"\n\t============================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< =============================\n\n";
		cout<<"\n ==> 1.You have granted permission for your guest from hostel.....'y/n'";
		cout<<"\nEnter Your choice = ";
		cin>>g_ch;
		char y;
		if(g_ch=='y')
		{
			cout<<"\n ==>2.Three guests are allowed for each student";
			
		for(int i=1; i<200;i++)
			{
				cout<<"\nEnter guest no = ";
				cin>>no;
				cout<<"\nEnter your Id no For Your Guest = ";
				cin>>s_idno1[i];
					if(no<4)
					{
						for(int i=no; i<4; i++)
						{
						cout<<"\nGuest Details for "<<s_idno1[i]<<" Student ";
						cout<<"\nEnter Guest Idno = ";
						cin>>g_idno[i];
						cout<<"\nEnter Guest name = ";
						cin>>g_name[i];
						cout<<"\nEnter Guest Mess Bill = ";
						cin>>g_bil[i];
						cout<<"\nDo you have more guests [y/n]? ";
						cin>>y;
						if(y=='n')
						break;
						}	
					}
					else
					{
					cout<<"\nOnly 3 guests are allowed"	;
					Sleep(3000);
					}
				
				break;}
		}
		else
		cout<<"\nSorry....you didn't granted permission.....\n\t_________________Guest is not allowed____________";
		Sleep(3000);
	break;
	}
	gust1_entrymenu();
	}

	void g_output1()
	{system("cls");
		hostel3 h3;
		int n1;
		string nn;
		char y;	
		int z;
			cout<<"\n\t===================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< ===========================\n\n";
			fstream guest1;
			guest1.open("3.guest3.txt",ios::app|ios::out);
			cout<<"\n Guest details you want ";
		for(int i=1;i<201;i++)
		{
			cout<<"\nEnter your  idno = ";
			cin>>nn;
			if(nn==s_idno1[i])
				{		
						cout<<"\n\t==> Guests Of Student : "<<s_idno1[i];
						cout<<"\n\t==> GUEST NO : "<<no;
						cout<<"\n\t==> Guest Idno = "<<g_idno[i];
						cout<<"\n\t==> Guest name = "<<g_name[i];
						cout<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
						guest1<<"\n\t==> Guest Idno = "<<g_idno[i];
						guest1<<"\n\t==> Guest name = "<<g_name[i];
						guest1<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
				}
				else
				{
				cout<<"\n You Entered wrong idno....\n";
				Sleep(3000);	
				}
			cout<<"\nDo you want to see more deatails of your guests [y/n]? ";
			cin>>y;
			if(y=='n')
			break;
		}
			guest1.write((char *)this, sizeof(guest1));
			cout<<"\nGuests File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			guest1.close();	
			Sleep(3000);		
			gust1_entrymenu();			
		}
void gust1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO GUESTS MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter    Data of the guests";
	cout<<"\n\t\t\t\t  2-Display  Data of the guests";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				g_input1();	
					break;
				case 2:
				g_output1();
					break;
				case 3:
				
					break;
			}
   }				
};
class clothes3:public hostel3	
	{
	private:
	int iron,wash;
	char c_ch;
	public:
	void clothes()
	{system("cls");
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO CLOTHES MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\t==> Rs.5 Piece for ironing \n\t==> RS.12 Piece for washing \n\t==> You can uses this facility at least once a week.";
		cout<<"\n\n\n\tHave you used this facility before...?____'y/n' ";
		cin>>c_ch;
		if(c_ch=='n')
		{
			cout<<"\nHow many clothes you want to ironing = ";
			cin>>iron;
			cout<<"\nHow many clothes you want to washing = ";
			cin>>wash;
			ofstream clothes1;
			clothes1.open("3.clothes3.txt",ios::app|ios::out);
			int t_iron=iron*5;
			int t_wash=wash*12;
			int t_clothes=t_iron+t_wash;
			int h_share=((t_iron+t_wash)*15)/100;
			int t_income=t_clothes-h_share;
			cout<<"\n\n\t ======= >>>>> Deatails Are <<<<< ==========\n\n";
			cout<<"\n\t==>Ironing Rs."<<t_iron;
			cout<<"\n\t==>Washing Rs."<<t_wash;
			cout<<"\n\t==>Hostel Share Rs."<<h_share;
			cout<<"\n\t==>Total Income Rs."<<t_income;
			clothes1<<"\n\t==>Ironing Rs."<<t_iron;
			clothes1<<"\n\t==>Washing Rs."<<t_wash;
			clothes1<<"\n\t==>Hostel Share Rs."<<h_share;
			clothes1<<"\n\t==>Total Income Rs."<<t_income;
			Sleep(3000);
			clothes1.write((char *)this, sizeof(clothes1));
			cout<<"\n\n\nClothes File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			clothes1.close();	
		}
		else
		cout<<"\n\t------------Not Allowed-------------\n\tYou can use this facility agian in next week____!!!";	
		Sleep(3000);
	}	
	};
class security3:public guests3{
	hostel3 h3;
	guests3 g3;
	private:
	int n;
	char y;
	public:
		void sec_input()
		{system("cls");
			ofstream h1_gstlist;
			h1_gstlist.open("3.Guestlist3.txt",ios::app|ios::out);
			
			cout<<"\n\n\t\t ==================== >>>>>> List Of Guests  <<<<<< ====================";
			for(int i=1;i<200;i++)
			{
			//	if(s_idno[i]==g_idno[i])
				{
				cout<<"\n\t==> Guest of student = "<<g3.s_idno1[i];	
				h1_gstlist<<"\n\t==> Guest of student = "<<g3.s_idno1[i];
				for(int i=1;i<4;i++)
				{
				cout<<"\n\t==> Guest Idno = "<<g3.g_idno[i];	
				h1_gstlist<<"\n\t==> Guest Idno = "<<g3.g_idno[i];
				cout<<"\nDo you want to exit [y/n]? ";
				cin>>y;
				if(y=='y')
				break;
				}
				break;
				}
				
			}
			h1_gstlist.write((char *)this, sizeof(h1_gstlist));
			cout<<"\nGuest list file for hostel1 is sucessfully created......";
			h1_gstlist.close();
			Security_menu();
		}
	void duty()
		{
			system("cls");
			string day_name[3],night_name[3],control_name[2];
			ofstream h1_sec2;
			cout<<"\n\n\t ==================== Duties ==================== ";
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in day time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>day_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in night time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>night_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the chief who will perform thier duty in control room ";
			for(int i=1;i<2;i++)
			{
				cout<<"\nEnter the chief name = ";
				cin>>control_name[i];
			}
			
			for(int i=1; i<3; i++)
			{
			h1_sec2.open("3.Duty3.txt",ios::app|ios::out);
			cout<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			cout<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			cout<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			h1_sec2<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			h1_sec2<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			h1_sec2<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			Sleep(3000);
			break;
			}
			h1_sec2.write((char *)this, sizeof(h1_sec2));
			cout<<"\nDuty  File for hostel1 is sucessfully created......";
			h1_sec2.close();
			Security_menu();
		}
	void trip()
		{
			system("cls");
			ofstream h1_sec3;
			h1_sec3.open("3.trip3.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t==================== Hostel1 Trip Plans  ====================";
 			cout<<"\n\t-->  Trip to Naran ";
 			cout<<"\n\t-->  Trip to Parks";
 			cout<<"\n\t-->  Trip to Muree ";
 			cout<<"\n\t-->  BoneFire once a Month";
 			Sleep(3000);
 			h1_sec3<<"\n\t--> Trip to Naran ";
 			h1_sec3<<"\n\t-->  Trip to Parks";
 			h1_sec3<<"\n\t-->  Trip to Muree ";
 			h1_sec3<<"\n\t-->  BoneFire once a Month";
 			h1_sec3.write((char *)this, sizeof(h1_sec3));
			cout<<"\nTrip File of hostel1 is sucessfully created......";
			h1_sec3.close();
			Security_menu();
			
			
		}
	void lost()
		{
			system("cls");
			ofstream h1_sec4;
			h1_sec4.open("3.lost3.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t\t==================== Lost Things Fine ==================== ";
	  		cout<<"\n\n\t---------------------------";
	  		cout<<"\n\tName\t\tFine ";
	  		cout<<"\n\tRoom keys ------>Rs.100";
	  		cout<<"\n\tMobile --------->Rs.200";
	  		cout<<"\n\tUtensils ------->Rs.500";
	  		cout<<"\n\tChargers ------->Rs.500";
	  		cout<<"\n\tLate Coming----->Rs.150";
	  		Sleep(3000);
	  		h1_sec4<<"\n\tName\t\tFine ";
	  		h1_sec4<<"\n\tRoom keys ------>Rs.100";
	  		h1_sec4<<"\n\tMobile --------->Rs.200";
	  		h1_sec4<<"\n\tUtensils ------->Rs.500";
	  		h1_sec4<<"\n\tChargers ------->Rs.500";
	  		h1_sec4<<"\n\tLate Coming----->Rs.150";
			cout<<"\n\n\t---------------------------";
			h1_sec4.write((char *)this, sizeof(h1_sec4));
			cout<<"\nLost File of hostel1 is sucessfully created......";
			h1_sec4.close();
			Security_menu();
		}
   void Security_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SECURITY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Guests Datails";
			cout<<"\n\t --> 2-Duties";
			cout<<"\n\t --> 3-Trip";
			cout<<"\n\t --> 4-Lost Things";
			cout<<"\n\t --> 5-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					sec_input();
					break;
				case 2:
					duty();
					break;
				case 3:
					trip();
					break;
				case 4:
					lost();
					break;
				case 5:
					
					break;
			}
			
   }
};

class salary3:public hostel3{
	private:
		int student=15000;
		int manager=25000;
		int cook =15000;
		int sweepers=10000;
		int guards=15000;
		int servingboy=5000;
		public:
		void h1_salary()
		{
		system("cls");
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook;
		ofstream h1_salary;
		h1_salary.open("3.salary3.txt",ios::app|ios::out);
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SALARY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\n\t--> Total income:      Rs."<<t_income;	
		cout<<"\n\t--> Salary of manager: Rs."<<manager;
		cout<<"\n\t--> Salary Cook:       Rs."<<cook;
		cout<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		cout<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		cout<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary<<"\n\n\t--> Total income:      Rs."<<t_income;	
		h1_salary<<"\n\t--> Salary of manager: Rs."<<manager;
		h1_salary<<"\n\t--> Salary Cook:       Rs."<<cook;
		h1_salary<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		h1_salary<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		h1_salary<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary.write((char *)this, sizeof(h1_salary));
		cout<<"\nSalary File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_salary.close();	
		}	
};
class manag3 : public management,guests3
{
	guests1 g1;
	private:
	string	fines;
	int	fine[201],mess[201],t_bill[201],g_bill[201],s_dues[201],num,s_idno[201],no;
	char y;
	int student=15000,manager=25000,cook =15000,sweepers=10000, guards=15000,servingboy=5000;
	int	roomkeys=100,mobile =200,utensils=500,chargers=500,latecoming=150;
	security1 sec1;
	
	public:
	void bill()
	{system("cls");
	cout<<"\n\t==================== STUDENT FINE INFORMATION ====================";
		
		ofstream h1_fine1;
		h1_fine1.open("3.Fine3.txt",ios::app|ios::out);
		for(int i=1;i<201;i++)
		{	cout<<"\nDo you have any fine.....[y/n]?";
			cin>>y;
			if(y=='y')
			{	
				cout<<"\n\n\tName\t\tFine ";
	  			cout<<"\n\tRoom keys ------>Rs.100";
	  			cout<<"\n\tMobile --------->Rs.200";
	  			cout<<"\n\tUtensils ------->Rs.500";
	  			cout<<"\n\tChargers ------->Rs.500";
	  			cout<<"\n\tLate Coming----->Rs.150\n\n";
				cout<<"\nwhat kind of fine you have \nEnter Your Fine Name = ";
				cin>>fines;
				if(fines =="roomkeys")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines == "mobile")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mobile+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="utensils")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(utensils+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="chargers")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(chargers+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="latecoming")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(latecoming+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
					cout<<"\ndo you want to enter more entries [y/n]? ";
					cin>>y;
					if(y=='n')
					break;	
			}
			else
			{		cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
			}
		
		}
		h1_fine1.write((char *)this, sizeof(h1_fine1));
		h1_fine1.close();
		cout<<"\nFine File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();	
		bill_menu();
	}
	
	
	void hostelprofit()
	{
		system("cls");
	cout<<"\n\t==================== HOSTEL PROFIT INFORMATION ====================\n\n";
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int t_electric=200*4000;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook-t_electric;
	
		ofstream h1_profit;
		h1_profit.open("3.Hostel3 profit.txt",ios::app|ios::out);
		cout<<"\n\n\t ==> Total Hostel income : "<<t_income;
		cout<<"\n\t ==> Hostel profit         : "<<r_income;
		h1_profit<<"\n ==> Total Hostel income = "<<t_income;
		h1_profit<<"\n ==> Hostel profit = "<<r_income;
		h1_profit.write((char *)this, sizeof(h1_profit));
		h1_profit.close();
		cout<<"\nHostel profit File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
	bill_menu();
		
	}	
	void studentdues_input()
	{system("cls");
		cout<<"\n\t==================== ENTER STUDENT DUES INFORMATION ====================";
		cout<<"\n\t==>Enter student number ";
		cin>>num;
		for(int i=num; i<201; i++)
			{
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student dues = ";
			cin>>s_dues[i];
		   cout<<"\nDo you want to enter more dues of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			bill_menu();
	}
	void studentdues_output()
	{system("cls");
		cout<<"\n\t==================== STUDENT DUES INFORMATION ====================";
		ofstream h1_dues;
		h1_dues.open("3.Student Dues3.txt",ios::app|ios::out);
			for(int i=num; i<201; i++)
			{
		cout<<"\n\t==>Enter idno number ";
		cin>>no;
			if(no==s_idno[i])
			cout<<"\n\t ==> Student number "<<i;
			cout<<"\n\t ==> Student idno = "<<s_idno[i];
			cout<<"\n\t ==> Student dues = "<<s_dues[i];
			h1_dues<<"\n\t ==> Student idno = "<<s_idno[i];
			h1_dues<<"\n\t ==> Student dues= "<<s_dues[i];
		    cout<<"\nDo you want to see more dues  of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
		h1_dues.write((char *)this, sizeof(h1_dues));	
		cout<<"\nStudent Dues File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_dues.close();
		bill_menu();
	}
	void bill_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO ACCOUNT MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Students Total Bils";
			cout<<"\n\t --> 2-To See Hostel Profit";
			cout<<"\n\t --> 3-To Enter Student Dues";
			cout<<"\n\t --> 4-To Display Student Dues";
			cout<<"\n\t --> 6-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					bill();
					break;
				case 2:
					hostelprofit();
					break;
				case 3:
					studentdues_input();
					break;
				case 4:
					studentdues_output();
					break;
				case 5:
					
					break;
			}
			
   }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class hostel4:public management{
	public:
		string s_name[201],f_name[201],s_rolno[201],s_idno[201];
		int no[201],i,z,num;
		char y;
	public:
	void s_input()
	{ system("cls")	;
		cout<<"\n\t\t================================= ( ENTERIES OF THE STUDENTS ) ===========================\n";	
		while(z=200)
		{
		cout<<"\nEnter the student number = ";
		cin>>num;
		if(num<201)
		{	
		for(int i=num; i<201; i++)
			{
			cout<<"\n =========>> Enter the Information of "<<i<<" Student";
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student name = ";
			cin>>s_name[i];
			cout<<"\nEnter student father name = ";
			cin>>f_name[i];
			cout<<"\nEnter student rollno = ";
			cin>>s_rolno[i];
			cout<<"\nDo you want enter more entries of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			
		}
		else
		cout<<"\nSeats are fulled";
		Sleep(3000);
		break;
		}
		stu1_entrymenu();
		system("cls");
	}	
	
void s_output(){
	system("cls");
	string n;
	fstream hstl_stu1;
	hstl_stu1.open("4.Student4.txt",ios::app|ios::out);
	for(int i=num; i<201; i++)
	{	hstl_stu1.read((char *)this, sizeof(hstl_stu1));
		cout<<"\n\t*****  Record Of "<<i+1<<" Student  ******\n";
	    cout<<"\nEnte Student ID no which you want to see : ";
	    cin>>n;
	    hstl_stu1>>s_idno[i];
	   if(n==s_idno[i])
	   {	cout<<"\n\t==> Student idno : "<<s_idno[i];		
			cout<<"\n\t==> Student name : "<<s_name[i];
			cout<<"\n\t==> Student father name : "<<f_name[i];
			cout<<"\n\t==> Student rollno : "<<s_rolno[i];
			hstl_stu1<<"\n\t==> Student idno : "<<s_idno[i];		
			hstl_stu1<<"\n\t==> Student name : "<<s_name[i];
			hstl_stu1<<"\n\t==> Student father name : "<<f_name[i];
			hstl_stu1<<"\n\t==> Student rollno : "<<s_rolno[i];	
			Sleep(3000);
		}
		else
		{
			cout<<"\nYou Enter Wrong choice :";	
			Sleep(3000);	
		}	
		cout<<"\nDo you want to see more entries of students [y/n]? ";
		cin>>y;
		if(y=='n')
		break;
	}
		hstl_stu1.close();
		cout<<"\nStudent File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
stu1_entrymenu();	}
	
	void stu1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO STUDENT MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter   the Data of the students";
	cout<<"\n\t\t\t\t  2-Display the Data of the students";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				s_input();	
					break;
				case 2:
				s_output();
					break;
				case 3:
				
					break;
			}
   }			
};
class mess4:public hostel4{
	private:
		int item_no[8],no;
		string m_first[8],m_second[8],m_day[8];
		char m_ch,m_ch1;
	public:
	void m_menuinput()
	{system("cls");
		cout<<"\n\n\t\t ====================== >>>>>>> Design Menu <<<<<<<< =====================";
			for(int i=1; i<7; i++ )
		{
		cout<<"\nEnter day for meal = ";
		cin>>m_day[i];	
		cout<<"\nEnter Item no = ";
		cin>>item_no[i];
		cout<<"\nEnter your meal of first time = ";
		cin>>m_first[i];
		cout<<"\nEnter your meal  of second time = ";
		cin>>m_second[i];
		}
		mess1_menu();
	}
	void m_menuoutput()
	{system("cls");
		cout<<"\n\n\t\t ==================== >>>>>>Welcome to Mess Menu System <<<<<< ====================\n\n";
		ofstream mess1;
		mess1.open("4.mess4.txt",ios::app|ios::out);
		cout<<"\n\t\t\tItemno\t\t\tFirst Time\t\t\tSecond Time";
		for(int i=1; i<7; i++ )
		{
		cout<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		mess1<<"\n"<<i<<".  "<<m_day[i]<<"\n\t\t\t"<<item_no[i]<<"\t\t\t"<<m_first[i]<<"\t\t\t\t"<<m_second[i];
		}
		Sleep(2000);
		mess1.write((char *)this, sizeof(mess1));
		mess1.close();
		cout<<"\nMess1 File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		
	}
	void h1_breakfast()
	{
		
			cout<<"\n\n\t\t ========= >>> BREAKFAST <<< =======\n ";
			cout<<"\n = >> Do you want to eat breakfast...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes == >> "<<m_first[i];
				}
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nSee you next time ";
			Sleep(3000);	
			}
			mess1_menu();
	}
	
	void h1_dinner()
	{
	
			cout<<"\n\n\t\t ======== >>> DINNER <<< ========\n ";	
			cout<<"\nDo you want to eat dinner...?_____'y/n'";
			cin>>m_ch1;
			if(m_ch1=='y')
			{
			cout<<"\nEnter item no which you want : ";
			cin>>no;
			for(int i=1;i<8;i++)
			{
				if(item_no[i]==no)
				{
					cout<<"\n\t---->You take the dishes ("<<m_second[i]<<" )";
				}				
			}
			Sleep(3000);
			}
			else
			{
			cout<<"\nsee you next time ";	
			Sleep(3000);
			}
			mess1_menu();
	}
	void mess1_menu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO MESS MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n\t\t select one of them ";
		cout<<"\n\t\t 1-To Design the mess menu";
		cout<<"\n\t\t 2-Breakfast";
		cout<<"\n\t\t 3-Dinner";
		cout<<"\n\t\t 4-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
					m_menuinput();
					break;
				case 2:
					m_menuoutput();
					h1_breakfast();
					break;
				case 3:
					m_menuoutput();
					h1_dinner();
					break;
				case 4:
					break;
					
			}
   }		
			
		
	
};
class guests4:public hostel4{
	hostel2 h2;
		public:
		int g_no,g_bil[4],no,g_idno[4];
		string g_name[4],n[200],s_idno1[201];
		char g_ch;
	public:
	void g_input1()
	{	system("cls");
		int z;
		while(z=200)
		{
		
		cout<<"\n\t============================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< =============================\n\n";
		cout<<"\n ==> 1.You have granted permission for your guest from hostel.....'y/n'";
		cout<<"\nEnter Your choice = ";
		cin>>g_ch;
		char y;
		if(g_ch=='y')
		{
			cout<<"\n ==>2.Three guests are allowed for each student";
			
		for(int i=1; i<200;i++)
			{
				cout<<"\nEnter guest no = ";
				cin>>no;
				cout<<"\nEnter your Id no For Your Guest = ";
				cin>>s_idno1[i];
					if(no<4)
					{
						for(int i=no; i<4; i++)
						{
						cout<<"\nGuest Details for "<<s_idno1[i]<<" Student ";
						cout<<"\nEnter Guest Idno = ";
						cin>>g_idno[i];
						cout<<"\nEnter Guest name = ";
						cin>>g_name[i];
						cout<<"\nEnter Guest Mess Bill = ";
						cin>>g_bil[i];
						cout<<"\nDo you have more guests [y/n]? ";
						cin>>y;
						if(y=='n')
						break;
						}	
					}
					else
					{
					cout<<"\nOnly 3 guests are allowed"	;
					Sleep(3000);
					}
				
				break;}
		}
		else
		cout<<"\nSorry....you didn't granted permission.....\n\t_________________Guest is not allowed____________";
		Sleep(3000);
	break;
	}
	gust1_entrymenu();
	}

	void g_output1()
	{system("cls");
		hostel3 h3;
		int n1;
		string nn;
		char y;	
		int z;
			cout<<"\n\t===================== >>>>>>>>>>>>>>>>>> Enter Guests Details <<<<<<<<<<<<<<<<<< ===========================\n\n";
			fstream guest1;
			guest1.open("4.guest4.txt",ios::app|ios::out);
			cout<<"\n Guest details you want ";
		for(int i=1;i<201;i++)
		{
			cout<<"\nEnter your  idno = ";
			cin>>nn;
			if(nn==s_idno1[i])
				{		
						cout<<"\n\t==> Guests Of Student : "<<s_idno1[i];
						cout<<"\n\t==> GUEST NO : "<<no;
						cout<<"\n\t==> Guest Idno = "<<g_idno[i];
						cout<<"\n\t==> Guest name = "<<g_name[i];
						cout<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
						guest1<<"\n\t==> Guest Idno = "<<g_idno[i];
						guest1<<"\n\t==> Guest name = "<<g_name[i];
						guest1<<"\n\t==> Guest Mess Bill = "<<g_bil[i];
				}
				else
				{
				cout<<"\n You Entered wrong idno....\n";
				Sleep(3000);	
				}
			cout<<"\nDo you want to see more deatails of your guests [y/n]? ";
			cin>>y;
			if(y=='n')
			break;
		}
			guest1.write((char *)this, sizeof(guest1));
			cout<<"\nGuests File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			guest1.close();	
			Sleep(3000);		
			gust1_entrymenu();			
		}
void gust1_entrymenu()
	{
   	int s_s;
   	system("cls");
   	cout<<"\n\t========================================================================================\n\t\t\t\t\tWELCOME TO GUESTS MANAGEMENT SYSTEM\n\t========================================================================================";
	cout<<"\n\t\t\t\t select one of them ";
	cout<<"\n\t\t\t\t  1-Enter    Data of the guests";
	cout<<"\n\t\t\t\t  2-Display  Data of the guests";
	cout<<"\n\t\t\t\t  3-Main Menu\n\n\t";
		cin>>s_s;
			switch(s_s)
			{
				case 1:
				g_input1();	
					break;
				case 2:
				g_output1();
					break;
				case 3:
				
					break;
			}
   }				
};
class clothes4:public hostel4	
	{
	private:
	int iron,wash;
	char c_ch;
	public:
	void clothes()
	{system("cls");
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO CLOTHES MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\t==> Rs.5 Piece for ironing \n\t==> RS.12 Piece for washing \n\t==> You can uses this facility at least once a week.";
		cout<<"\n\n\n\tHave you used this facility before...?____'y/n' ";
		cin>>c_ch;
		if(c_ch=='n')
		{
			cout<<"\nHow many clothes you want to ironing = ";
			cin>>iron;
			cout<<"\nHow many clothes you want to washing = ";
			cin>>wash;
			ofstream clothes1;
			clothes1.open("4.clothes4.txt",ios::app|ios::out);
			int t_iron=iron*5;
			int t_wash=wash*12;
			int t_clothes=t_iron+t_wash;
			int h_share=((t_iron+t_wash)*15)/100;
			int t_income=t_clothes-h_share;
			cout<<"\n\n\t ======= >>>>> Deatails Are <<<<< ==========\n\n";
			cout<<"\n\t==>Ironing Rs."<<t_iron;
			cout<<"\n\t==>Washing Rs."<<t_wash;
			cout<<"\n\t==>Hostel Share Rs."<<h_share;
			cout<<"\n\t==>Total Income Rs."<<t_income;
			clothes1<<"\n\t==>Ironing Rs."<<t_iron;
			clothes1<<"\n\t==>Washing Rs."<<t_wash;
			clothes1<<"\n\t==>Hostel Share Rs."<<h_share;
			clothes1<<"\n\t==>Total Income Rs."<<t_income;
			Sleep(3000);
			clothes1.write((char *)this, sizeof(clothes1));
			cout<<"\n\n\nClothes File is sucessfully created......";
			cout<<"\nPress any key to continue";
			getch();
			clothes1.close();	
		}
		else
		cout<<"\n\t------------Not Allowed-------------\n\tYou can use this facility agian in next week____!!!";	
		Sleep(3000);
	}	
	};
class security4:public guests4{
	hostel4 h4;
	guests4 g4;
	private:
	int n;
	char y;
	public:
		void sec_input()
		{system("cls");
			ofstream h1_gstlist;
			h1_gstlist.open("4.Guestlist4.txt",ios::app|ios::out);
			
			cout<<"\n\n\t\t ==================== >>>>>> List Of Guests  <<<<<< ====================";
			for(int i=1;i<200;i++)
			{
			//	if(s_idno[i]==g_idno[i])
				{
				cout<<"\n\t==> Guest of student = "<<g4.s_idno1[i];	
				h1_gstlist<<"\n\t==> Guest of student = "<<g4.s_idno1[i];
				for(int i=1;i<4;i++)
				{
				cout<<"\n\t==> Guest Idno = "<<g4.g_idno[i];	
				h1_gstlist<<"\n\t==> Guest Idno = "<<g4.g_idno[i];
				cout<<"\nDo you want to exit [y/n]? ";
				cin>>y;
				if(y=='y')
				break;
				}
				break;
				}
				
			}
			h1_gstlist.write((char *)this, sizeof(h1_gstlist));
			cout<<"\nGuest list file for hostel1 is sucessfully created......";
			h1_gstlist.close();
			Security_menu();
		}
	void duty()
		{
			system("cls");
			string day_name[3],night_name[3],control_name[2];
			ofstream h1_sec2;
			cout<<"\n\n\t ==================== Duties ==================== ";
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in day time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>day_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the Guard who will perform thier duties in night time ";
			for(int i=1;i<3;i++)
			{
				cout<<"\nEnter the guard name = ";
				cin>>night_name[i];
			}
			cout<<"\n\n\tEnter the Nmae of the chief who will perform thier duty in control room ";
			for(int i=1;i<2;i++)
			{
				cout<<"\nEnter the chief name = ";
				cin>>control_name[i];
			}
			
			for(int i=1; i<3; i++)
			{
			h1_sec2.open("3.Duty3.txt",ios::app|ios::out);
			cout<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			cout<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			cout<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			h1_sec2<<"\n\t==> "<<day_name[i]<<" & "<<day_name[i+1]<<" have duties in DAY time ";
			h1_sec2<<"\n\t==> "<<night_name[i]<<" & "<<night_name[i+1]<<" have duties in NIGHT time ";
			h1_sec2<<"\n\t==> "<<control_name[i]<<" has dutiy in CONTROL room ";
			Sleep(3000);
			break;
			}
			h1_sec2.write((char *)this, sizeof(h1_sec2));
			cout<<"\nDuty  File for hostel1 is sucessfully created......";
			h1_sec2.close();
			Security_menu();
		}
	void trip()
		{
			system("cls");
			ofstream h1_sec3;
			h1_sec3.open("4.trip4.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t==================== Hostel1 Trip Plans  ====================";
 			cout<<"\n\t-->  Trip to Naran ";
 			cout<<"\n\t-->  Trip to Parks";
 			cout<<"\n\t-->  Trip to Muree ";
 			cout<<"\n\t-->  BoneFire once a Month";
 			Sleep(3000);
 			h1_sec3<<"\n\t--> Trip to Naran ";
 			h1_sec3<<"\n\t-->  Trip to Parks";
 			h1_sec3<<"\n\t-->  Trip to Muree ";
 			h1_sec3<<"\n\t-->  BoneFire once a Month";
 			h1_sec3.write((char *)this, sizeof(h1_sec3));
			cout<<"\nTrip File of hostel1 is sucessfully created......";
			h1_sec3.close();
			Security_menu();
			
			
		}
	void lost()
		{
			system("cls");
			ofstream h1_sec4;
			h1_sec4.open("4.lost4.txt",ios::app|ios::out);
			system("cls");
			cout<<"\n\t\t==================== Lost Things Fine ==================== ";
	  		cout<<"\n\n\t---------------------------";
	  		cout<<"\n\tName\t\tFine ";
	  		cout<<"\n\tRoom keys ------>Rs.100";
	  		cout<<"\n\tMobile --------->Rs.200";
	  		cout<<"\n\tUtensils ------->Rs.500";
	  		cout<<"\n\tChargers ------->Rs.500";
	  		cout<<"\n\tLate Coming----->Rs.150";
	  		Sleep(3000);
	  		h1_sec4<<"\n\tName\t\tFine ";
	  		h1_sec4<<"\n\tRoom keys ------>Rs.100";
	  		h1_sec4<<"\n\tMobile --------->Rs.200";
	  		h1_sec4<<"\n\tUtensils ------->Rs.500";
	  		h1_sec4<<"\n\tChargers ------->Rs.500";
	  		h1_sec4<<"\n\tLate Coming----->Rs.150";
			cout<<"\n\n\t---------------------------";
			h1_sec4.write((char *)this, sizeof(h1_sec4));
			cout<<"\nLost File of hostel1 is sucessfully created......";
			h1_sec4.close();
			Security_menu();
		}
   void Security_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SECURITY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Guests Datails";
			cout<<"\n\t --> 2-Duties";
			cout<<"\n\t --> 3-Trip";
			cout<<"\n\t --> 4-Lost Things";
			cout<<"\n\t --> 5-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					sec_input();
					break;
				case 2:
					duty();
					break;
				case 3:
					trip();
					break;
				case 4:
					lost();
					break;
				case 5:
					
					break;
			}
			
   }
};

class salary4:public hostel4{
	private:
		int student=15000;
		int manager=25000;
		int cook =15000;
		int sweepers=10000;
		int guards=15000;
		int servingboy=5000;
		public:
		void h1_salary()
		{
		system("cls");
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook;
		ofstream h1_salary;
		h1_salary.open("4.salary4.txt",ios::app|ios::out);
		cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO SALARY MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
		cout<<"\n\n\t--> Total income:      Rs."<<t_income;	
		cout<<"\n\t--> Salary of manager: Rs."<<manager;
		cout<<"\n\t--> Salary Cook:       Rs."<<cook;
		cout<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		cout<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		cout<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary<<"\n\n\t--> Total income:      Rs."<<t_income;	
		h1_salary<<"\n\t--> Salary of manager: Rs."<<manager;
		h1_salary<<"\n\t--> Salary Cook:       Rs."<<cook;
		h1_salary<<"\n\t--> Salary Sweepers:   Rs."<<t_sweepers;
		h1_salary<<"\n\t--> Salary Guards:     Rs."<<t_gurds;
		h1_salary<<"\n\t--> Salary Serving boy:Rs."<<servingboy;	
		h1_salary.write((char *)this, sizeof(h1_salary));
		cout<<"\nSalary File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_salary.close();	
		}	
};
class manag4 : public management,guests4
{
	guests1 g1;
	private:
	string	fines;
	int	fine[201],mess[201],t_bill[201],g_bill[201],s_dues[201],num,s_idno[201],no;
	char y;
	int student=15000,manager=25000,cook =15000,sweepers=10000, guards=15000,servingboy=5000;
	int	roomkeys=100,mobile =200,utensils=500,chargers=500,latecoming=150;
	security1 sec1;
	
	public:
	void bill()
	{system("cls");
	cout<<"\n\t==================== STUDENT FINE INFORMATION ====================";
		
		ofstream h1_fine1;
		h1_fine1.open("4.Fine4.txt",ios::app|ios::out);
		for(int i=1;i<201;i++)
		{	cout<<"\nDo you have any fine.....[y/n]?";
			cin>>y;
			if(y=='y')
			{	
				cout<<"\n\n\tName\t\tFine ";
	  			cout<<"\n\tRoom keys ------>Rs.100";
	  			cout<<"\n\tMobile --------->Rs.200";
	  			cout<<"\n\tUtensils ------->Rs.500";
	  			cout<<"\n\tChargers ------->Rs.500";
	  			cout<<"\n\tLate Coming----->Rs.150\n\n";
				cout<<"\nwhat kind of fine you have \nEnter Your Fine Name = ";
				cin>>fines;
				if(fines =="roomkeys")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(fine[i]+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<roomkeys;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines == "mobile")
				{
					
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mobile+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<mobile;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="utensils")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(utensils+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<utensils;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="chargers")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(chargers+mess[i]+g1.g_bil[i]);
					cout<<"\n\t ==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<chargers;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
				if(fines =="latecoming")
				{
					cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(latecoming+mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					
					h1_fine1<<"\n\t ==> Your   Fine "<<i<<" student    Rs."<<latecoming;
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
				}
					cout<<"\ndo you want to enter more entries [y/n]? ";
					cin>>y;
					if(y=='n')
					break;	
			}
			else
			{		cout<<"\nEnter your mess bill = ";
					cin>>mess[i];
					cout<<"\nEnter your guest mess bill = ";
					cin>>g_bill[i];
					cout<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					cout<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
				//	cout<<"\n\t==> Guest  Bill "<<i<<" student    Rs."<<g1.g_bil[i];
				    t_bill[i]=(mess[i]+g1.g_bil[i]);
					cout<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
					h1_fine1<<"\n\t ==> Mess   Bill "<<i<<" student    Rs."<<mess[i];
					h1_fine1<<"\n\t ==> Guest  Bill "<<i<<" student    Rs."<<g_bill[i];
					h1_fine1<<"\n\t==> Total  Bill "<<i<<" student    Rs."<<t_bill[i];
			}
		
		}
		h1_fine1.write((char *)this, sizeof(h1_fine1));
		h1_fine1.close();
		cout<<"\nFine File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();	
		bill_menu();
	}
	
	
	void hostelprofit()
	{
		system("cls");
	cout<<"\n\t==================== HOSTEL PROFIT INFORMATION ====================\n\n";
		int t_income=student*200;
		int t_sweepers=sweepers*4;
		int t_gurds=guards*5;
		int t_electric=200*4000;
		int r_income=t_income-manager-t_sweepers-t_gurds-servingboy-cook-t_electric;
	
		ofstream h1_profit;
		h1_profit.open("4.Hostel4 profit.txt",ios::app|ios::out);
		cout<<"\n\n\t ==> Total Hostel income : "<<t_income;
		cout<<"\n\t ==> Hostel profit         : "<<r_income;
		h1_profit<<"\n ==> Total Hostel income = "<<t_income;
		h1_profit<<"\n ==> Hostel profit = "<<r_income;
		h1_profit.write((char *)this, sizeof(h1_profit));
		h1_profit.close();
		cout<<"\nHostel profit File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
	bill_menu();
		
	}	
	void studentdues_input()
	{system("cls");
		cout<<"\n\t==================== ENTER STUDENT DUES INFORMATION ====================";
		cout<<"\n\t==>Enter student number ";
		cin>>num;
		for(int i=num; i<201; i++)
			{
			cout<<"\nEnter student idno = ";
			cin>>s_idno[i];
			cout<<"\nEnter student dues = ";
			cin>>s_dues[i];
		   cout<<"\nDo you want to enter more dues of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
			bill_menu();
	}
	void studentdues_output()
	{system("cls");
		cout<<"\n\t==================== STUDENT DUES INFORMATION ====================";
		ofstream h1_dues;
		h1_dues.open("4.Student Dues4.txt",ios::app|ios::out);
			for(int i=num; i<201; i++)
			{
		cout<<"\n\t==>Enter idno number ";
		cin>>no;
			if(no==s_idno[i])
			cout<<"\n\t ==> Student number "<<i;
			cout<<"\n\t ==> Student idno = "<<s_idno[i];
			cout<<"\n\t ==> Student dues = "<<s_dues[i];
			h1_dues<<"\n\t ==> Student idno = "<<s_idno[i];
			h1_dues<<"\n\t ==> Student dues= "<<s_dues[i];
		    cout<<"\nDo you want to see more dues  of the students [y/n]? ";
			cin>>y;
			if(y=='n')
			break;	
			}
		h1_dues.write((char *)this, sizeof(h1_dues));	
		cout<<"\nStudent Dues File is sucessfully created......";
		cout<<"\nPress any key to continue";
		getch();
		h1_dues.close();
		bill_menu();
	}
	void bill_menu(){
   	
   	system("cls");
   	int s_s;
   	cout<<"\n\t========================================================================================\n\t\t\t\tWELCOME TO ACCOUNT MANAGEMENT SYSTEM\n\t========================================================================================";
		cout<<"\n";
			cout<<"\n\t\t select one ";
			cout<<"\n\t --> 1-Students Total Bils";
			cout<<"\n\t --> 2-To See Hostel Profit";
			cout<<"\n\t --> 3-To Enter Student Dues";
			cout<<"\n\t --> 4-To Display Student Dues";
			cout<<"\n\t --> 6-Main Menu\n\n\t ";
			cin>>s_s;
			switch(s_s){
				case 1:
					bill();
					break;
				case 2:
					hostelprofit();
					break;
				case 3:
					studentdues_input();
					break;
				case 4:
					studentdues_output();
					break;
				case 5:
					
					break;
			}
			
   }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





int main()
{
int n;
management mng;
	
	int c;
	hostel1 h1;
	mess1 m1;
	guests1 g1;
	clothes1 c1;
	security1 s1;
	salary1 sl1;
	manag1 mn1;	
	
	hostel2 h2;
	mess2 m2;
	guests2 g2;
	clothes2 c2;
	security2 s2;
	salary2 sl2;
	manag2 mn2;
	
	hostel3 h3;
	mess3 m3;
	guests3 g3;
	clothes3 c3;
	security3 s3;
	salary3 sl3;
	manag3 mn3;
	
	hostel4 h4;
	mess4 m4;
	guests4 g4;
	clothes4 c4;
	security4 s4;
	salary4 sl4;
	manag4 mn4;
	a:
	c:
	e:
	g:	
	system("cls");	
	cout<<"\n\t========================================================================================\n\t\t\t\t\tHOSTEL MANAGEMENT SYSTEM\n\t========================================================================================\n";
	cout<<"\n\n\n\t\t\t=== >>  Press 1 for Boy Hostel1\n\t\t\t=== >>  Press 2 for Boy Hostel2\n\t\t\t=== >>  Press 3 for Boy Hostel3\n\t\t\t=== >>  Press 4 for Girl Hostel\n\t\t\t=== >>  Press 5 exit\n";
	cin>>n;
	switch(n)
	{ b:
	
		case 1:
		system("cls");	
		cout<<"\n\t========================================================================================\n\t\t\t\t\tBOY HOSTEL 1 MANAGEMENT SYSTEM\n\t========================================================================================\n";
		cout<<"\n\n\t\t\t--- >> Press 1 STUDENT MANAGEMENT SYSTEM \n\t\t\t--- >> Press 2 MESS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 3 GUESTS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 4 CLOTHES MANAGEMENT SYSTEM\n\t\t\t--- >> Press 5 SECURITY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 6 SALARY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 7 ACCOUNT MANAGEMENT SYSTEM\n\t\t\t--- >> Press 9 RETURN TO MAIN MENU OF HOSTELS \n";
		cin>>n;
		if(n==1)
		{
		mng.manage();
		h1.stu1_entrymenu();
		}
		if(n==2)
		{
		m1.mess1_menu();	
		}
		if(n==3)
		{
		g1.gust1_entrymenu();	
		}
		if(n==4)
		{
		c1.clothes();	
		}
		if(n==5)
		{
		s1.Security_menu();	
		}
		if(n==6)
		{
		sl1.h1_salary();	
		}
		if(n==7)
		{
		mn1.bill_menu();	
		}
		if(n==9)
		{
		 goto a;	
		}
		goto b;
		break;
		
		d:
		case 2:
		system("cls");	
		cout<<"\n\t========================================================================================\n\t\t\t\t\tBOY HOSTEL 2 MANAGEMENT SYSTEM\n\t========================================================================================\n";
		cout<<"\n\n\t\t\t--- >> Press 1 STUDENT MANAGEMENT SYSTEM \n\t\t\t--- >> Press 2 MESS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 3 GUESTS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 4 CLOTHES MANAGEMENT SYSTEM\n\t\t\t--- >> Press 5 SECURITY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 6 SALARY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 7 ACCOUNT MANAGEMENT SYSTEM\n\t\t\t--- >> Press 9 RETURN TO MAIN MENU OF HOSTELS \n";
		cin>>n;
		if(n==1)
		{
		mng.manage();
		h2.stu1_entrymenu();
		}
		if(n==2)
		{
		m2.mess1_menu();	
		}
		if(n==3)
		{
		g2.gust1_entrymenu();	
		}
		if(n==4)
		{
		c2.clothes();	
		}
		if(n==5)
		{
		s2.Security_menu();	
		}
		if(n==6)
		{
		sl2.h1_salary();	
		}
		if(n==7)
		{
		mn2.bill_menu();	
		}
		if(n==9)
		{
		 goto c;	
		}
		goto d;	
		break;
		
		f:
		case 3:
		system("cls");	
		cout<<"\n\t========================================================================================\n\t\t\t\t\tBOY HOSTEL 3 MANAGEMENT SYSTEM\n\t========================================================================================\n";
		cout<<"\n\n\t\t\t--- >> Press 1 STUDENT MANAGEMENT SYSTEM \n\t\t\t--- >> Press 2 MESS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 3 GUESTS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 4 CLOTHES MANAGEMENT SYSTEM\n\t\t\t--- >> Press 5 SECURITY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 6 SALARY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 7 ACCOUNT MANAGEMENT SYSTEM\n\t\t\t--- >> Press 9 RETURN TO MAIN MENU OF HOSTELS \n";
		cin>>n;
		if(n==1)
		{
		mng.manage();
		h3.stu1_entrymenu();
		}
		if(n==2)
		{
		m3.mess1_menu();	
		}
		if(n==3)
		{
		g3.gust1_entrymenu();	
		}
		if(n==4)
		{
		c3.clothes();	
		}
		if(n==5)
		{
		s3.Security_menu();	
		}
		if(n==6)
		{
		sl3.h1_salary();	
		}
		if(n==7)
		{
		mn3.bill_menu();	
		}
		if(n==9)
		{
		 goto e;	
		}
		goto f;	
		break;
		
	
	
		h:	
		case 4:
		system("cls");	
		cout<<"\n\t========================================================================================\n\t\t\t\t\tGIRLS HOSTEL  MANAGEMENT SYSTEM\n\t========================================================================================\n";
		cout<<"\n\n\t\t\t--- >> Press 1 STUDENT MANAGEMENT SYSTEM \n\t\t\t--- >> Press 2 MESS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 3 GUESTS MANAGEMENT SYSTEM\n\t\t\t--- >> Press 4 CLOTHES MANAGEMENT SYSTEM\n\t\t\t--- >> Press 5 SECURITY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 6 SALARY MANAGEMENT SYSTEM\n\t\t\t--- >> Press 7 ACCOUNT MANAGEMENT SYSTEM\n\t\t\t--- >> Press 9 RETURN TO MAIN MENU OF HOSTELS \n";
		cin>>n;
		if(n==1)
		{
		mng.manage();
		h4.stu1_entrymenu();
		}
		if(n==2)
		{
		m4.mess1_menu();	
		}
		if(n==3)
		{
		g4.gust1_entrymenu();	
		}
		if(n==4)
		{
		c4.clothes();	
		}
		if(n==5)
		{
		s4.Security_menu();	
		}
		if(n==6)
		{
		sl4.h1_salary();	
		}
		if(n==7)
		{
		mn4.bill_menu();	
		}
		if(n==9)
		{
		 goto g;	
		}
		goto h;	
		break;
		case 5:
		break;
		default:
		cout<<"\nwrong choice ";		
		
	}
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
