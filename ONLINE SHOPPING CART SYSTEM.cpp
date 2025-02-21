#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    Product(int id, string name, double productPrice, int qty) {
        productID = id;
        productName = name;
        price = productPrice;
        quantity = qty;
    }

    double calculateTotalPrice() const {
        return price * quantity;
    }

    void productDetails() const {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: " << calculateTotalPrice() << endl;
    }
};

void displayCart(Product products[], int size) {
    for (int i = 0; i < size; ++i) {
        products[i].productDetails();
        cout << endl;
    }
}

int main() {
    int numProducts;
    cout << "Enter number of products: ";
    cin >> numProducts;

    Product products[numProducts];
    for (int i = 0; i < numProducts; ++i) {
        int id, qty;
        string name;
        double price;

        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> qty;

        products[i] = Product(id, name, price, qty);
    }

    displayCart(products, numProducts);

    return 0;
}
