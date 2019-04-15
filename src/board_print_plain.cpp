#include "board.h"
void Board(char* ptr[], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                ptr[i][j] = 'R';
            }
            if (i == 0 && j == 1) {
                ptr[i][j] = 'N';
            }
            if (i == 0 && j == 2) {
                ptr[i][j] = 'B';
            }
            if (i == 0 && j == 3) {
                ptr[i][j] = 'Q';
            }
            if (i == 0 && j == 4) {
                ptr[i][j] = 'K';
            }
            if (i == 0 && j == 5) {
                ptr[i][j] = 'B';
            }
            if (i == 0 && j == 6) {
                ptr[i][j] = 'N';
            }
            if (i == 0 && j == 7) {
                ptr[i][j] = 'R';
            }
            if (i == 1) {
                ptr[i][j] = 'P';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = 'p';
            }
            if (i == 7 && j == 0) {
                ptr[i][j] = 'r';
            }
            if (i == 7 && j == 1) {
                ptr[i][j] = 'n';
            }
            if (i == 7 && j == 2) {
                ptr[i][j] = 'b';
            }
            if (i == 7 && j == 3) {
                ptr[i][j] = 'q';
            }
            if (i == 7 && j == 4) {
                ptr[i][j] = 'k';
            }
            if (i == 7 && j == 5) {
                ptr[i][j] = 'b';
            }
            if (i == 7 && j == 6) {
                ptr[i][j] = 'n';
            }
            if (i == 7 && j == 7) {
                ptr[i][j] = 'r';
            }
        }
    }
}
void pBoard(char* ptr[], int n, int m)
{
    for (int i = 0, y = n; i < n; i++, y--) {
        cout << y << "  ";
        for (int j = 0; j < m; j++) {
            cout << "[ ";
            cout << ptr[i][j];
            cout << " ]";
        }
        cout << endl << endl;
    }
    cout << "     a    b    c    d    e    f    g    h" << endl;
}
