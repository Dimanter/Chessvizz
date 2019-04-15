#include "board.h"

extern void pBoard(char* ptr[], int n, int m);
extern void Board(char* ptr[], int n, int m);

int main()
{
    int hod = 1;
    char board[8][8];
    char a[6];
    char* b[8];
    int x;
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
next:
    system("clear");
    pBoard(b, 8, 8);
    if (hod % 2 != 0) {
        cout << endl << " Time Of White " << endl;
        hod++;
    } else {
        cout << endl << " Time Of Black " << endl;
        hod++;
    }
povtr:
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    switch (a[0]) {
    case 'p': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = pawn(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'r': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = rook(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'b': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = bishop(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'k': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = king(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'n': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = kNight(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'q': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = queen(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'P': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = Pawn(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'R': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = rook(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'B': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = bishop(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'K': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = king(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'N': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = kNight(b, 8, 8, a, 6, hod);
            break;
        }
    }
    case 'Q': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = queen(b, 8, 8, a, 6, hod);
            break;
        }
    }
    }
    if (x == 5)
        goto povtr;
    if (x == 4)
        goto next;

    cout << endl;
    return 0;
}
