#include "ListPlace.hpp"

ListPlace::ListPlace()
{
	this->_list[0] = Place("Opera", 250000);
	this->_list[1] = Place("Concert Hall", 150000);
	this->_list[2] = Place("Discoteque", 100000);
	this->_list[3] = Place("Smokey Bar", 80000);
	this->_list[4] = Place("socialClub", 40000);
}

ListPlace::~ListPlace()
{}

Place ListPlace::getListVoice(int index)
{
	return (this->_list[index]);
}

float ListPlace::getListPrice(int index)
{
	return (this->_list[index].getPrice());
}