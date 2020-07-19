#include "../include/Product.h"

Product::Product(){}
Product::Product(const string &name, const float &price)
{
	product_name = name;
	product_price = price;
	count = 1;
}
string Product::get_name() const
{
	return product_name;
}

float Product::get_price() const
{
	return product_price;
}

void Product::set_name(const string &name)
{
	product_name = name;
}

void Product::set_price(const float &price)
{
	product_price = price;
}
void Product::increase_count()
{
	count += 1;
}
int Product::get_count() const
{
	return count;
}
