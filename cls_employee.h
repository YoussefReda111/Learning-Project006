#pragma once
#include <iostream>

using namespace std;

class cls_employee
{
private:
	int _ID;
	float _salary;
	string _first_name, _last_name, _email, _phone, _title, _department;

public:
	cls_employee(int ID, string first_name, string last_name, string title, string email, string phone, float salary, string department)
	{
		_ID = ID;
		_first_name = first_name;
		_last_name = last_name;
		_title = title;
		_email = email;
		_phone = phone;
		_salary = salary;
		_department = department;
	}

	int get_ID()
	{
		return _ID;
	}

	void set_first_name(string first_name)
	{
		_first_name = first_name;
	}

	string get_first_name()
	{
		return _first_name;
	}

	void set_last_name(string last_name)
	{
		_last_name = last_name;
	}

	string get_last_name()
	{
		return _last_name;
	}

	string get_full_name()
	{
		return _first_name + ' ' + _last_name;
	}

	void set_title(string title)
	{
		_title = title;
	}

	string get_title()
	{
		return _title;
	}

	void set_email(string email)
	{
		_email = email;
	}

	string get_email()
	{
		return _email;
	}

	void set_phone(string phone)
	{
		_phone = phone;
	}

	string get_phone()
	{
		return _phone;
	}

	void set_salary(float salary)
	{
		_salary = salary;
	}

	float get_salary()
	{
		return _salary;
	}

	void set_department(string department)
	{
		_department = department;
	}

	string get_department()
	{
		return _department;
	}

	void send_email(string subject, string body)
	{
		cout << "\nThe following message sent successfully to email: " << _email;
		cout << "\nSubject: " << subject;
		cout << "\nBody: " << body;
	}

	void send_SMS(string text_message)
	{
		cout << "\nThe following SMS sent successfully to phone: " << _phone;
		cout << "\nBody: " << text_message;
	}

	void print()
	{
		cout << "\nInfo: ";
		cout << "\n___________________________";
		cout << "\nID: " << _ID;
		cout << "\nFirst Name: " << _first_name;
		cout << "\nLast Name: " << _last_name;
		cout << "\nFull Name: " << _first_name + ' ' + _last_name;
		cout << "\nTitle: " << _title;
		cout << "\nEmail: " << _email;
		cout << "\nPhone: " << _phone;
		cout << "\nSalary: " << _salary;
		cout << "\nDepartment: " << _department;
		cout << "\n___________________________";
	}
};