
#include "../include/program.h"

using namespace std;

string product_name;
float product_price;
int count;

void Program::run()
{
    bool running = true;
    while (running)
    {
        print_menu();
        int choice = get_choice();
        do_task(choice);
        if (choice == EXIT)
            running = false;
    }
}

void Program::print_menu() const
{
    cout << "Demo Program" << endl;

    cout << ADD_PRODUCT << ". Add Product" << endl;
    cout << ADD_COUNT << ". Add Count" << endl;
    cout << SHOW_ALL << ". Show all" << endl;
    cout << EXIT << ". Exit" << endl;
}

int Program::get_choice() const
{
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}

void Program::do_task(const int &choice)
{
    switch (choice)
    {
    case ADD_PRODUCT:
        add_product();
        break;
    case ADD_COUNT:
        add_count();
        break;
    case SHOW_ALL:
        show_all();
        break;
    case EXIT:
        print_message("Bye!");
        break;
    default:
        print_message("Invalid choice!");
    }
}
Program::Program()
{
    // conveyorbelt = conveyorbelt->get_conveyorbelt();
}


void Program::add_product()
{
    cout << " Enter product : ";
    cin >> product_name;
    cout << " Enter Price : ";
    cin >> product_price;
    Product *p = new Product(product_name, product_price);
    PName.push_back(p);
    for (int i = 0; i < cus.size(); i++)
    {
        cus[i]->add_product_to_conveyorbelt(product_name, product_price);
    }
    for (int j = 0; j < conveyorbelt.size(); j++)
    {
        conveyorbelt[j]->add_product(product_name, product_price);
    }
    // for (int y = 0; y < count; y++)
    // {
    //     /* code */
    // }
    cout << PName.size() <<endl ;
    
         
}

void Program::add_count()
{
    cout << " Enter count : ";
    cin >> count;
}
void Program::show_all() const
{
    // cout << conveyorbelt.size() <<endl ;
    for (int i = 0; i < conveyorbelt.size(); i++)
    {
        conveyorbelt[i]->show_conveyorbelt();
    }
}
void Program::print_message(const string &msg) const
{
    cout << msg << endl;
}

Program::~Program()
{
    for (int i = 0; i < conveyorbelt.size(); i++)
    {
        delete conveyorbelt[i];
    }
    for (int i = 0; i < PName.size(); i++)
    {
        delete PName[i];
    }
}