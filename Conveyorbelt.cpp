#include "../include/Conveyorbelt.h"

Conveyorbelt* Conveyorbelt::conveyorbelt = 0;

Conveyorbelt::Conveyorbelt()
{}
Conveyorbelt* Conveyorbelt::get_conveyorbelt()
{
	if (conveyorbelt == 0)
	{
		conveyorbelt = new Conveyorbelt();
	}
	return conveyorbelt;
}
vector<Product> Conveyorbelt::get_product() const
{
	return product;
}
void Conveyorbelt::add_product(const string &name, const int &price)
{
	Product pr(name, price);
	for (int i = 0; i < product.size(); i++)
	{
		if (product[i].get_name() == name)
		{
			product[i].increase_count();
			return;
		}
	}
	product.push_back(pr);
}
int Conveyorbelt::count_product() const
{
	int count = 0;
	for (int i = 0; i < product.size(); i++)
	{
		count += product[i].get_count();
	}
	return count;
}
bool Conveyorbelt::is_conveyorbelt_empty() const{
	if (product.empty()) {
		cout << "please chose product";
		return true;
	}
	return false;
}
void Conveyorbelt::show_conveyorbelt() const
{
	for (int i = 0; i < product.size(); i++)
	{
		cout << "Num:" << i + 1 << " Name " << product[i].get_name() 
		<< " Price " << product[i].get_price() << " amount " << product[i].get_count() << endl;
	}
	cout << "Sum: " << count_product() << " product" << endl;
}