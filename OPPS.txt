// Online C++ compiler to run C++ program online
/*CREATING BANK ACCOUNT USING C++*/
#include <iostream>
using namespace std;
int i;
 class mybank{
private:
    int accountno,amount;
    string name;
    
 
public:
   void accept();
   void display();
   void widraw();
   void deposite();
   void balance();
        mybank(){
            accountno;
            amount;
            name;
            
        }
};
mybank m[100];
int j=0;
        void mybank::accept()
        {   int n;
        
            cout<<"\tenter your name\n";
            cin>>name;

            cout<<"\tenter acc number\n";
            cin>>accountno;

            cout<<"\tenter amount\n";
                       
            cin>>amount;
            j++;
        }
        void mybank::display(){
            for(i=0;i<j;i++)
            {
              cout << "\nAccount " << i + 1 << ":\n";
             
              cout<<"\n Name:"<<m[i].name<<"\n Account number:"<<m[i].accountno<<"\n Amount:"<<m[i].amount;
            }
        
        }
        void mybank::widraw(){
        int ac,am;
        cout<<"enter acount number";
        cin>>ac;
        cout<<"enter amount you want to widraw";
        cin>>am;
        for(i=0;i<j;i++)
        {
            if (m[i].accountno=ac)
            {
                m[i].amount=m[i].amount-am;
                break;
            }
        }
        }
        void mybank::deposite(){
        int acc,amt;
        
        cout<<"enter account no";
        cin>>acc;
        cout<<"enter amount you want to deposite";
        cin>>amt;
        for(i=0;i<j;i++)
        {
            if(m[i].accountno==acc)
            m[i].amount=m[i].amount+amt;
            
            break;
        }
        }
        void mybank::balance(){
            int c;
         
            
            cout<<"enter acount number";
            cin>>c;
            for(int i=0;i<j;i++){
                if(m[i].accountno==c){
                
            cout<<"amount is"<<m[i].amount<<endl;
                }
            else
             cout<<"ac not found"<<endl;
            }
        
        }
int main() {
   
    int ch;
    while(1){
         cout<<"WELCOME TO UNION BANK"<<endl;
        cout<<"\nAccept: \ndisplay: \nWidraw: \nDeposite:\nbalance";
        cout<<"\nenter your choice:";
        cin>>ch;
        
        switch(ch){
            case 1:
            m[j].accept();
            break;
            case 2:
            m[j].display();
            break;
            case 3:
            m[j].widraw();
            break;
            case 4:
            m[j].deposite();
            break;
            case 5:
            m[j].balance();
            break;
            case 6:
            return 0;
            default:
            cout<<"invlid choice\n";
            
        }
    }
    

    return 0;
}