
#include <iostream>
#include "..\HiScoreLib\Hi.h"
using namespace std;

void main() {
	string c1 = "simon";
	int s1 = 5;
	string c2 = "trevor";
	int s2 = 6;
	string c3 = "julius";
	int s3 = 9;
	Hi sco = Hi();
	sco.addChar(c1, s1, 0);
	sco.addChar(c2, s2, 1);
	sco.addChar(c3, s3, 2);

	sco.showScore();
	sco.showHScore();

	sco.addScore(0, 5);

	sco.showScore();
	sco.showHScore();
	
	sco.addScore(2, 100);
	sco.showHScore();
	cin.get();
}