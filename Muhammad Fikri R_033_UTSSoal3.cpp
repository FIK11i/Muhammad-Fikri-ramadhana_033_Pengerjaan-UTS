//Membuat Progam dengan Output seperti di Gambar
# include <iostream>
using namespace std;

int main() {
    char operasi;
    float x, y;
    
	cout<<"Enter any two number: ";
    cin>>x>>y;
    cout<<"\n";
    
    cout<<"Enter the operator (+, -, *, /): ";
    cin>>operasi;
    
    switch(operasi) {
        case '+':
            cout<<"The calculated result is : "<<x + y;
            break;

        case '-':
            cout<<"The calculated result is : "<<x - y;
            break;

        case '*':
            cout<<"The calculated result is : "<<x * y;
            break;

        case '/':
            cout<<"The calculated result is : "<<x / y;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }
		    
}

