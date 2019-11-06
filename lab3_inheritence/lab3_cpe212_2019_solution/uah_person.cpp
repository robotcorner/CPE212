/*            uah_person.cpp  class structure for all UAH persons  */


#include <iostream>

#include "uah_person.h"

using namespace std;

uah_person::uah_person ()    /* default null constructor */
{
  cout << "null uahperson's not allowed" << endl;

}  	                     /* end default null constructor   */

uah_person::uah_person(string name, string email, string a_number)
{
u_name = name;
u_email = email;
u_anumber = a_number;

}

void uah_person:: set(string name, string email, string a_number)
{
u_name = name;
u_email = email;
u_anumber = a_number;
}

void uah_person::print( ) const
{
cout << "Name: " << u_name << endl;
cout << "Email: " << u_email << endl;
cout << "A-Number: " << u_anumber << endl; 
}

