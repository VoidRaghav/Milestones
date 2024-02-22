#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <direct.h>
//#include <chrono>
//#include <dos.h>
#include <iomanip>
using namespace std;
// ALL THE LIBRARIES USED 

class customer{

public:
string name;
string carChoice;
string model;
int days;

customer(){
cout <<setw(100)<<"CAR RENTAL SYSTEM\n\n"<<endl;
cout <<setw(120)<<"--------------------------------------------------------------"<<endl;
cout <<setw(94)<<"LOGIN"<<endl;
cout <<setw(122)<<"--------------------------------------------------------------\n\n"<<endl;

do{
    cout<<setw(100)<<"Enter password : "<<endl;
    int pass;
    cin>>pass;

if (pass == 1234){
    break;
}
else{
    cout <<"INVALID PASSWORD TRY AGAIN !!"<<endl;
}

}
 while (true);
}

void setdisplay(){

cout <<setw(100)<< "Enter your name : "<<endl;
cin>>name;
cout <<"\n"<<endl;

// do-while loop will execute the loop once without checking the loop condition
do {
            cout << setw(102) << "Enter 'A' for Hyundai 2023" << endl;
            cout << setw(101) << "Enter 'B' for Toyota 2023" << endl;
            cout << setw(102) << "Enter 'C' for Suzuki 2022\n" << endl;
            cout << setw(107) << "Choose a car from above options : " << carChoice << endl;

            cout << setw(100) << "Please select a car \n" << endl;
            cin >> carChoice;
            cout << "\n" << endl;

            if (carChoice == "A" || carChoice == "B" || carChoice == "C") {
                break;
            } else {
                cout << "INVALID CAR CHOICE!! CHOOSE CORRECT CAR" << endl;
            }
        } while (true);


if(carChoice == "A"){
cout <<"You chose Hyundai 2023\n"<<endl;
cout <<"Range"<< setw(47)<<"EPA : 139 mi 224km"<<setw(31)<<"EPA : 210 mi 340 km"<<endl;
cout <<"Max. Power, Motor"<< setw(30)<<"302 hp 285 kW"<<setw(30)<<"560 hp 285 kW"<<endl;
cout <<"Max. Power, Battery"<< setw(28)<<"266 hp 175 kW"<<setw(30)<<"902 hp 224 kW"<<endl;
cout <<"--------------------------------------------------------------"<<endl;
cout <<"Please select a car number : \n"<<endl;
cin>>model;
cout<<"\n"<<endl;
cout <<"Number of days you wish to rent the car : \n"<<endl;
cin>>days;

}

else if(carChoice == "B"){
    cout <<"You chose Toyota 2023\n"<<endl;
cout <<"Range"<<setw(47)<<"EPA : 157 mi 224km"<<setw(31)<<"EPA : 210 mi 390 km"<<endl;
cout <<"Max. Power, Motor"<<setw(30)<<"320 hp 285 kW"<<setw(30)<<"578 hp 298 kW"<<endl;
cout <<"Max. Power, Battery"<<setw(28)<<"298 hp 175 kW"<<setw(30)<<"888 hp 226 kW"<<endl;
cout <<"--------------------------------------------------------------"<<endl;
cout <<"Please select a car number : "<<endl;
cin>>model;
cout<<"\n"<<endl;
cout <<"Number of days you wish to rent the car : "<<endl;
cin>>days;

    
}

else if(carChoice == "C"){
    cout <<"You chose Suzuki 2022 \n"<<endl;
cout <<"Range"<<setw(47)<<"EPA : 141 mi 229km"<<setw(31)<<"EPA : 219 mi 335 km"<<endl;
cout <<"Max. Power, Motor"<<setw(30)<<"298 hp 301 kW"<<setw(30)<<"550 hp 290 kW"<<endl;
cout <<"Max. Power, Battery"<<setw(28)<<"270 hp 190 kW"<<setw(30)<<"800 hp 224 kW"<<endl;
cout <<"--------------------------------------------------------------"<<endl;
cout <<"Please select a car number : "<<endl;
cin>>model;
cout<<"\n"<<endl;
cout <<"Number of days you wish to rent the car : "<<endl;
cin>>days;

}

cout<<"\n"<<endl;
int advance;
cout <<"Enter advance payment amount( In $) : "<<endl;
cout<<"\n"<<endl;
cin>>advance;
cout<<"\n"<<endl;

//generate real time invoice 
static int invoiceCount = 1000; 
int invoiceNumber = invoiceCount++;

cout <<setw(148)<<"////////////////////////////////////////////////////////////////////////////////////"<<endl;
cout <<setw(85)<<"| Invoice No. :----  "<< "#CNB" << invoiceNumber << setw(2) <<"|"<<endl;
cout <<setw(86)<<"| Customer name :---- " << name<< setw(2) <<"|"<<endl;
cout <<setw(82)<<"| Car Model :---- "<< carChoice << setw(2) <<"|"<< endl;
cout <<setw(79)<<"| Car No.:---- "<< model << setw(2) <<"|"<<endl;
cout <<setw(87)<<"| Number of days :---- "<< days << setw(2) <<"|"<<endl;
cout <<setw(111)<<"| Your rental amount is ($14.98 per day) :---- "<< "In $ " << setw(2)<< (14.98 * days) <<" "<<"or"<< " " << "In INR" << " " << (83.01*days)<<setw(2)<<"|"<<endl;
cout <<setw(87)<<"| Caution Amount :---- "<< "$5.95"<< setw(2) << "|"<<endl;
cout <<setw(87)<<"| Advance Amount :---- "<<"$"<< advance << setw(2)<<"|"<<endl;
cout <<setw(138)<<"--------------------------------------------------------------------------"<<endl; 
cout <<setw(92)<<" Total Rental Amount is :----"<<setw(3)<<"In INR"<<" "<< (83.01*days) + 5.95 + advance <<" "<<"In $"<<" "<< (14.98 * days) + 5.95 + advance <<endl;
cout <<setw(138)<<"--------------------------------------------------------------------------"<<endl;
cout <<"\n"<<endl;
cout <<setw(152)<<"# This is a computer generated invoice so it does not require an authorised signature #"<<endl;
cout <<"\n"<<endl;
cout <<setw(149)<<"/////////////////////////////////////////////////////////////////////////////////////"<<endl;
cout <<setw(150)<<"As per our terms and conditions, You are advised to pay up the amount before due date."<<endl;
cout <<setw(102)<<"Otherwise penalty fee will be applied."<<endl;
cout <<setw(150)<<"//////////////////////////////////////////////////////////////////////////////////////"<<endl;

}
};


int main(){

customer c;
cout <<setw(100)<<"LOGIN SUCCESSFUL!!\n"<<endl;
c.setdisplay();

    return 0;
}