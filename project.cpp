#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstring>
#include<termios.h>
using namespace std;

class User 
  
        {
         protected:
         
         string username;
         string password;
         int no.of.std;
         int max.std;
         int no.of.teacher;
         int max.teacher;
         public:
         User(int max.std,string  username,int max.teacher,string password)
         
         {
            this->username=username;
            this->max.std=max.std;
            this->max.teacher->;
            this->password=password;
            string getUname()const 
            {
               return username;
               }
             string getPword()const
             {
                 return password;
                 }
            virtual bool verify(string username,string password)const
             {
                if (this->username=username && this->password=password)
                {
                  return true;
                  }
                  }
                  virtual void DisplayCourses()
	{
		cout<<"Sr#	Name			  		Code"<<endl;
		cout<<"1.	Programming Fundamentals  		CS-101"<<endl;
		cout<<"2.	Data Structures	        		CS-301"<<endl;
		cout<<"3.	Introduction to computing 		CS-102"<<endl;
		cout<<"4.	OOPS                            	CS-201"<<endl;
		cout<<"5.	Analysis of alogrithms	  		CS-302"<<endl;
		cout<<"6.	Software requirement Engineering	SE-301"<<endl;
		cout<<"7.	Big Data Analysis			CS-407"<<endl;
		cout<<"8.	Research Methodoloy			CS-501"<<endl;
		cout<<"9.       Deep Learning                           CS-601"<<endl;
		cout<<"10.	Artificial Intelligence		        CS-307"<<endl;
		cout<<"11.	Digital Image Processing		CS-409"<<endl;
	}
	  };     
bool Logindata(const string& filename,User& user)
      {
	ifstream file(filename);
	{
	string Name,Pass,line;
	while(getline(file,line))
	{
		file>>Name>>Pass;
		if(user.verify(Name,Pass))
		{
			return true;
			break;
		}
	}
	}
	file.close();
	return false;
			}

class Student:public User
	  {
               protected:
               string username;
               string password;
               public:
               Student(string username,string password)
               {
                   this->username=username;
                   this->password=password;
                   		   }
               string getUsname()const
               {
                   return username;
                   }
               string getPaword()const
               {
                   return password;
                   }
              void DisplayCourses()
	{
		cout<<"Sr#	Name			  		Code"<<endl;
		cout<<"1.	Programming Fundamentals  		CS-101"<<endl;
		cout<<"2.	Data Structures	        		CS-301"<<endl;
		cout<<"3.	Introduction to computing 		CS-102"<<endl;
		cout<<"4.	OOPS                            	CS-201"<<endl;
		cout<<"5.	Analysis of alogrithms	  		CS-302"<<endl;
		cout<<"6.	Software requirement Engineering	SE-301"<<endl;
		cout<<"7.	Big Data Analysis			CS-407"<<endl;
		cout<<"8.	Research Methodoloy			CS-501"<<endl;
		cout<<"9.       Deep Learning                           CS-601"<<endl;
		cout<<"10.	Artificial Intelligence		        CS-307"<<endl;
		cout<<"11.	Digital Image Processing		CS-409"<<endl;
	}
	  };       
class Teacher:public User
             {
                protected:
               string username;
               string password;
               public:
               Student(string username,string password)
               {
                   this->username=username;
                   this->password=password;
                   		   }
               string getUsname()const
               {
                   return username;
                   }
               string getPaword()const
               {
                   return password;
                   }
              void DisplayCourses()
	{
		cout<<"Sr#	Name			  		Code"<<endl;
		cout<<"1.	Programming Fundamentals  		CS-101"<<endl;
		cout<<"2.	Data Structures	        		CS-301"<<endl;
		cout<<"3.	Introduction to computing 		CS-102"<<endl;
		cout<<"4.	OOPS                            	CS-201"<<endl;
		cout<<"5.	Analysis of alogrithms	  		CS-302"<<endl;
		cout<<"6.	Software requirement Engineering	SE-301"<<endl;
		cout<<"7.	Big Data Analysis			CS-407"<<endl;
		cout<<"8.	Research Methodoloy			CS-501"<<endl;
		cout<<"9.       Deep Learning                           CS-601"<<endl;
		cout<<"10.	Artificial Intelligence		        CS-307"<<endl;
		cout<<"11.	Digital Image Processing		CS-409"<<endl;
	}
	  };   
class Date()      
       {
            protected:
            int day;
            string month;
            int hour;
            public:
            Date(int day,string month,int hour)
               {
                   this->day=day;
                   this->month=month;
                   this->hour=hour;
                   }           
             int get.Day()const
             {
                 return day;
                             }
              int get.hour()const
              {
                  return hour;
                               }
               string get.month()const
               {
                    return month;
                                  }
                                  };                                           		   
class Time()
         {
             protected:            
             int hours;
             int mins;
             public:
             time(int hours,int mins)
             {
                this->hours=hours;
                this->mins=mins;
                		}
               int getHours() const 
               {
                    return hours;
                    		}
                int getMins() const 
                {
                      return mins;
                      			}
               int addMins(int mins)
               {  
                   Time temp;
                  while(mins>60)
                  {   
                    temp.hours++;
			mins=mins-60;
					}
		temp.mins=mins;
		return temp;
                            			    		
                }
                 };
class Question
	{
	protected:
	string qs;
	public:
	Question(string qs)
	{
		this->qs=qs;
	}
	string getQs()
	{
		return qs;
	}
	virtual void display()
	{
		cout<<qs<<endl;
			}
	virtual void Answer()
	{ 
	    //student will write his.her own answer
	    	}
				};    
class Course				             
	{
	   protected:
	   string courses;
	   static int no.of.std;
	   Student** std; //to point to another pointer array
	   Course(string courses)
	   {
	       this->courses=courses;
	       std=new Student*[no.of.std];
	       				}
	    string getCourse()const
	    { 
	       return courses;
	       			}
	    static int getNo.of.std()
		{
		return no.of.std;
			}   
	Student** getstd()const
	{
	   return std;
	   }
	   void addstd(Student *Std)
	   {
	      student[no.of.std]=std;
	      no.of.std++;
	      }
	      };
class MCQs:public Question
      {
        protected:
 	
	string *choice;
	
	int correctopt;
	int no.of.options;
	
	public:
	MCQ(int num.of.options,string *choice,string qs,int correctopt)
	{
		this->num.of.options=num.of.options;
		this->choice=choice;
		this->qs=qs;
		this->correctopt=correctopt;
		}
	}
	int get.no.Options()
	{
		return num.of.options;
	}
	string* getChoice()
	{
		return choice;
	}
	void display()
	{
		cout<<qs<<endl;
		for(int i=0;i<num.of.options;i++)
		{
			cout<<"Your choices are "<<": "<<options[i]<<endl;
		}
	}
		};	      					  				
class Subjective:public Question
	{
	protected;
	string ans;
	public:
	Subjective(string qs,string ans)
	{
		this->qs=qs;
		this->ans=ans;
		}
	
	void display()
	{
		Question::public display();
		cout<<"Answer: "<<answer<<endl;
	}
	void WriteYourAnswer()
	{
		string ans;
		cout<<"Enter your answer: ";
		cin>>ans;
	}
		};
class Quiz:public Question:public Time
       {
         protected;
         
	Course cse;
	Question **Qs;
	int absolutes;
	public:
	Quiz( Course& cse)
	{
		this->cse=cse;
	}
	v
	void QuestAdd(Question *Qts)
	{
		Qs[absolutes]=Qts;
		abspolutes++;
	}		
	void quiz()
	{
		for(int i=0;i<absolutes;i++)
		{
			cout<<"Question for the quiz are "<<Qs[i]->getQs()<<endl;
		}
	}
	int getAbs()
	{
		return absolutes;
	}
};
class TrueFalse:public Question
{
	protected:
	bool ans;
	public:
	TrueFalse(string qs,bool ans)
	{
		this->qs=qs;
		this->ans=ans;
	}
	void display()
	{
		Question::public display();
		cout<<"Either select true or false: "<<endl;
	}
	void WriteYourAnswer()
	{
		string answer;
		cout<<"Enter your answer: ";
		cin>>answer;
		bool correct=(ans=="true" && ans) ;
		Correctopy(correct);
	}
	void evaluateAnswer(bool correct)
	{
		if(correct)
			cout<<"Correct answer"<<endl;
}		       			};
void Display()
{
	
	cout<<"Welcome to the Login page"<<endl;
	cout<<"Enter your choice: ";
	int choices;
	cin>>ch;
	int opt;
	User* obj;
	switch(choices)
	{
		case 1:
			cout<<"1.Are you a Teacher? "<<endl;
			
			cout<<"2.Are you a Student?"<<endl;
			
			cout<<"Enter your choice: ";
			int car;
			cin>>car;
			cout<<"Enter username: ";
			string name;
			cin>>name;
			cout<<"Enter password: ";
			string password;
			cin>>password;
			switch(car)
			{
				case 1:
				     {
					Teacher teach(name,password);
					obj=&teach;
					if(obj!=nullptr && Logindata("data.txt",*obj))
					{
						cout<<"You are successfully logged in: "<<endl;
						cout<<"1. Do you wish to see your courses"<<endl;
						cout<<"2. Shall I make a quiz for you"<<endl;
						cout<<"3. Graph cannot be displayed right now"<<endl;
						cout<<"4. Is your Attendance enough?"<<endl;
						cout<<"5. exit now?"<<endl;
						cin>>op;
						cout<<"Enter your choice: ";
						int x=1;
						while(x)
						{
							int opt;
							cin>>opt;
							switch(opt)
							{
								case 1:
									{
										DisplayCourses();
										break;
									}
								case 2:
									{
										cout<<"Select the course you want to make the quiz of: ";
										string username;
										cin>>username;
										Course objj(name);
										objj.QuestAdd();
										objj.Quiz();
										break;
									}
								case 3:
									{ cout<<"Cannot be displayed right now bro:"<<endl;
									}
								case 4:
									{
										cout<<"Select the course you want to see the attendance of: ";
										string username;
										cin>>username;
										Course objjj(name);
										objjj.displayAttendance();
										break;
									}
								case 5:
									{
										cout<<"Logged out successfully"<<endl;
										x=0;
										break;
									}
								}
						}
					}
					}
					
				case 2:
				{
					Student std(username,password)
					if(Logindata("data.txt",*objj))
					{
					
						cout<<"Login Successful for student"<<endl;
						cout<<"1. Register in your courses"<<endl;
						cout<<"2. See Courses"<<endl;
						cout<<"4. Take  the Quiz"<<endl;
						cout<<"5. Log out"<<endl;
						cout<<"Enter your choice: "<<endl;
						cin>>choice;
						cin.ignore();
							case 1:
								{cout<<"Enter course name as written in the list"<<endl;
								string name;
								cin>>name;
								;
								break;
								}*/
							if(option==2)
							       {
							       	a->DisplayCourses();
							     
							       	break;
							       	}
							case 3:
								{
								}
							case 4:
								{
								}
							if(option==5)
								{
									cout<<"Logged out successfully"<<endl;
									break;
								}
						
					
					}
					
				
					}
					}
				}
			}
void fileRead()

  {
	int opts=4;
	string filename="Questions.txt";
	ifstream file(filename);
	string linecorrect;
	int ind;
	bool correct;
	bool isMcqs=false;
	bool isTFs=false;
	while(getline(file,line))
	{
		if(line.find("a5380ee")!=string::npos)
		{
			topic=line.substr(line.find("a5380ee")+7);
			cout<<"Topic: "<<topic<<endl;
			continue;
		}
		else if(line.find("2efcde9")!=string::npos)
		{
			question=line.substr(line.find("2efcde9")+7);
			cout<<"Question: "<<question<<endl;
			isMcq=true;
			continue;
		}
		else if(line.find("dabfac4")!=string::npos)
		{
			if(isMcq)
			{
			Option[index]=line.substr(line.find("dabfac4")+7);
			correct=Option[index];
			cout<<"option "<<Option[index]<<endl;
			}
			else if(isTF)
			{
			question=line.substr(line.find("dabfac4")+7);
			if(question=="True")
			{
				correctOp=true;
			}
			else
				correctOp=false;
			cout<<"option "<<question<<endl;
			}	
			continue;
		}
		else if(line.find("b94d27b")!=string::npos)
		{
			question=line.substr(line.find("b94d27b")+7);
			cout<<"Question: "<<question<<endl;
			isTF=true;
			isMcq=false;
			continue;
		}
		else if(line.find("88f7ace")!=string::npos)
		{
			question=line.substr(line.find("88f7ace")+7);
			cout<<"Question: "<<question<<endl;
			continue;
		}
		else
		{
			cout<<line<<endl;
		}
		cout<<endl;
		question.clear();
		index=0;
	}
	file.close();
}
	          int main()
	          {
	          
	          return 0;
	          }  
	          
 Question** questread(const string& fileName,int numofqs)
{
	Question** questions;
	ifstream file(fileName);
	string types,qs;
	while(file>>types)
	{
		getline(file>>ws,qs);
		numQuestions++;
	}
	Question **temp=new Question*[numofqs];
	for(int i=0;i<numofqs;i++)
	{
		temp[i]=qs[i];
	}
	temp[numQuestions-1]=nullptr;
	delete[] qs;
	
	ifif(type=="TrueFalse")
	{
		bool answer;
		file>>answer;
		quest[numQuestions-1]=new TrueFalse(questions,answer);
	}
	else if(type=="Subjective")
	{
		quest[numofqs-1]=new Subjective(questions);
	}
	file.close();
	return quest;
}
         
         
   
	
         
   
	
