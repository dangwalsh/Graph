//
//  graph4.cpp
//  Graph
//
//  Created by Daniel Walsh on 9/30/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//Output graph paper.    
    
	cout << "How many rows (e.g., 10)? ";
	int nrows;	//uninitialized variable
	cin >> nrows;
    
    if (!cin) {
        cerr << "Sorry, that wasn't a number.\n";
        return EXIT_FAILURE;
    }
    
    cout << "Row height (e.g., 10)? ";
	int rsize;	//uninitialized variable
	cin >> rsize;
    
    if (!cin) {
        cerr << "Sorry, that wasn't a number.\n";
        return EXIT_FAILURE;
    }
    
	cout << "How many columns (e.g., 10)? ";
	int ncols;	//uninitialized variable
	cin >> ncols;
    
    if (!cin) {
        cerr << "Sorry, that wasn't a number.\n";
        return EXIT_FAILURE;
    }
    
    cout << "Column width (e.g., 10)? ";
	int csize;	//uninitialized variable
	cin >> csize;
    
    if (!cin) {
        cerr << "Sorry, that wasn't a number.\n";
        return EXIT_FAILURE;
    }
    
    
    
	for (int r = 0; r < nrows; ++r) {
		for (int c = 0; c < ncols; ++c) {
			cout << "+";
            for (int x=0; x < csize; ++x) {
                cout << "-";
            }
		}
		cout << "\n";
        
		for (int c = 0; c < rsize; ++c) {
            for (int y=0; y < ncols; ++y) {
			cout << "|";
                for (int x=0; x < csize; ++x) {
                    cout << " ";
                }
            }
            cout << "\n";
		}
	}
    
	return EXIT_SUCCESS;
}
