#pragma once
#include <iostream>
using namespace std;
struct character {
	string name;
	int score;
};

class Hi
{
private:
	character lis[5];

public:
	void character(string cName, int cScore);
	void addChar(string cName);
	void addScore(int toAdd);
	int getScore(string cName);
	void showScore();
};