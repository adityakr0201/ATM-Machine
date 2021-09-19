#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bank {
private:
          string name;
          int acnumber;
          char type[10];
          int amount = 0;
          int total=0;
public:
          void setvalue()
          {
                   cout<<"Enter Name\n";
                   cin.ignore();
                   getline(cin, name);
                   cout<<"Enter Account Number\n";
                   cin>> acnumber;
                   cout<<"Enter Account type\n";
                   cin>>type;
                   cout<<"Enter Balance\n";
                   cin>>total;
          }
          void showdata()
          {
                   cout<<"Name:"<<name<<endl;
                   cout<<"Account No:"<<acnumber<<endl;
                   cout<<"Account type:"<<type<<endl;
                   cout<<"Balance:"<<total<<endl;
          }
          void deposit()
          {
                    cout<<"\nEnter Amount to be Deposited\n";
                    cin>>amount;
          }
          void showbal()
          {
                     total = total+amount;
                     cout<<"\nTotal Balance is:"<<total;
          }
          void withdrawl()
          {
                      int a, availablebalance;
                      cout<<"Enter Amount to withdrawl\n";
                      cin>>a;
                      availablebalance=total-a;
                      cout<<"Available Balance is"<<availablebalance;
          }
};
int main()
{
               Bank s;
               int choice;
               while(1)
               {
                       cout<<"\n**********************"
                                << "***********************"
                                <<"*****Welcome***********"
                                <<"***********************"
                                <<"*******\n\n";
                        cout<<"Enter Your Choice\n";
                        cout<<"\t1.Enter name,Account"
                                 <<"number,Account type\n";
                        cout<<"\t2.Balance Enquiry\n";
                        cout<<"\t3.Deposit Money\n";
                        cout<<"\t4.Show Total Balance\n";
                        cout<<"\t5.WithdrawllMoney\n";
                        cout<<"\t6.Cancel\n";
                        cin>>choice;
                        switch(choice){
                        case 1:
                                s.setvalue();
                                break;
                         case 2:
                                s.showdata();
                                break;
                          case 3:
                                 s.deposit();
                                 break;
                           case 4:
                                  s.showbal();
                                  break;
                            case 5:
                                  s.withdrawl();
                                  break;
                             case 6:
                                   exit(1);
                                   break;
                              default:
                                    cout<<"\nInvalid Choice\n";
                        }
               }
  }

