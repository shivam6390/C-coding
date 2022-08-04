#include<iostream>
using namespace std;
class Employeedata{
public: 
        int id;
        string name;
        float salary;
        string department;
        void show(){
            cout<<"ID: "<<id<<" "<<"Name: "<<name<<" "<<"Salary: "<<salary<<" "<<"Department: "<<department<<endl;
        }
        void menu(){
            cout<<"***********Welcome to Employee data Management app***********"<<endl<<"Press the number"<<endl<<"1. Add an Employee"<<endl<<"2. Get all Employees"<<endl<<"3. Get Employee by ID"<<endl<<"4. Get Highest Paid Employee"<<endl<<"5. Get Least Paid Employee"<<endl<<"6. Get Employees by Department"<<endl;
        }        
};
int main()
{
    Employeedata e[100];
    Employeedata m;
    Employeedata searchbyid;
    Employeedata highestpaid;
    Employeedata lowestpaid;
    Employeedata searchbydepartment;
    int searchid;
    string searchdepartment;
    int i,x=0,a,b,f,p;
    char k;
    m.menu();
    cin>>a;
    x=1;
    p=0;
    do
    {
        switch(a)
        {
            case 1:
                do{                    
                for(i=p;i<=x-1;i++)
                {
                cout<<"Enter Data of new employee"<<endl;
                cout<<"ID: ";
                cin>>e[i].id;    
                cout<<"Name: ";
                cin>>e[i].name;    
                cout<<"Salary: ";
                cin>>e[i].salary;    
                cout<<"Department : ";
                cin>>e[i].department;    
                }
                p++;
                x++;       
                cout<<"Do you want to add more. Press y to continue and n to go back"<<endl;
                cin>>k;
                }while(k=='y');
                break;
            case 2:
                for(i=0;i<=x-1;i++){
                    e[i].show();
                    if(x==0){
                        cout<<"No Entries Till Yet"<<endl;
                    }
                }
                break;
            case 3:
                cout<<"Enter the ID to search: ";
                cin>>searchid;
                int d;
                for(i=0;i<=x-1;i++)
                {   d=0;
                    if(e[i].id==searchid){
                        searchbyid=e[i];
                        searchbyid.show();
                        break;
                    }
                    else{
                     d=1;
                     }
                }     
                if(d==1){
                    cout<<"Invalid Input"<<endl;
                }                          
                break;
            case 4: 
                    int c;
                  highestpaid=e[0];
                  for(i=1;i<=x-1;i++)
                  {
                    c=0;
                    if(highestpaid.salary<e[i].salary)
                    {
                        highestpaid=e[i];
                        cout<<"Employee with Highest Salary:- "<<endl;
                        highestpaid.show();
                    }
                    else{
                        c=1;
                    }
                  }  
                  if(c==1){
                    cout<<"Employee with Highest Salary:- "<<endl;
                        highestpaid.show();
                  }                    
                break;    
            case 5:
                    lowestpaid=e[0];
                    int g;
                  for(i=1;i<=x-1;i++)
                  { g=0;
                    if(lowestpaid.salary>e[i].salary)                 
                    {
                        lowestpaid=e[i];
                        cout<<"Employee With Lowest Salary:- "<<endl;    
                        lowestpaid.show();
                    }
                    else{
                        g=1;
                    }
                  }
                    if(g==1){
                        cout<<"Employee With Lowest Salary:- "<<endl;
                        lowestpaid.show();
                    }
                break;    
           
            case 6:
                cout<<"Enter Department:- ";
                cin>>searchdepartment;
                for(i=0;i<=x-1;i++)
                {
                    f=0;
                  if(e[i].department==searchdepartment)
                  {
                    searchbydepartment=e[i];
                    searchbydepartment.show();
                  }    
                  else{
                    f=1;
                  }
                }
                if(f==1){
                    cout<<"Invalid Input"<<endl;
                  }
                break;                    
            default: 
                    cout<<"Invalid Input"<<endl;
                    break;

        }
    cout<<"Press 0 to exit & 1 to go back to main menu"<<endl;
    cin>>b;
    if (b==1)
    {               
     m.menu();
     cin>>a;
    }
    else{
     cout<<"Thank you"<<endl;
     break;
    }
 } while(b!=0);   
return 0;
}