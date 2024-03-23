#include<iostream>
class CCAccount{
    public:
    std::string cName; //attribute
    double balance;
};

int main(){
    CCAccount cat;
    cat.cName="Mr.Watson";
    cat.balance=29.95;
    return 0;
}