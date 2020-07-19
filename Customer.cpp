#include "../include/Customer.h"

Customer::Customer(const string &name)
{
	this->name = name;
	conveyorbelt = Conveyorbelt::get_conveyorbelt();
}

Customer::Customer(const string &name, const string &product_name, const float &product_price)
{
	conveyorbelt = Conveyorbelt::get_conveyorbelt();
	conveyorbelt->add_product(product_name, product_price);
	this->name = name;
}

void Customer::add_product_to_conveyorbelt(const string &product_name, const float &product_price)
{
	conveyorbelt->add_product(product_name, product_price);
}

void Customer::show_conveyorbelt() const
{
	cout << "Customer name: " << name << endl;
	conveyorbelt->show_conveyorbelt();
}

vector<Product> Customer::get_product() const
{
	return conveyorbelt->get_product();
}
