#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	string product_name;
	float product_price;
	int count;
public:
	Product();
	Product(const string &name, const float &price);
	string get_name() const;
	void set_name(const string &name);
	float get_price() const;
	void set_price(const float &price);
	void increase_count();
	int get_count() const;
};

#endif