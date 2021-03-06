/*
  Copyright 2015 Carter Turnbaugh

  This file is part of Terca C++ Markov.

  Terca C++ Markov is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Terca C++ Markov is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Terca C++ Markov.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <iostream>
#include <vector>

class markovnode;

struct nextnode{
	markovnode *node;
	int prob;
};

class markovnode {

public:
	markovnode(std::string name);
	
	int appendnode(markovnode *node);
	
	markovnode* getnext();
	markovnode* getbest();
	
	std::string getname();
	
private:
	std::string id;
	std::vector<nextnode> nextnodes;
};
