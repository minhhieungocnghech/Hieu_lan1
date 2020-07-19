#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include "Conveyorbelt.h"

class Customer 
{
private:
	Conveyorbelt* conveyorbelt;
	string name;
public:
	Customer(const string &name);
	Customer(const string &name, const string &product_name, const float &product_price);
	void add_product_to_conveyorbelt(const string &product_name, const float &product_price);
	void show_conveyorbelt() const;
	vector<Product> get_product() const;
};

#endif