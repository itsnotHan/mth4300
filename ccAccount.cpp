#include<iostream>
class SN{ //Stack Node
    public:
    double content;
    SN* aNext;
};

SN* push(SN* oH, double x){
    SN* nN;
    nN= new SN;
    nN->content=x;
    nN->aNext=oH;
    return nN;
}

SN* pop(SN* oH){
    if(oH==nullptr){
        return nullptr;
    }
SN* nextNode;
nextNode=oH->aNext;
delete oH;
return nextNode;
}

double readTop(SN* aH){
    if(aH==nullptr){
        return 0.0;
    }
    return aH->content;
}

int isEmpty(SN* aH){
    if(aH==nullptr){
        return 1;
    }
    return 0;
}

void deleteStack(SN* aH){
    while(aH!=nullptr){
        aH=pop(aH);
    }
}

class CCAccount{
private:
    double balance;
    SN* aHT; //add. head of transactions
public:
    std::string cName; //attribute
    CCAccount();
    void addCharge(double x);
    double getBalance();
    ~CCAccount();
};
CCAccount::~CCAccount(){
    deleteStack(aHT);
    aHT=nullptr; 
    std::cout<<"Thank you for letting me be your";
    std::cout<<"destructor.\n";
}
CCAccount::CCAccount(){
    std::cout<<"Constructor is executed\n";
    balance=0.0;
    aHT=nullptr; 
}
void CCAccount::addCharge(double x){ //implementation
    aHT=push(aHT,x);
    balance += x;
}

double CCAccount::getBalance(){return balance;}

int main(){
    std::cout<<"The beginning of the main.\n";
    {
    CCAccount cat; cat.cName="Mr.Watson";
    cat.addCharge(15.1);
    cat.addCharge(15.2);
    std::cout<<cat.getBalance()<<"\n";
    }
    std::cout<<"Just before termination of the program.\n";
    return 0;
} 
