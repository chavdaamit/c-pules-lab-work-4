#include <iostream>

using namespace std;

class Cafe{

    int cafe_id;
    string Cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int  cafe_staff_quantity;

public:

Cafe(){

    cafe_id = 0;
    Cafe_name = "Not Given";
    cafe_type = "Normal";
    cafe_rating = 0;
    cafe_location ="Unknown";
    cafe_establish_year = 0;
    cafe_staff_quantity = 0;

}

~Cafe(){
    cout << "Destructor called for cafe:  "<<Cafe_name<<endl;
}

void input(){

    cout<<"Enter cafe id:  ";
    cin>>cafe_id;

    cout <<"Enter cafe name:  ";
    cin>>Cafe_name;

    cout<<"Enter cafe type:  ";
    cin>>cafe_type;

    cout <<"Enter cafe rating:  ";
    cin>>cafe_rating;

    cout<<"Enter cafe location:  ";
    cin>>cafe_location;

    cout<<"Enter cafe Establish year:  ";
    cin>>cafe_establish_year;
    
    cout<<"Enter satff_quantity:  ";
    cin>>cafe_staff_quantity;

}

void dispaly(){

    cout <<"\n cafe  information ";
    
    cout <<"cafe Id:  "<<cafe_id<<endl;
    cout <<"cafe Name:  "<<Cafe_name<<endl;
    cout <<"cafe Type:  "<<cafe_type<<endl;
    cout <<"cafe Rating:  "<<cafe_rating<<endl;
    cout <<"cafe Location:  "<<cafe_location<<endl;
    cout <<"cafe Establish year:  "<<cafe_establish_year<<endl;
    cout <<"cafe satff Quantity:  "<<cafe_establish_year<<endl;
   
}

};

int  main(){

    int n;
    cout << "Enter number of cafes: ";
    cin>> n;

    Cafe c[n];

    for(int i=0; i<n;i++){

        cout<<"\n Enter Detail of cafe\n  "<< i+1;
        c[i].input();
    }

    cout<<"Display All Cafe Detail  ";

    for(int i=0;i<n;i++){
        c[i].dispaly();
    }

    return 0;
}