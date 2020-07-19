#ifndef _CONVEYORBELT_H_
#define _CONVEYORBELT_H_

#include <vector>
#include "Product.h"

class Conveyorbelt
{
private:
	vector<Product> product;
	static Conveyorbelt* conveyorbelt;
private:
	Conveyorbelt();
public:
	static Conveyorbelt* get_conveyorbelt();
	void show_conveyorbelt() const;	
	vector<Product> get_product() const;
	void add_product(const string &name, const int &price);
	int count_product() const;
	bool is_conveyorbelt_empty() const;
};

#endif