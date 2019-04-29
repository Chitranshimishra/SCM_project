cout<<"\nBlood Group : ";
clreol();
switch(PI[regis].bld_group)
{
case 1:
{
clreol();
cout<<"A+";
break;
}
case 2:
{
clreol();
cout<<"A-";
break;
}
case 3:
{
clreol();
cout<<"B+";
break;
}
case 4:
{
clreol();
cout<<"B-";
break;
}
case 5:
{
clreol();
cout<<"AB+";
break;
}
case 6:
{
clreol();
cout<<"AB-";
break;
}
case 7:
{
clreol();
cout<<"O+";
break;
}
case 8:
{
clreol();
cout<<"O-";
break;
}
}
clreol();
cout<<"\nDate of birth : ";
clreol();
DOB1.show_date();
cout<<"\nMarital Status : ";
clreol();
if(PI[i].martial_status==1)
{
cout<<"Married "<<"";
clreol();
}
else
{
cout<<"Not married "<<"";
clreol();
}
clreol();
cout<<"\n**ADDRESS**"<<"";
clreol();
cout<<"\nHouse no. : "<<PI[regis].AD1.house;
clreol();
cout<<"\nStreet : "<<PI[regis].AD1.street;
clreol();
cout<<"\nCity : "<<PI[regis].AD1.city;
clreol();
cout<<"\nState : "<<PI[regis].AD1.state;
clreol();
cout<<"\nCountry : "<<PI[regis].AD1.country;
clreol();
}
else
{
if(regis==1)
{
cout<<"\nDatabase is empty !!!"<<"";
cout<<"\nPress any key to exit to main task menu..."<<"";
getch();
clrscr();
A1.tasks();
}
attempt++;
if(attempt==3)
{
cout<<"\nYou have entered wrong registration number 3 times ."<<"";
cout<<"\nAccess Denied!!! "<<"";
cout<<"\nPlease try again later. "<<"";
cout<<"\nPress any key to exit to main task menu..."<<"";
getch();
clrscr();
A1.tasks();
}
clreol();
cout<<"\nSorry, the registration number is invalid ."<<"";
cout<<"\nPress any key to continue...."<<"";
getch();
clreol();
A1.show_patient_detail();
}
clreol();
cout<<"\nWant to see information of another patient: "<<"";
clreol();
cin>>answer1;
}
while(answer1=='y'||answer1=='Y');
clreol();
clrscr();
A1.tasks();
}
void dob::show_date()
{
cout<<DOB11[regis].date;
rem=DOB11[regis].date%10;
switch(DOB11[regis].date)
{
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
{
cout<<"th ";
goto over;
}
}
switch(rem)
{
case 1:
{
cout<<"st ";
break;
}
case 2:
{
cout<<"nd ";
break;
}
case 3:
{
cout<<"rd ";
break;
}
default:
{
cout<<"th ";
break;
}
}
over:
switch(DOB11[regis].month)
{
case 1:
{
cout<<"January , ";
break;
}
case 2:
{
cout<<"February , ";
break;
}
case 3:
{
cout<<"March , ";
break;
}
case 4:
{
cout<<"April , ";
break;
}
case 5:
{
cout<<"May , ";
break;
}
case 6:
{
cout<<"June , ";
break;
}
case 7:
{
cout<<"July , ";
break;
}
case 8:
{
cout<<"August , ";
break;
}
case 9:
{
cout<<"September , ";
break;
}
case 10:
{
cout<<"October , ";
break;
}
case 11:
{
cout<<"November , ";
break;

}
case 12:
{
cout<<"December , ";
break;
}
}
cout<<DOB11[regis].year<<" ";
}
void all::software_detail()
{
clrscr();
cout<<"\n***SOFTWARE DETAILS***";
cout<<"\nProgramming Language : C++ "<<"";
cout<<"\nAim : Simulation of the software used in Hospital"<<"";
cout<<"\nHope you like it..."<<"";
cout<<"\nSend your comments to : 500067782@stu.upes.ac.in"<<"";
cout<<"\nThank You for trying this program. "<<"";
cout<<"\nPress any key to return to the main task menu......."<<" ";
getch();
A1.tasks();
}


