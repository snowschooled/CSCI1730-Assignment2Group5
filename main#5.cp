#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

struct Point
{
	float x;
	float y;
};
//read point
Point getPoint (Point&);
// receive two points and calculate and return the distance
float dist (Point, Point);
//return the slope receving two points and also determine definable
float slope (Point, Point, bool defined);
//find midpoint
void midpoint (Point, Point, Point&);
//find equation
void equation (Point, Point);
//receive THREE points and determine if it's colinear
void collinear (Point, Point, Point);
//show point
void showPoint (Point);

int numberOfPoint = 1;

int main()
{
	int selection;
	bool defined;
	Point p1, p2, p3;
	do{
		cout << "POINTLAND" << endl;
		cout << "What do you want to do?\n";
		cout << "1 - Find distance between two points\n";
		cout << "2 - Find slope\n";
		cout << "3 - Find a midpoint\n";
		cout << "4 - Find an equation of a line\n";
		cout << "5 -Determine if three points are collinear\n";
		cout << "6 - Exit\n";
		cout << "selection => ";
		cin >> selection;
		switch (selection)
		{
		case 1:
			getPoint (p1);
			getPoint (p2);
			cout << dist (p1, p2)<<endl;
			break;
		case 2:
			getPoint (p1);
			getPoint (p2);
			cout << slope (p1, p2, defined)<<endl;
			break;
		case 3:
			getPoint (p1);
			getPoint (p2);
			midpoint (p1, p2, p3);
			showPoint (p3);
			cout<<endl;
			break;
		case 4:
			getPoint (p1);
			getPoint (p2);
			equation (p1, p2);
			cout<<endl;
			break;
		case 5:
			getPoint (p1);
			getPoint (p2);
			getPoint (p3);
			collinear (p1, p2, p3);
			cout<<endl;
			break;
		case 6:
			exit(1);

		}
	}while((selection==1)||selection==2||selection==3||selection==4||selection==5);
	return 0;
}

void showPoint (Point midpoint)
{
	cout << "MidPoint = " << "(" << midpoint.x << "," << midpoint.y << ")";
}
Point getPoint (Point& p)
{
	char dummyForParenthesis;
	char dummyForComma;
	cout << "Enter point " << numberOfPoint << ": ";
	cin >>dummyForParenthesis >> p.x>> dummyForComma >> p.y >> dummyForParenthesis;
	numberOfPoint++;
}

float dist (Point p1, Point p2)
{
	float dist;
	float cMinusA = p2.x - p1.x;
	float dMinusB = p2.y - p1.y;
	dist = sqrt (pow (cMinusA, 2) + pow (dMinusB, 2));
	return dist;
}
float slope (Point p1, Point p2, bool defined)
{
	float slope;
	slope = (p2.y - p1.y) / (p2.x - p1.x);
	if (p1.x == p2.x) {
		defined = false;
		return defined;
	}else{
		return slope;
	}
}
void midpoint (Point p1, Point p2, Point& midpoint)
{
	midpoint.x = (p1.x + p2.x) / 2;
	midpoint.y = (p1.y + p2.y) / 2;
}
void equation (Point p1, Point p2)
{
	float slope;
	slope = (p2.y - p1.y) / (p2.x - p1.x);
	cout << "Equation: y = " << slope << "x";
	if ((p1.y - (slope * p1.x)) > 0) {
		cout << " + " << (p1.y - (slope * p1.x));
	}else if ((p1.y - (slope * p1.x)) < 0) {
		cout << (p1.y - (slope * p1.x));
	}
}
void collinear (Point p1, Point p2, Point p3)
{
	bool defined;
	bool defined2;
	float slopeOfALine = slope (p1, p2, defined);
	float slopeOfBLine = slope (p1, p3, defined);
	if (slopeOfALine == slopeOfBLine)
	{
		cout << "they are collinear" << endl;
	}else if (slopeOfALine != slopeOfBLine) {
		cout << "they are not collinear" << endl;
	}
}
