#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


typedef struct Point
{
    int x, y;
}
Point;

int main() {
    vector<Point> points;
    int temp = 1;
    int n = 0;
    while (cin >> temp){
        n++;
        Point point;
        point.x = temp;
        cin >> point.y;
        points.push_back(point);
    }
    sort(begin(points),end(points),[](Point a, Point b){
        if(a.x == b.x) return a.y < b.y;
        else return a.x < b.x;
    });
    for(int i=0;i<n;i++) cout<< points[i].x <<" " << points[i].y <<"\n";
}