/* Name:
 Date:
 Description: For this final exam program, you will complete
 the code in each of the functions to create a cash register
 system.
 
 ***Sample Program Run Below***
 Enter:
 + Add item
 = Display receipt
 q quit
 +
 Enter item name: Milk
 Enter cost: $2.33
 Enter quantity: 1
 Enter:
 + Add item
 = Display receipt
 q quit
 +
 Enter item name: Apples
 Enter cost: $0.33
 Enter quantity: 3
 Enter:
 + Add item
 = Display receipt
 q quit
 +
 Enter item name: Peanut Butter
 Enter cost: $1.99
 Enter quantity: 1
 Enter:
 + Add item
 = Display receipt
 q quit
 =
 
 
 ===Receipt===
 Milk 1 $2.33
 Apples 3 $0.99
 Peanut Butter 1 $1.99
 ---------------
 Subtotal: $5.31
 Tax: $0.46
 Total: $5.77
 ====END====
 
 Enter:
 + Add item
 = Display receipt
 q quit
 +
 Enter item name: Chocolate Bar
 Enter cost: $1.09
 Enter quantity: 1
 Enter:
 + Add item
 = Display receipt
 q quit
 =
 
 
 ===Receipt===
 Chocolate Bar 1 $1.09
 ---------------
 Subtotal: $1.09
 Tax: $0.10
 Total: $1.19
 ====END====
 
 Enter:
 + Add item
 = Display receipt
 q quit
 q
 Closing register
 
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int ITEMS_LIMIT = 400; // Represents how many items the
// the register can process.
const double TAX = 0.0875; // Represents tax applied to every subtotal

// **************************************************************
void initRegister(int& counter, double& subtotal, double& total);
// Summary: This function initializes the total, subtotal,
// and counter to 0.
// Preconditions:
// Postconditions: All variables have been initialized for a new
// transaction.
// ***************************************************************
//
// **************************************************************
void addItem(string items[], double costs[], int quantity[],
             int& counter, double& subtotal);
// Summary: This function reads the item name (spaces included), cost
// of the item and quantity of the item from the user. The function then
// set's the cost in the cost array to quantity * cost. The function
// updates the subtotal by adding to it the cost of the item and increments
// counter by 1.
// Preconditions: subtotal is >= 0.
// Postconditions: A new item has been processed.
// ***************************************************************
//
// **************************************************************
void calculateTotal(double  subtotal, double& total);
// Summary: This function calculates the total as subtotal + subtotal * TAX
// Preconditions: subtotal is >= 0.
// Postconditions: The total has been calculated
// ***************************************************************
//
// **************************************************************
void printReceipt(int counter, double subtotal, double total,
                  string items[], double costs[], int quantity[]);
// Summary: This function prints each item along with its quantity
// and total cost. See the sample run above for an example of what the
// receipt looks like. At the end the receipt prints the subtotal,
// tax on subtotal and the total.
// Preconditions:total is >= 0, subtotal >= 0, and counter is >= 0.
// Postconditions: The receipt for this purchase has been printed
// on the console. Monetary values are formatted to use 2 decimal
// digits.
// ***************************************************************
//
// ****************************************************************
char displayMenu();
// Summary: This function displays the menu options as:
//  Enter:
// + Add item
// = Display receipt
// q quit.
// The function reads the user's choice as a character and returns
// that character value.
// Preconditions:
// Postconditions: Menu is displayed and the user's choice is returned.
// *****************************************************************
//
// *****************************************************************
double computeItemTotal(int quantity, double cost);
// Summary: Computes the item total as quantity * cost. Note: This
// function should be used in the addItem function.
// Preconditions: quantity and cost are >= 0.
// Postconditions: The total cost is returned by the function.
// *****************************************************************
//

int main()
{
    // DO NOT modify the main()
    int num_items, // counter
    quantity[ITEMS_LIMIT]; // array for item quantities created
    double costs[ITEMS_LIMIT], // array for item costs
    subtotal,
    total;
    string item_names[ITEMS_LIMIT]; // array for item names
    char choice;
    initRegister(num_items, subtotal, total); // init the register values
    do{
        choice = displayMenu(); // Get the user's selection from menu
        switch(tolower(choice))
        {
            case '+': // add an item to the three arrays and update subtotal
                addItem(item_names, costs, quantity, num_items, subtotal);
                break;
            case '=': // print receipt option
                calculateTotal(subtotal, total); // get total
                // print receipt with contents and updated total from above
                printReceipt(num_items, subtotal, total, item_names, costs, quantity);
                // Transaction is over, so we reset the register
                initRegister(num_items, subtotal, total);
                break;
            case 'q': // exit program
                cout << "Closing register\n";
                break;
            default:
                cout << "Not a valid choice. Please try again\n";
                break;
        }
    }while(tolower(choice) != 'q');
    return 0;
}
void initRegister(int& counter, double& subtotal, double& total)
{
   
    
}
void addItem(string items[], double costs[], int quantity[],
             int& counter, double& subtotal)
{
    
    
}
void calculateTotal(double  subtotal, double& total)
{
    
    
}
void printReceipt(int counter, double subtotal, double total,
                  string items[], double costs[], int quantity[])
{
   
    
}
char displayMenu()
{
   
    
}
double computeItemTotal(int quantity, double cost)
{
   
    
}
