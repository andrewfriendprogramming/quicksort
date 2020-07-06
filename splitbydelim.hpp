// Copyright (C) 2020  Andrew Friend

//     This program is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.

//     This program is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.

//     You should have received a copy of the GNU General Public License
//     along with this program.  If not, see <https://www.gnu.org/licenses/>.


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
