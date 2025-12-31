#include <iostream>
using  namespace std;

class DiamondCompany {

    private:

    int  comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;
    
    public:
    DiamondCompany(int id,string name, int staff,double revenue,int importD,int exportD,string ceo){
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importD;
        comp_export_diamonds = exportD;
        comp_ceo = ceo;
    }

      void display(){

        cout <<"\n Diamond company Details"<<endl;
        cout<<"id: "            << comp_id << endl;
        cout<<"name: "          << comp_name << endl;
        cout<<"staff Quantity: "<< comp_staff_quantity << endl;
        cout<<"revenue: "       << comp_revenue << endl;
        cout<<"import Diamond: "<< comp_import_raw_diamonds << endl;
        cout<<"export Diamond: "<< comp_export_diamonds << endl;
        cout<<"CEO: "           << comp_ceo << endl;

    }
};

int main(){

     int n;
    cout << "Enter number of companies: ";
    cin >> n;

    DiamondCompany *companies[n];  

    for(int i = 0; i < n; i++) {
        int id, staff, importD, exportD;
        double revenue;
        string name, ceo;

        cout << "\nEnter details for Company " << i+1 << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Staff Quantity: ";
        cin >> staff;
        cout << "Revenue: ";
        cin >> revenue;
        cout << "Raw Diamonds Imported: ";
        cin >> importD;
        cout << "Diamonds Exported: ";
        cin >> exportD;
        cout << "CEO Name: ";
        cin >> ceo;

         DiamondCompany d(id, name, staff, revenue, importD, exportD, ceo);
         d.display();
    }



    return 0;
}