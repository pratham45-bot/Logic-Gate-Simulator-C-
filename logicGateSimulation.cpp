#include<iostream>
#include<vector>
using namespace std;
//base class
class logicGate{
    protected:
    int input1;
    int input2; 

    public:
    
    virtual int execute()=0;
    void setup(int a,int b){
        input1=a;
        input2=b;
    }
    

};
//derived classes 
//operations
class AND:public logicGate{
    public:
    int execute(){
        return input1&input2;
    }
};

class OR:public logicGate{
    public:
    int execute(){
        return input1|input2;
    }
};

class NOT:public logicGate{
    public:
    int execute(){
        return !input1;
    }
};

class XOR:public logicGate{
    public:
    int execute(){
        return input1 ^ input2;
    }
};

class NAND:public logicGate{
    public:
    int execute(){
        return !(input1&&input2);
    }
};

class NOR:public logicGate{
  public:
  int execute(){
    return !(input1||input2);
  }
};

class XNOR:public logicGate{
    public:
    int execute(){
        return !(input1 ^ input2);
    }
};


//main function

int main(){
     int lastResult = -1;
     vector<string>history;
     string operation;

     //while loop*****
    while(true)
    {
    logicGate*ptr;
    int choice;
    int usepev;
    
    //DISPLAY options
    cout<<"1--AND\n2--OR\n3--NOT\n4---XOR\n5---NAND\n6---NOR\n7--XNOR\n8--EXIT\n9--HISTORY"<<endl;
    cout<<"Your Choice:";
    cin>>choice;
 
    //(if conditions) after selection of option
    if(choice==1)
    {   operation="AND";
        ptr= new AND();
    }
      else if(choice==2)
        {   operation="OR";

            ptr= new OR();

        }
        else if(choice==4)
        {    operation ="XOR";

            ptr=new XOR();
        }
        else if(choice==5)
        {   operation="NAND";

            ptr=new NAND();
        }
        else if(choice==6){
        operation="NOR";

            ptr=new NOR();
        }
        else if(choice==7){
            operation="XNOR";
            ptr = new XNOR();
        
        }
        
        else if(choice==3)
        {  operation="NOT";
            ptr=new NOT();
            

        }

        //History feature display
        else if(choice==9)
        {   cout<<"---------------HISTORY-------------"<<endl;
            for (int i = 0; i <history.size(); i++)
            {
                cout<<i+1<<")"<<history[i]<<"\n";
            
            }
            continue;
        }

        // exit feature
        else
        {   cout<<"Total Operations:"<<history.size();
            break;
        }
    

   

     int a,b;
    int useprev;
    
    //USE OF LAST RESULT FEATURE
    if(lastResult != -1){
    cout<<"Use previous result ("<<lastResult<<") as input1? (1-Yes / 0-No): ";
    cin>>usepev;

    if(usepev == 1){
        a = lastResult;
    }
    else{
        cout<<"Enter Input 1: ";
        cin>>a;
    }
}
else{
    cout<<"Enter Input 1: ";
    cin>>a;
}
     if(a!=1&&a!=0){
            cout<<"invalid Input!!"<<endl;
            break;
        }

     if (choice!=3){
        cout<<"Enter Input 2:";
        cin>>b;
         if(b!=1&&b!=0){
            cout<<"invalid Input!!"<<endl;
            break;
        }
    
       
        ptr->setup(a,b);
     }
     else 
     {
        ptr->setup(a,0);
     }
      
     cout<<"\nResult:"<<ptr->execute()<<endl;
     lastResult=ptr->execute();
     if(choice==3){
        history.push_back( operation + "("+ to_string(a) +")="+ to_string(lastResult));
     }
     else{
        
     history.push_back( operation + "("+ to_string(a) + "," + to_string(b)+")="+ to_string(lastResult));
     }

     delete ptr;
    
    
    }
    return 0;

}

