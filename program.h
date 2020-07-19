#ifndef _SHAPE_PROGRAM_H
#define _SHAPE_PROGRAM_H

#include <iostream>
#include <string>
#include <vector>

#include "../include/Product.h"
#include "../include/Conveyorbelt.h"
#include "../include/Customer.h"


using namespace std;

#define ADD_PRODUCT 1
#define ADD_COUNT   2
#define SHOW_ALL    3
#define EXIT        0

class Program
{
private:
    vector<Conveyorbelt*> conveyorbelt;
    vector<Product*> PName;
    vector<Customer*> cus;
public:
    void run();
    Program();
    ~Program();
private:

    void print_menu() const;
    int get_choice() const;
    void do_task(const int &choice);
    void add_product();
    void add_count();
    void show_all() const;
    void print_message(const string &msg) const;
};

#endif