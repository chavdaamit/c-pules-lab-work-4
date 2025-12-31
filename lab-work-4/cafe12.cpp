#include <iostream>
using namespace std;

class Cafe
{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {

        cafe_id = 0;
        cafe_name = "not Given";
        cafe_type = "not  Given";
        cafe_rating = 0;
        cafe_location = "not Given";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void input()
    {

        cout << "Enter cafe id:  ";
        cin >> cafe_id;

        cout << "Enter cafe name:  ";
        cin >> cafe_name;

        cout << "Enter cafe type:  ";
        cin >> cafe_type;

        cout << "Enter cafe rating:  ";
        cin >> cafe_rating;

        cout << "Enter cafe location:  ";
        cin >> cafe_location;

        cout << "Enter cafe year:  ";
        cin >> cafe_establish_year;

        cout << "Enter cafe staff:  ";
        cin >> cafe_staff_quantity;
    }

    void dispaly()
    {

        cout << "cafe id:  " << cafe_id << endl;
        cout << "cafe name: " << cafe_name << endl;
        cout << "cafe type: " << cafe_type << endl;
        cout << "cafe rating: " << cafe_rating << endl;
        cout << "cafe location: " << cafe_location << endl;
        cout << "cafe year: " << cafe_establish_year << endl;
        cout << "cafe staff: " << cafe_staff_quantity << endl;
    }

    ~Cafe()
    {
        cout << "Destructor called for cafe:  " << cafe_name << endl;
    }
};

int main()
{

    int n;
    cout << "Enter number of cafe: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        Cafe c;
        cout << "\n Enter Detail of cafe " << i + 1;
        c.input();
        cout << "\n  Detail of cafe  " << i + 1;
        c.dispaly();
    }

    return 0;
}