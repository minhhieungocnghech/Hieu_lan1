#ifndef _SHAPE_PROGRAM_H
#define _SHAPE_PROGRAM_H

#include <iostream>
#include <string>
#include <vector>

#include "./Product.h"
#include "./Conveyorbelt.h"
#include "./Customer.h"


using namespace std;

#define ADD_PRODUCT 1
#define ADD_COUNT   2
#define SHOW_ALL    3
#define EXIT        0

class Program
{
private:
    Conveyorbelt* conveyorbelt;
    Customer *customer;
public:
    void run();
    Program() {};
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