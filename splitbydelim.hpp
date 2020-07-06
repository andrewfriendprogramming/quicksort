#include <iostream>
#include <string>
#include <vector>


///splits line in input by delimeter
std::vector<int> splitInputByDelim()
{
	std::vector<int> valueVector;
	std::string line;
	std::string substring;
	int lineLength, pos1 = 0 , pos2 = 0;

	std::getline(std::cin,line);
	lineLength = line.length();
	//first item
	pos2 = line.find(","); 
	//  substring = line.substr(0,(pos1-1));
	valueVector.push_back(std::stoi(line.substr(pos1,pos2-pos1)));
	//subsequent items;
	while (pos2 != std::string::npos)
	{
		pos1 = pos2 + 1;
		pos2 = line.find(',',pos1);
		valueVector.push_back(std::stoi(line.substr(pos1,pos2-pos1)));

	}
	

	return valueVector;
	 

}
void readVector(std::vector<int> vec)
{
	int size = vec.size();
	std::cout << "[";
	for (int i = 0; i < size; i++)
	{
		std::cout << vec[i]  << ",";
		
	}
	std::cout << "]" << "\n";
}
