#include "Player.hpp"

Player::Player() : _budget(10000)
{
	std::string name;
	
	std::cout << "Insert name: " << std::endl;
	std::cin >> name;
	this->_name = name;
}

Player::Player(std::string name) : _name(name), _budget(10000)
{}

Player::Player(Player const &source) : _name(source._name), _budget(source._budget)
{}

Player::~Player()
{}

std::string Player::getName()
{
	return (this->_name);
}

void Player::pickPlace(ListPlace &list)
{
	int index;
	int choice;
	std::string rename;

	index = -1;
	std::cout << "Pick your place!" << std::endl;
	while (++index < 5)
	std::cout << index << ": " << list.getListVoice(index).getName() << " for " << list.getListVoice(index).getPrice() << std::endl;
	// std::cout << "1: " << list.getListVoice(1).getName() << " for " << list.getListVoice(1).getPrice() << std::endl;
	// std::cout << "2: " << list.getListVoice(2).getName() << " for " << list.getListVoice(2).getPrice() << std::endl;
	// std::cout << "3: " << list.getListVoice(3).getName() << " for " << list.getListVoice(3).getPrice() << std::endl;
	// std::cout << "4: " << list.getListVoice(4).getName() << " for " << list.getListVoice(4).getPrice() << std::endl;
	std::cin >> choice;
	this->_ownerOf = list.getListVoice(choice);
	this->_budget -= list.getListVoice(choice).getPrice();
	std::cout << "Congrats! You're now the owner of " << this->_ownerOf.getName() << "!" << std::endl;
	std::cout << "Your current budget is " << this->_budget << ". You'll have to recover!" << std::endl;
	std::cout << "How do you want to call your brand new Place?" << std::endl;
	std::cin >> rename;
	this->_ownerOf.setName(rename);
	std::cout << "Your brand new place is ready. Make it shine!" << std::endl;
}