#pragma once
#include <iostream>
using namespace std;
#define SIZE 5
struct character 
{
	string name;
	int score;
};

class Hi
{
private:
	character lis[SIZE];
	int hScore;

public:
	Hi();
	void addChar(string cName, int cScore, int num);
	void addScore(int num,int toAdd);
	int getScore(int num);
	void setScore(int num, int scor);
	void showScore();
	void showHScore();
	int getHScore();
	void updateHScore();
};