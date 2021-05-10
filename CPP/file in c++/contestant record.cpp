#include<iostream>

using namespace std;

struct contestant 
{
     char name[20];
     int dob;
     float marks;
        
};
int main()
{
     struct contestant c;
     FILE *fp;
     char cha;
     int ch;
     while(1)
     {
          cout<<"\n\n 1. Add Contestant To Intrest Game";
          cout<<"\n 2. Display Contestant";
          cout<<"\n 3. Display Name Of Contastant Whose Pass Marks";
          cout<<"\n 4. Exit";
          cout<<"\n\n Enter Your Choice : ";
          cin>>ch;
          switch(ch)
          {
               case 1:
                    fp=fopen("contestant.txt","ab");
                    while (1)
                    {
                         cout<<"\n Enter Contastant Name   :  ";
                         cin>>c.name;
                         fflush(stdin);
                         cout<<"\n Enter DOB.   :  ";
                         cin>>c.dob;
                         fflush(stdin);
                     
                         cout<<"\n Enter marks       :  ";
                         cin>>c.marks;
                         fflush(stdin);
                      
                         fwrite(&c,sizeof(c),1,fp);
                         fflush(stdin);
                         cout<<"\n\n Do You Want to Continue?(Y/N) : ";
                         cin>>cha;
                         if(cha=='n' || cha=='N')
                              break;
                    }
                    fclose(fp);
                    break;
                    
               case 2:
                    fp=fopen("contestant.txt","rb");
                    while (fread(&c,sizeof(c),1,fp))
                    {
                         while(1)
                         {
                              cout<<"\n Maks : "<<c.marks;
                              cout<<"\n Name : "<<c.name;
                              cout<<"\n DOB  : "<<c.dob<<endl;
                              break;
                         }
                    }
                    fclose(fp);
                    break;

               case 3:
                    fp=fopen("contestant.txt","rb");
                    while(fread(&c,sizeof(c),1,fp))
                    {
                         if(c.marks>30)
                         {
                         	cout<<"pass";

                              while(1)
                              {
                              		cout<<"\n Maks : "<<c.marks;
                              		cout<<"\n Name : "<<c.name;
                             		cout<<"\n DOB  : "<<c.dob<<endl;
                                  
                                   	break;
                              }
                         }
                    }
                    fclose(fp);
                    break;
               case 4:
                    exit(0);
               default:
                    cout<<"\n Invalid Choice";
          }
     }
     return 0;
}
