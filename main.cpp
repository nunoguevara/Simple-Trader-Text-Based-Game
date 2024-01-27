#include <iostream>

int main(int argc, char *argv[])
{
    int money = 50;
    int digitcoin = 0;
    int digitcoin_price = 5;
    
    while (true) {
	    int ratio;
	
    	srand (time(NULL));
	
    	ratio = rand() % 101 - 50;
    	
  	  int price = digitcoin_price += ratio;
    	
    	std::cout << "Digit Coin Trader" << std::endl;
    	std::cout << "Your digitcoin: " << digitcoin << std::endl;
    	std::cout << "Your money: " << money << std::endl;
    	std::cout << "1. Buy" << std::endl << "2. Sell" << std::endl;
    	std::cout << "Enter your choice:";
    	std::string cmd;
    	std::cin >> cmd;
    	
    	if (cmd == "1") {
    	  
    	    if (price <= 0) {
    	        price = 5;
    	    }
    	    std::cout << "Price: " << price << std::endl;
    	    int count;
    	    std::cout << "Enter the amount: ";
    	    while (!(std::cin >> count)) {
    	        std::cin.clear();
    	        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    	        std::cout << "Enter a valid number: ";
    	    }
    	    
    	    int totalprice;
    	    totalprice = price * count;
    	    if (money >= totalprice) {
    	        money -= totalprice;
    	        digitcoin += count;
    	    }
    	    else {
    	        std::cout << "Not enough money!";            }
    	        

    	}
        else if (cmd == "2") {
    	    if (price <= 0) {
    	        price = 5;
    	    }
    	    std::cout << "Price per 1 digitcoin: " << price << std::endl;
    	    std::cout << "Your digitcoin: " << digitcoin << std::endl;
    	    int count;
    	    std::cout << "Enter the amount: ";
    	    while (!(std::cin >> count)) {
    	        std::cin.clear();
    	        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    	        std::cout << "Enter a valid number: ";
    	    }
    	    if (digitcoin >= count) {
    	        int totalprice;
    	        totalprice = price * count;
    	        digitcoin -= count;
    	        money += totalprice;
    	    }
    	    else {
    	        std::cout << "Oops, you don't have enough digitcoin!" << std::endl;
    	    }
        }
    }
    return 0;
}