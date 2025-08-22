// problem: 785A
// title: Anton and Polyhedrons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> polyhedronFaces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int totalFaces = 0;
    for (int i = 0; i < n; ++i)
    {
        string polyhedron;
        cin >> polyhedron;
        totalFaces += polyhedronFaces[polyhedron];
    }

    cout << totalFaces << endl;

    return 0;
}