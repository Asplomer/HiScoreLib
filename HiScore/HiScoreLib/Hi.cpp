#include "Hi.h"
Hi::Hi()
{

	hScore = 0;
}


void Hi::addChar(string cName, int cScore, int num)
{
	lis[num].name = cName;
	lis[num].score = cScore;
	updateHScore();

}
void Hi::addScore(int num,int toAdd)
{
	lis[num].score += toAdd;
	updateHScore();
}
int Hi::getScore(int num)
{
	return lis[num].score;
}
void Hi::setScore(int num, int scor)
{
	if (lis[num].name != "") 
	{
		lis[num].score = scor;
		updateHScore();
	}
}
void Hi::showScore()
{
	for (int i = 0; i < SIZE; i++)
	{
		if(lis[i].name !="")
		cout << "Character:" << lis[i].name.c_str() << "   " << "score:" << lis[i].score << endl;
	}
}
void Hi::showHScore()
{
	cout << hScore<< endl;
}
int Hi::getHScore()
{
	return hScore;
}
void Hi::updateHScore()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (lis[i].score > hScore) {
			if (lis[i].name != "")
			hScore = lis[i].score;
		}
	}
}

