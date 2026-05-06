#include<iostream>
#include<string>
#include<vector>
using namespace std;

class MenuItem
{
private:
	int itemId;
	string name;
	double price;
	
public:
	MenuItem(int id,string itemName,double itemPrice)
	{
		itemId=id;
		name=itemName;
		price=itemPrice;
	}
	void display()const
	{
		cout<<" Item ID: "<<itemId<<" Name: "<<name<<" Price: $"<<price<<endl;	
	}
	int getItemId()const
	{
		return itemId;
	}	
	double getPrice()const
	{
		return price;
	}
};
class restaurant
{
private:
	vector<MenuItem> menu;
	vector<MenuItem> order;
public:
	void addMenuItem(int id,const string &name,double price)
	{
		menu.push_back(MenuItem(id,name,price));
	}
		void displayMenu()const
		{
			if(Menu.empty())
			{
				cout<<"Menu is empty."<<endl;
				return 0;
			}
			cout<<"Menu: "<<endl;
			for(const auto &item: menu)
			{
				item.display();
			}
			void takeOrder()
			{
				int itemId;
				cout<<"Enter item IDs to order (0 to finish): "<<endl;
				
				while(true)
				{
					cin>>itemId;
					if (itemId==0)
					{
						break;
					}
			    bool found=false;
			    for(const auto &item:menu)
			    {
			    	if(item.getItemId()==itemId)
			    	{
			    		order.push_back(item);
			    		found=true;
			    		break;
					}
					if(!found)
					{
						cout<<"Item is not found in menu."<<endl;					}
				    }
				}		
			}
			double total=0;
			cout<<"Order summary"<<endl;
			for(const auto &item:order)
			{
				item.display();
				total+=item.getPrice();
			}
			cout<<"Total $"<<endl;
			}	    		
		};
		
		int main()
		{
			restaurant restaurant;
			restaurant.addMenuItem(1,"Burger",5.99);
			restaurant.addMenuItem(2,Pizza,7.99);
			
			int choice;
			while(true)
			{
			cout<<"\n restaurant Menu"<< end1;
			count<<"1. Display Menu"<< end1;
			count<<"2. Add Menu Item"<<end1;
			count<<"3. Take order"<<end1;
			count<<"4. Exit"<<end1;
			cout<<"Please enter your choice: ";
			cin>>choice
			if(choice==4)
			{
				break;
			}
			{
				/*code*/
			}
				switch(choice)
				{
					case 1:
				    {
					   restaurant.displayMenu()
					}
				}
				break;
				case 2:
					{
					int id;
					string name;
					double price;
					cout<<"Enter item ID: ";
					cin>>id;
					cout<<"Enter item Name: ";
					cin.ignore();				
					getline(cin,name);
					cout<<"Enter item Price: ";
					cin>>price;
					
					restaurant.addManuItem(id,name,price);
					break;
					}
				case 3:
					{
						restaurant.takeOrder();
						break;
					}
				default:
					{
						cout<<"Invalid choice."<<endl;
					}
				}
				reurn0;
			
				}
					
					return 0;
					
				
			}
