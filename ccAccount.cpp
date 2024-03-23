#include<iostream>
class CCAccount{
    private:
    double balance;
    public:
    std::string cName; //attribute
    void changeBalance(double ); //declaration of method
    double getBalance();
};

void CCAccount::changeBalance(double x){ //implementation
    balance=x;
}

double CCAccount::getBalance(){return balance;}

int main(){
    CCAccount cat; cat.cName="Mr.Watson";
    cat.changeBalance(29.95);
    std::cout<<cat.getBalance()<<"\n";
    return 0;
}