#include <iostream>

void menu_sel(int sel);
void node_add();
void node_delete();
void goodbye();

int main()
{
	int sel;	// stores user selection
	// prints user interface
	while(sel != 5)
	{
	  std::cout<<"\033[2J\033[1;1H";
	  std::cout<<"Written by krebby\n";
	  std::cout<<"-----------------\n";
	  std::cout<<"--  Main Menu  --\n";
	  std::cout<<"-----------------\n";
	  std::cout<<"-Choose function-\n";
	  std::cout<<"-----------------\n";
	  std::cout<<"1. Add Node\n";
	  std::cout<<"2. Delete Node\n";
	  std::cout<<"3. Display Tree\n";
	  std::cout<<"4. Select Node\n";
	  std::cout<<"5. Exit\n";
	  std::cout<<"----------------\n";
	  std::cout<<"-- Selection: ";
	  std::cout<<"\n----------------\n";
	  std::cout<<"\033[13;15H";
	  std::cin>>sel;
	  menu_sel(sel);	  
	}
}

void menu_sel(int num)
{
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
       break;
     case 5:
       goodbye();
       break;
  }
}

// function to interact with class btree and add node
void node_add()
{
	int num;
	std::cout<<"\033[2J\033[1;1H";
	std::cout<<"What number would you like to add to your tree?";
	std::cout<<"\n-----------------\n";
	std::cout<<"-- Selection: ";
	std::cout<<"\n-----------------\n";
	std::cout<<"\033[3;15H";
	std::cin>>num;
}

// function to interact with class btree and delete node
void node_delete()
{
	int num;
	std::cout<<"\033[2J\033[1;1H";
	std::cout<<"What node would you like to delete from your tree?";
	std::cout<<"\n-----------------\n";
	std::cout<<"-- Selection: ";
	std::cout<<"\n-----------------\n";
	std::cout<<"\033[3;15H";
	std::cin>>num;
}

// function to print parting interface
void goodbye()
{
  std::cout<<"\033[2J\033[1;1H";
  std::cout<<"\n     Exiting...\n\n";
  std::cout<<"-----------------\n";
  std::cout<<"--   Goodbye   --\n";
  std::cout<<"-----------------\n\n";
}
