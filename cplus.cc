#include <iostream>
using namespace std;
void menu_sel(int sel);
void node_add();
void node_delete();
void goodbye();


class binary_tree{
    int num;
    float flnum;
    double dblnum;
};

int main() {
	int sel;	// stores user selection
	// prints user interface
	while(sel != 4)
	{
	  std::cout<<"\033[2J\033[1;1HWritten by krebby\n-----------------\n-- Main Menu --\n-----------------\n-Choose function-\n-----------------\n1. Add Node\n2. Delete Node\n3. Display Tree\n4. Exit\n----------------\n-- Selection: \n----------------\n\033[12;15H";
	  std::cin>>sel;
	  menu_sel(sel);
	}
}

void menu_sel(int num) {
  switch( num )
  {
     case 1:
       node_add();
       break;
     case 2:
       node_delete();
       break;
     case 3:
       break;
     case 4:
       goodbye();
       break;
  }
}

// function to interact with class btree and add node
void node_add() {
	int num;
	std::cout<<"\033[2J\033[1;1HWhat number would you like to add to your tree?\n-----------------\n-- Selection: \n-----------------\n\033[3;15H";
	std::cin>>num;
}

// function to interact with class btree and delete node
void node_delete() {
	int num;
	std::cout<<"\033[2J\033[1;1HWhat node would you like to delete from your tree?\n-----------------\n-- Selection: \n-----------------\n\033[3;15H";
	std::cin>>num;
}

// function to print parting message
void goodbye() {
    std::cout<<"\033[2J\033[1;1H\n Exiting...\n\n-----------------\n---- Goodbye ----\n-----------------\n\n";
}
