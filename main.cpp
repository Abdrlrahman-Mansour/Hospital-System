#include <cassert>
#include<iostream>
using namespace std;

int main() {
        int age[50];
        string name[100] ;
        double Salary[50] ;
        char gender[50] ;
        int counter = 0 ;
    while(1){
        int choice = 0;
        cout<<"Enter your choice:"<<endl;
        cout<<"1)Add new employee"<<endl;
        cout<<"2)Print all employees"<<endl;
        cout<<"3)Delete by age"<<endl;
        cout<<"4)Update Salary by name"<<endl;
        cout<<"5)Exit the program"<<endl;
        cin>>choice;
        if(choice == 1){
            cout<<"Enter name: ";
            cin>>name[counter] ,cout<<endl;
            cout<<"Enter age: ";
            cin>>age[counter] ,cout<<endl;
            cout<<"Enter salary: ";
            cin>>Salary[counter] ,cout<<endl;
            cout<<"Enter gender: ";
            cin>>gender[counter] ,cout<<endl;
            counter++;
        }
        else if(choice == 2){
            cout<<"************************************\n";
            for(int i = 0 ; i < counter ; i++ ){
                if(age[i] != -1){
                    cout << name[i] << " " << age[i] << " " << Salary[i] << " " << gender[i] << endl;
                }
            }
        }
         else if(choice == 3){
            int age1,age2;
            cout<<"Enter start and end age \n";
            cin>>age1>>age2;
            for(int i = 0; i <counter ; i++){
                if(age1 <= age[i] && age[i] <= age2){
                    age[i] = -1;
                }
            }
        }
         else if(choice == 4){
            string name2;
            double Salary2 ;
            cout<<"Enter the name and salary ";
            cin>>name2 >> Salary2;
            for(int i = 0; i <counter ; i++){
                if(name2 == name[i]){
                    Salary[i] = Salary2;
                }
                else{
                    continue;
                }
            }
        }
         else if(choice == 5){
            break;
        }
        else{
            cout<<"Invalid Choice !!!\n";
        }

    }

	return 0;
}
