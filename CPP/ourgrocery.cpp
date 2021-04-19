// CPP code is Paste here and File cannot be uploaded
//Purpose of Program is to add item of grocery list and add tip and checking Shipping cost
#include <iostream>
using namespace std;
int main()
{
int item=0;
float Milk=5.99;
float Egg = 6.99;
float Cheese = 10.98;
float Pasta = 2.75;
 
float cost=0.00;// take the starting cost 0
int count=0 ;//count of items
int tip=0;
float valueoftip=5.00;// value of the tip
float totalcost=0.00;
   cout<<"GROCERY SHOPPING ITEMS"<<endl;
   cout<<"1. Milk : $ 5.99 / gallon"<<endl;
   cout<<"2. Egg : $ 6.99 / dozen"<<endl;
   cout<<"3. Cheese : $10.98 /oz"<<endl;
   cout<<"4. Pasta : $2.75 /Packet"<<endl;
  
   // Asking Customer For The Items
   cout<<"Choose Your Item : "<<endl;
   cin>> item;
  
   switch (item) {
case 1:
cout << "Milk"<<endl;
cost=cost+Milk;
break;
case 2:
cout << "Egg"<<endl;
cost=cost+Egg;
break;
case 3:
cout << "Cheese"<<endl;
cost=cost+Cheese;
   break;
case 4:
cout << "Pasta"<<endl;
cost=cost+Pasta;
   break;
 
}
//asking customer quantity of item
cout<<"Quantity of Item :"<<endl;
cin>>count;
 
cout<<"Cost is : ";
cost=cost*count;
cout<<cost<<endl;
//Asking User To Add Tip
cout<<"Do you Want to Add $5 Tip Press 1 for yes or 2 for no"<<endl;
cin>>tip;
switch(tip)
{
   case 1:
   	cost=cost+valueoftip;
cout<<cost<<endl;
   	break;
case 2:
   cost=cost;
   cout<<cost<<endl;
   break;
}
// Checking if the shipping is free or not
//if cost is more than 20.00 than cost of shipping is added in the totalcost variable
if(cost<=20.00)
{
   cout<<"Your Shipping is Free"<<endl;
   totalcost = cost;
   cout<<"Total Cost is : "<<totalcost<<endl;
  
}
else if(20.00<cost<=35.00)
{
cout<<"Your Shipping cost is $ 4.35"<<endl;
   totalcost = cost+4.35;
   cout<<"Total Cost is : "<<totalcost<<endl;
      
}
else
{
cout<<"Your Shipping cost is $ 7.65"<<endl;
totalcost = cost+7.65;
cout<<"Total Cost is : "<<totalcost<<endl;
  
}
   return 0;
}

