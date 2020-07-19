
#include "./program.h"

using namespace std;

string product_name;
float product_price;
int _count;
bool running = true;

void Program::run()
{
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

void Program::add_product()
{
    cout << " Enter product : ";
    cin >> product_name;
    cout << " Enter Price : ";
    cin >> product_price;
    Product p(product_name, product_price); 
    customer->add_product_to_conveyorbelt(p);
}

void Program::add_count()
{
    cout << " Enter count : ";
    cin >> _count;
}
void Program::show_all() const
{
    conveyorbelt->show_conveyorbelt();
}
void Program::print_message(const string &msg) const
{
    cout << msg << endl;
}

Program::~Program()
{
}