//// Library management system
//  Group members
// AmaricaN 16mdele0382
// Shahzad   16mdele0412
/////////////////////////////////////////////////////////////////////////////////////  
#include<vector>
#include<iostream>               //header files
#include<string>

    using namespace std;
    int tnoofstdnts=6;            // total no of students
    int allbooks=100;               // no of total books in library
    int typebooks=4;             // no of all types of book in libraary

    class Student;               // declacing of class Student

     class Book
  {
   
        public:                  // used for storing information of books

	    int bno;
	    string bname;
	    string aname;
    	int  bquantity;
	
	      void showbk()              //to show all the information about books
	 {                            
	      cout<<"\n\t BOOK TYPE:"<<typebooks<<"\n\n\tBook no. :  "<<bno<<"\n\tBook Name :  "<<bname<<"\n\tAuthor Name : ";
	      cout<<aname<<"\n\tBook bquantity : "<<bquantity<<"\n\n";
	 }

 
   };
////////////////////////////////////////
   class Student                               
  {	
 
          public:
                                  //used for storing student's data
	      string sname,sregno,sdepart;
          string sbook="None";
	      int sbno=0;
	
          void  ps()                   //to show all the information of Student  
     {                            
    	  cout<<"\n \t Student Name : "<<sname<<endl<<" \t Student Department : "<<sdepart<<endl<<" \t Student RegNo : "<<sregno<<endl;
		  cout<<" \t No of Book Issued to Student : "<<sbno<<endl<<" \t Book Issued to Student : "<<sbook<<endl;
	 }


  };

////////////////////////////////////////


//decleratrion of all the funtions used in the class


     void mainmenu();
     void addstudent(vector<Student>&);
     void showstudent(vector<Student>&);
     void deletestudent(vector<Student>&);
     void searchstudent(vector<Student>&);
     void addBooks(vector<Book>&);
     void showbook(vector<Book>&);
     void searchbook(vector<Book>&);
     void deletebook(vector<Book>&); 
     void issuebook(vector<Student>& ,vector<Book>&);
     void receivebook(vector<Student>& ,vector<Book>&);

////////////////////////////////////////

      vector<Student> s;                 //global decleration of vector of object of class student
              
      vector<Book> b;                   //global decleration of vector of object of class students


////////////////////////////////////////
  
  
   main()
  { 	                  //main funtion of programme
   	
       cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	
	cout<<"\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
    Student s2,s3,s4,s5,s6,s7;
     	s2.sname="Amir_Khan";
     	s2.sdepart="Electrical_Comm";
     	s2.sregno="16MDELE0382";
		s.push_back(s2);
		s3.sname="Shahzad";
     	s3.sdepart="Electrical_Comm";
     	s3.sregno="16MDELE0412";
		s.push_back(s3);
	    s4.sname="Talha_Haris";
     	s4.sdepart="Telecom";
     	s4.sregno="16MDTLE0705";
		s.push_back(s4);
	    s5.sname="Tanvir_Khan";
     	s5.sdepart="Telecom";
     	s5.sregno="16MDTLE0756";
		s.push_back(s5);
		s6.sname="Noor_Alam";
     	s6.sdepart="Software";
     	s6.sregno="16MDCSC0876";
		s.push_back(s6);
		s7.sname="Asad_Khan";
     	s7.sdepart="Software";
     	s7.sregno="16MDCSC890";
		s.push_back(s7);
	Book b1,b2,b3,b4;
		b1.bno=1;
     	b1.bname="C_programing";
     	b1.aname="Yashwant_Katnekar";
     	b1.bquantity=25;
		b.push_back(b1);
        b2.bno=2;
     	b2.bname="Kulyate_Iqbal";
     	b2.aname="Dr.Allama_Iqbal";
     	b2.bquantity=25;
		b.push_back(b2);
		b3.bno=3;
     	b3.bname="Mathematical_Method";
     	b3.aname="Abdul_Majeed";
     	b3.bquantity=25;
		b.push_back(b3);
		b1.bno=4;
     	b4.bname="Circuit_Analysis";
     	b4.aname="Steven_M.Durbin";
     	b4.bquantity=25;
		b.push_back(b4);
	mainmenu();
    
 }
 
//////////////////////////////////////


void receivebook(vector<Student>& s1 ,vector<Book>& b1)    //funtion used to recieve of an issued book
{ 
      string  a,ab;
      int i,j;
	  char x;
   do                     
   
 {
	  cout<<"\n\n \t Riceive a Book";
      cout<<"\n \t Enter the Reg No of Student : ";
      cin>>a;
      
	  for(i=0; i<tnoofstdnts; i++)
	
	  if(a==s1[i].sregno)
  {     
      cout<<" \n\n \t Enter the Book's Name : ";
      cin>>ab;
	
	for(j=0; j<typebooks; j++)
	
	  if(ab==s1[j].sbook)
	{
		allbooks=allbooks+1;
		typebooks=typebooks +1;
		s1[j].sbook='NULL';
		s1[j].sbno=s1[j].sbno - 1;
		cout<<"\n \t Book recieved ";
		
		
	}
 
 }
        cout<<" \n\n\t Want to Delete more books ( y / n) : ";
		cin>>x; 		
}

while(x=='y' || x=='Y');
		
}

////////////////////////////////////////


void issuebook(vector<Student>& s1,vector<Book>& b1) //funtion used for issuing of a book to a student
{	 
      string a,ab;
      int i,j;
      char x;
      
    do
	{
	
      cout<<"\n\n \t Isse a Book";
     	
      cout<<"\n \t Enter the Reg No of Student : ";
      cin>>a;
      for(i=0; i<tnoofstdnts; i++)
	
	  if(a==s1[i].sregno)
     {     
 
      cout<<" \n\n \t Enter the Book's Name : ";
      cin>>ab;
     
	  for(j=0; j<typebooks; j++)
	
	  if(ab==b1[j].bname)
	  { 
	     s1[i].sbook=ab;
	     s1[i].sbno=s1[i].sbno + 1;
	     allbooks=allbooks-1;
	     typebooks=typebooks-1;
	     cout<<"\n\n Book Issued";
	 }

     }
        cout<<" \n\n\t Want to Issue more books ( y / n) : ";
		cin>>x;
   }
 while(x=='y' || x=='Y');

}

//////////////////////////////////////////////


void deletebook(vector<Book>& b1)         //funtion used for deletion of a present book
{
      int b;
      char x;
      string a;	
      
    do
	{
	  cout<<"\n\n \t Delete a  Book \n\n \t Enter the Name of Book : ";
      cin>>a;
    
	 for(unsigned i=0; i<typebooks; i++)
	
	  if(a==b1[i].bname)
    {
    	
      if(true) 
	   
      {
     	 cout<<"\n\n \t  Enter the Quantity : ";
     	 cin>>b;
     	 if(b==b1[i].bquantity)
	 	{
	   
	     b1.erase(b1.begin() +i);
		 cout<<"\n \t Book Deleted";
		 b1[i].bquantity=b1[i].bquantity-b;
		 allbooks=allbooks-b;
         typebooks=typebooks -1;
		
		}
		else if(b<b1[i].bquantity)
		{
			
	     cout<<"\n \t Book Deleted";
	     b1[i].bquantity=b1[i].bquantity-b;
		 allbooks=allbooks-b;
		
		}
		else if(b>b1[i].bquantity)
		{
	     cout<<"\n \t No fo Books you want to Delete > No of Books present ";
		}
    
		else 
        cout<<"\n \t Name of Book not found";
     }}
     
	    cout<<" \n\n\t Want to Delete more books ( y / n) : ";
		cin>>x;
       }
 while(x=='y' || x=='Y');

}

////////////////////////////////////////////////


void searchbook(vector<Book>&b1)      //funtion used for searching of a book
{
	  string a;
      int i;	
      cout<<"\n\n \t Search a Book \n \t Enter the Book's Name : ";
      cin>>a;
      
      for(i=0; i<typebooks; i++)
	{
	  
	  if(a==b1[i].bname)
	  {
	    
		  b1[i].showbk();
	    
	  }  
	
	  else 
      cout<<"\nName of Book Not Found\n\n";	   
	
	}

}	

////////////////////////////////////////////////////////	
	

void showbook(vector<Book>&b1)        // funtion used to show all books
{   
    cout<<"\n\n\t Showing all Books"<<"\n\n\tTotal Books:"<<allbooks;
	
	for(unsigned i=0; i<typebooks; i++)
	{
		
		b1[i].showbk();
		
	}
		
} 

/////////////////////////////////////////////////////////
 
void addBooks(vector<Book> &b1)             //funtion for adding of new books
{  
	unsigned int i,j,k;
	unsigned char x;
    string a,b; 

do {

	    cout<<"\n \t Adding Books \n";
	    cout<<"\n \t Enter Book  No : ";
	    cin>>j;
		cout<<"\n \t Enter Book  Name : ";
	    cin>>a;
	    cout<<"\n \t Enter Book's Authour Name : ";
	    cin>>b;  
	    cout<<"\n \t Enter Book's Quantity : ";
	    cin>>k;
		
		Book b2;
		b2.bno=j;
     	b2.bname=a;
     	b2.aname=b;
     	b2.bquantity=k;
		b1.push_back(b2);
		allbooks=allbooks+ k;
		typebooks=typebooks +1;
		cout<<"\n \t Book Added \n\n \t Want to Add more books ( y / n) : ";
		cin>>x;
	 
   }

    while(x=='y' || x=='Y');

}

////////////////////////////////////////////

void searchstudent(vector<Student> &s1)    //funtion for searching of student
{
	    string a;
    	unsigned char x;
        unsigned int i;	
        cout<<"\n\n \t Search a Student Account\n\n \t Enter the Reg No of Student : ";
        cin>>a;
   do
 {
   	
    for(i=0; i<tnoofstdnts; i++) 
  {

	  if(a==s1[i].sregno)
	  {
	  	if(1)
	    {
		  s1[i].ps();
	    }
	     
		  else 
          cout<<"\nReg No of Student Not Found\n\n \t Want to Add more books ( y / n) : ";
		cin>>x;
      }
   }
 }
 
   while(x=='y' || x=='Y');

}


////////////////////////////////////////////////////////////


void deletestudent(vector<Student> &s1)    // funtion for deletion of a student account
{
      string a;
      char x;
      int i;	
do{

      cout<<"\n\n \t Delete a Student Account\n\n \t Enter the Reg No of Student : ";
      cin>>a;
      for(i=0; i<tnoofstdnts; i++)
	{
	  
	  	if(a==s1[i].sregno)
	    {
		   s1.erase(s1.begin() +i);
	  	   tnoofstdnts=tnoofstdnts-1;
		   cout<<"\n\n Student Account deleted\n";
	    }
	    else if  (a!=s1[i].sregno)
	    cout<<"\n \tReg No of Student Not Found\n\n "; 
		}
		
          
	      cout<<"\t Want to delete more  Students Actnoofstdnts (Y / N) : ";
		  cin>>x;
	}
	
while(x=='y' || x=='Y'); 		
}


//////////////////////////////////////////////////////////


void  showstudent(vector<Student> &s1)          //funtion for showing of all student accounts details along with book issued
{   
    unsigned int i=0;
	 
    cout<<"\n\n \t Showing All Students\n\n\t Total no of students : "<<tnoofstdnts<<"\n\n";
	for(i=0; i<tnoofstdnts; i++)  
	{
			 	
	cout<<"\n \t Student Name : "<<s1[i].sname<<endl<<" \t Student Department : "<<s1[i].sdepart<<endl;
	cout<<" \t Student RegNo : "<<s1[i].sregno<<endl<<" \t No of Book Issued to Student : "<<s1[i].sbno<<endl;
	cout<<" \t Book Issued to Student : "<<s1[i].sbook<<endl;
	
	}
}
///////////////////////////////////////////////////////////

	                                      
void  addstudent(vector<Student>& s1)        //funtion for adding of students' accounts
{   unsigned char x;
    string a,b,c; 
do
	{   
	    cout<<"\n \t Adding Students \n";
		cout<<"\n \t Student Name : ";
	    cin>>a;
	    cout<<"\n \t Student Department : ";
	    cin>>b;
	    cout<<"\n \t Student Reg No : ";
	    cin>>c;
		
		Student s2;
     	s2.sname=a;
     	s2.sdepart=b;
     	s2.sregno=c;
		s1.push_back(s2);
		tnoofstdnts=tnoofstdnts+1;
		cout<<"\n \t Student Added\n\n  \t Want to Add more Students (Y / N) : ";
		cin>>x;
	 
}
while(x=='y' || x=='Y'); 	
} 

/////////////////////////////////////////////////////////////


void mainmenu()                    //funtion of the mainmenu of programme
{   
    while (1)
    
{
	
    
    int  a;

	cout<<"\n  \t\t Enter The Corresponding no For your desirable Funtion \n\n";
	cout<<"\t\t 1 : Admin Section\n\n \t\t 2 : Book Information \n\n \t\t 3 : Studdent Information  \n\n \t\t";
    cout<<" 0 : Terminate the Programme \n\n\n\t\t\t";
	
	cin>>a;

	cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
	
	

  	switch(a)       //first switch for the selection of  Admin Seaction,book information section and student information section

	{
	
	    case 0:
        
        {            cout<<"\n\n\n\t\t*****||!!** AmaricaN & Shahzad **!!||*****\n\n\n ";
                     exit(0);
                     break;
        }
	case 1:
 {                   int z;
                     system("cls");
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
			         cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n";
			         cout<<" \t\t****Admin Section*****\n\n";
			         cout<<"\t\t 1 : Add New Book \n\n \t\t 2 : Delete a Book \n\n \t\t 3 : Add New Studdent Account \n\n\t\t";
			         cout<<" 4 : Delete an Account of existing Student  \n\n\t\t 5 : Issue a Book to a Student  \n\n\t\t 6 : Receive a Book from Student  \n\n\t\t 7 : Return to Mainmenu  \n\n \t\t ";
			         cin>>z;
                     cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
     
	 switch (z)          //second switch for the selection in  Admin Seaction
     {
	 
            case 1:
        {
           	
			         system("cls");
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
			         addBooks(b);
			         cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
			         main();
                     break;
            
        }
          
			case 2:
		{
		 	    
			         system("cls");
                     cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
			         deletebook(b);
         	         cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
			         main();
			         break;
		    
		}
		 
		 	case 3:
	   	{
		             system("cls");
                     cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
			         addstudent(s);
	                 cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
		          	 main();
                     break;
            
		
		}

		    
			case 4:
	   {
			         system("cls");
                     cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
			         deletestudent(s);
	                 cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
			         main();
			         break;
			
		}	
		    case 5:
		{
		             system("cls");
                     cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
			         issuebook(s,b);
	                 cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
			         main();
			         break;
			
		}
		    case 6:
        {
		             system("cls");
                     cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
			         cout<<" \t\t****Admin Section*****\n\n\n\n";
	      	         receivebook(s,b);
        	         cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
			         main();
			         break;
			
	    }
		
			case 7:		
		{		
                     system("cls");
                     main();
                     break;
         
		}  
		
		   default:
        {
         		     cout<<"\n\n\n \t\t****Invalid Input*****\n\n\n\n\n\n\n\n\n";
		             break;
     
	  	}
	  	
  }
  
  }
  

	case 2:
		
	{   
	                 int z;
	                 char g;
	                 system("cls");
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
	                 cout<<" \t\t****Book Information section*****\n\n\n\n";
	                 cout<<"\t\t 1 : Show All Book \n\n \t\t 2 : Search a Book \n\n \t\t 3 : Return to Mainmenu \n\n \t\t ";
                     cin>>z;
                     cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
	  switch (z)      //Third switch for selection in book information secton
	 
	 {      
		 	
			case 1:
        {   
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
	                 cout<<" \t\t****Book Information section*****\n\n\n\n";
			         showbook(b);
			         cout<<"\n\n \t Enter any key to return to main";
			         cin>>g;
			         cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****"; 
					 system("cls");
			         main();
           	         break;
		}
	
			case 2:
		{   
   	                 cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
	                 cout<<" \t\t****Book Information*****\n\n\n\n";
                 	 searchbook(b);
           	         cout<<"\n\n \t Enter any key to return to main";
			         cin>>g;
			         cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";

			         system("cls");
			         main();
           	         break;
		    
		}
		    case 3:
        { 	
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
	                 cout<<" \t\t****Book Information*****\n\n\n\n";
		             cout<<"\n\n\n\n\n\n*****!!||******************************************||!!*****";
                     system("cls");
                     main();
                     break;
		}
             
			default:
        {
		             cout<<"\n\n\n \t\t****Invalid Input*****\n\n\n\n\n\n\n\n\n";
    	             system("cls");
		   
      	}
      	
    }
   }
  
   case  3:
  {         
	                 int z;
   	                 system("cls");
                     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
                     cout<<" \t\t****Student  Information Section*****\n\n\n\n";
                     cout<<"\t\t 1 : Show All Students \n\n \t\t 2 : Search a Student \n\n \t\t 3 : Return to Mainmenu  \n\n \t\t " ;
               
                     cin>>z;
            
     switch (z)     //Forth switch for secton of student informaton section
     {
	 
            case 1:
      	{            system("cls"); 
             	     cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
                     cout<<" \t\t****Student  Information Section*****\n\n\n\n";
            		 showstudent(s);
             		 break;
		}
		
			 case 2:
	    {            system("cls");
			 		 cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                 cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
                     cout<<" \t\t****Student  Information Section*****\n\n\n\n"; 
	   				 searchstudent(s);
			 		 break;
		}
			 case 3:
			 	    
	    {           cout<<"\t\t*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	                cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
                    cout<<" \t\t****Student  Information Section*****\n\n\n\n";
			        system("cls");
                    main();
                    break;
        }
        
		    default:
        {
		           cout<<"*****!!||**Bismillah, ar-Rahman, ar-Rahim**||!!*****\n\n ";
	               cout<<"\n\n \t\t****Welcome To UET Mardan Library*****\n\n\n";
                   cout<<" \t\t****Student  Information Section*****\n\n\n\n";
		           cout<<"\n\n\n \t\t****Invalid Input*****\n\n\n\n\n\n\n\n\n";
    	           system("cls");
    	           main();
        }
     
    }
  }
             default:
    {
	              unsigned char g;
               	  cout<<"\n\n\n \t\t****Invalid Input*****\n\n\n\n\n\n\n\n\n";
                  cout<<"\n \t\tEnter any key to return to Mainmenu :";
	              cin>>g;
	              cout<<"\n\n\n*****||!!** AmaricaN & Shahzad **!!||***** \n\n";
	              system("cls");
	              main();
		
   }
  }
 }
}

