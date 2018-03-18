#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <stdio.h>

void init1();

void init2();

void init3();

void init4();

void init5();

void init6();

void setfood();

int rand1();

void check();

void die1();

int far *screen = (int far *)0xb8000000;
int p = 3 * 16 * 256, red = 4 * 16 * 256, x = 4, y = 40, m, foodp[10000], z = 0, l = 0, dir = 4, size = 1, a[100], t1 = 0;
int speed = 100, color, level = 6, count = 0, b = 8 * 16 * 256, blue = 1 * 16 * 256;
char c;

//***************************************************************************
void reset() {
    for (int cle = 0; cle <= size; cle++) {
        a[cle] = p;
    }
    screen[x * 80 + y] = p;
  
    speed = 100;
    size = 1;
    z = 0;
    count = 0;
    if (level == 2) {
        init2();
    }
    if (level == 3) {
        init3();
    }
    if (level == 4) {
        init4();
    }
    if (level == 5) {
        init5();
    }
    if (level == 6) {
        init6();
    }
    if (level == 7) {
        init1();
    }
}

//**************************************************************************
void setfood() {
    if (color == p + 5 * 256 + 4) {
        screen[x * 80 + y] = 4 * 16 * 256;
        int eat2 = rand1();
        while (screen[eat2] != p) {
            eat2 = rand1();
        }
        screen[eat2] = p + 5 * 256 + 4;
    }
}

//***************************************************************************
void check(void) {
    if (color == p + 5 * 256 + 4) {
        count = count++;
        if (z <= 10) {
            size = size + count;
        }
        if (speed > 0) {
            speed = speed - 7;
        }
        char name[10] = "1234567890";
        for (int h = 1; h <= 10; h++) {
            if (count == h) {
                screen[78] = p + name[h];
            }
        }
        if (count == 10) {
            screen[78] = p + '0';
            level++;
            reset();
        }
    }
    screen[0] = p;
}

//***************************************************************************
int rand1(void) {
    time_t t;
    time(&t);
    srand((unsigned int) t);
    return rand() % (2000 - 180 + 1) + 180;
}

//***************************************************************************
void init1() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    x = 13;
    y = 40;
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '1';
    ///
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g1 = rand1();
    while (screen[g1] != p) {
        g1 = rand1();
    }
    screen[g1] = p + 5 * 256 + 4;

}

//*************************************************************************
void init2() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    x = 13;
    y = 40;
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '2';
    ///
    for (int wal2 = 2; wal2 <= 24; wal2++) {
        screen[wal2 * 80] = p + 177;
        screen[wal2 * 80 + 1] = p + 177;

        screen[wal2 * 80 + 79] = p + 177;
        screen[wal2 * 80 + 78] = p + 177;
    }
    ///
    for (int wal3 = 0; wal3 <= 79; wal3++) {
        screen[2 * 80 + wal3] = p + 177;
        screen[24 * 80 + wal3] = p + 177;
    }
    ///
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g2 = rand1();
    while (screen[g2] != p) {
        g2 = rand1();
    }
    screen[g2] = p + 5 * 256 + 4;
}

//**************************************************************************
void init3() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    x = 13;
    y = 40;
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '3';
    ///
    for (int wal2 = 2; wal2 <= 24; wal2++) {
        screen[wal2 * 80] = p + 177;
        screen[wal2 * 80 + 1] = p + 177;

        screen[wal2 * 80 + 79] = p + 177;
        screen[wal2 * 80 + 78] = p + 177;

    }
    ///
    for (int wal3 = 0; wal3 <= 79; wal3++) {
        screen[2 * 80 + wal3] = p + 177;
        screen[24 * 80 + wal3] = p + 177;
    }
    ///
    for (int wal1 = 7; wal1 <= 19; wal1++) {
        screen[wal1 * 80 + 20] = p + 177;
        screen[wal1 * 80 + 21] = p + 177;

        screen[wal1 * 80 + 58] = p + 177;
        screen[wal1 * 80 + 57] = p + 177;

    }
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g3 = rand1();
    while (screen[g3] != p) {
        g3 = rand1();
    }
    screen[g3] = p + 5 * 256 + 4;
}

//**************************************************************************
void init4() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '4';
    ///
    for (int wal1 = 2; wal1 < 10; wal1++) {
        screen[wal1 * 80] = p + 177;
        screen[wal1 * 80 + 1] = p + 177;

        screen[wal1 * 80 + 79] = p + 177;
        screen[wal1 * 80 + 78] = p + 177;

    }
    ///
    for (int wal2 = 18; wal2 <= 24; wal2++) {
        screen[wal2 * 80] = p + 177;
        screen[wal2 * 80 + 1] = p + 177;

        screen[wal2 * 80 + 79] = p + 177;
        screen[wal2 * 80 + 78] = p + 177;
    }
    ///
    for (int wal3 = 0; wal3 < 15; wal3++) {
        screen[2 * 80 + wal3] = p + 177;
        screen[24 * 80 + wal3] = p + 177;
    }
    for (int wal4 = 64; wal4 < 79; wal4++) {
        screen[2 * 80 + wal4] = p + 177;
        screen[24 * 80 + wal4] = p + 177;

    }
    ///
    for (int wal5 = 16; wal5 < 64; wal5++) {
        screen[9 * 80 + wal5] = p + 177;
        screen[18 * 80 + wal5] = p + 177;

    }
    ///
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g4 = rand1();
    while (screen[g4] != p) {
        g4 = rand1();
    }
    screen[g4] = p + 5 * 256 + 4;
}

//**************************************************************************
void init5() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '5';
    ///
    for (int wal1 = 2; wal1 < 18; wal1++) {
        screen[wal1 * 80] = p + 177;
        screen[wal1 * 80 + 1] = p + 177;
    }
    ///
    for (int wal2 = 10; wal2 <= 24; wal2++) {
        screen[wal2 * 80 + 79] = p + 177;
        screen[wal2 * 80 + 78] = p + 177;
    }
    ///
    for (int wal3 = 0; wal3 < 15; wal3++) {
        screen[2 * 80 + wal3] = p + 177;
        screen[24 * 80 + wal3] = p + 177;
    }
    for (int wal4 = 64; wal4 < 80; wal4++) {
        screen[2 * 80 + wal4] = p + 177;
        screen[24 * 80 + wal4] = p + 177;

    }
    ///
    for (int wal5 = 22; wal5 < 57; wal5++) {
        screen[7 * 80 + wal5] = p + 177;
        screen[19 * 80 + wal5] = p + 177;

    }
    ///
    for (int wal6 = 8; wal6 < 16; wal6++) {
        screen[wal6 * 80 + 22] = p + 177;
        screen[wal6 * 80 + 23] = p + 177;

    }
    for (int wal7 = 11; wal7 < 19; wal7++) {
        screen[wal7 * 80 + 56] = p + 177;
        screen[wal7 * 80 + 55] = p + 177;

    }
    ///
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g5 = rand1();
    while (screen[g5] != p) {
        g5 = rand1();
    }
    screen[g5] = p + 5 * 256 + 4;
}

//**************************************************************************
void init6() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 80; j++) {
            screen[i * 80 + j] = p;
        }
    }
    for (int tb = 0; tb < 80; tb++) {
        screen[tb + 80] = p + 240;
    }
    ///
    screen[74] = p + 4;
    screen[75] = p;
    screen[76] = p + '=';
    screen[77] = p;
    screen[78] = p + '1';
    ///
    screen[1] = p + 'L';
    screen[2] = p + 'E';
    screen[3] = p + 'V';
    screen[4] = p + 'E';
    screen[5] = p + 'L';
    screen[6] = p + ' ';
    screen[7] = p + '=';
    screen[8] = p + ' ';
    screen[9] = p + '6';
    ///
    for (int wal1 = 2; wal1 < 18; wal1++) {
        screen[wal1 * 80] = p + 177;
        screen[wal1 * 80 + 1] = p + 177;
    }
    ///
    for (int wal2 = 10; wal2 <= 24; wal2++) {
        screen[wal2 * 80 + 79] = p + 177;
        screen[wal2 * 80 + 78] = p + 177;
    }
    ///
    for (int wal3 = 0; wal3 < 15; wal3++) {
        screen[2 * 80 + wal3] = p + 177;
        screen[24 * 80 + wal3] = p + 177;
    }
    for (int wal4 = 64; wal4 < 80; wal4++) {
        screen[2 * 80 + wal4] = p + 177;
        screen[24 * 80 + wal4] = p + 177;
    }
    ///
    for (int wal5 = 8; wal5 < 22; wal5++) {
        screen[7 * 80 + wal5] = p + 177;
        screen[12 * 80 + wal5] = p + 177;
        screen[18 * 80 + wal5] = p + 177;
    }
    ///
    for (int wal6 = 7; wal6 < 13; wal6++) {
        screen[wal6 * 80 + 20] = p + 177;
        screen[wal6 * 80 + 21] = p + 177;
    }
    for (int wal7 = 12; wal7 < 19; wal7++) {
        screen[wal7 * 80 + 8] = p + 177;
        screen[wal7 * 80 + 9] = p + 177;
    }
    ///////////////
    for (int wal8 = 7; wal8 < 16; wal8++) {
        screen[wal8 * 80 + 28] = p + 177;
        screen[wal8 * 80 + 29] = p + 177;
    }
    ///
    for (int wal10 = 10; wal10 < 19; wal10++) {
        screen[wal10 * 80 + 41] = p + 177;
        screen[wal10 * 80 + 42] = p + 177;
    }
    ////
    for (int wal9 = 28; wal9 < 43; wal9++) {
        screen[7 * 80 + wal9] = p + 177;
        screen[18 * 80 + wal9] = p + 177;
    }
    ///
    for (int wal11 = 7; wal11 < 19; wal11++) {
        screen[wal11 * 80 + 49] = p + 177;
        screen[wal11 * 80 + 50] = p + 177;
    }
    ///
    for (int wal12 = 7; wal12 < 13; wal12++) {
        screen[wal12 * 80 + 57] = p + 177;
        screen[wal12 * 80 + 58] = p + 177;
    }
    for (int wal13 = 12; wal13 < 19; wal13++) {
        screen[wal13 * 80 + 69] = p + 177;
        screen[wal13 * 80 + 70] = p + 177;
    }
    ///
    for (int wal14 = 8; wal14 < 22; wal14++) {
        screen[7 * 80 + wal14 + 49] = p + 177;
        screen[12 * 80 + wal14 + 49] = p + 177;
        screen[18 * 80 + wal14 + 49] = p + 177;
    }
    ///
    screen[x * 80 + y] = 4 * 16 * 256;
    ///
    int g6 = rand1();
    while (screen[g6] != p) {
        g6 = rand1();
    }
    screen[g6] = p + 5 * 256 + 4;
}

//**************************************************************************
void die1(void) {
    for (int die1 = 0; die1 < 25; die1++) {
        for (int die2 = 0; die2 < 80; die2++) {
            screen[die1 * 80 + die2] = 16 * 256;
        }
    }
    ///
    screen[10 * 80 + 36] = blue + b + 4 * 256 + 'G';
    screen[10 * 80 + 37] = blue + b + 4 * 256 + 'A';
    screen[10 * 80 + 38] = blue + b + 4 * 256 + 'M';
    screen[10 * 80 + 39] = blue + b + 4 * 256 + 'E';
    screen[10 * 80 + 40] = blue + b + 4 * 256 + ' ';
    screen[10 * 80 + 41] = blue + b + 4 * 256 + 'O';
    screen[10 * 80 + 42] = blue + b + 4 * 256 + 'V';
    screen[10 * 80 + 43] = blue + b + 4 * 256 + 'E';
    screen[10 * 80 + 44] = blue + b + 4 * 256 + 'R';
    ///
    screen[12 * 80 + 27] = red + 'P';
    screen[12 * 80 + 28] = red + 'L';
    screen[12 * 80 + 29] = red + 'E';
    screen[12 * 80 + 30] = red + 'A';
    screen[12 * 80 + 31] = red + 'S';
    screen[12 * 80 + 32] = red + 'E';
    screen[12 * 80 + 33] = red + ' ';
    screen[12 * 80 + 34] = red + 'E';
    screen[12 * 80 + 35] = red + 'N';
    screen[12 * 80 + 36] = red + 'T';
    screen[12 * 80 + 37] = red + 'E';
    screen[12 * 80 + 38] = red + 'R';
    screen[12 * 80 + 39] = red + ' ';
    screen[12 * 80 + 40] = red + '"';
    screen[12 * 80 + 41] = red + 'E';
    screen[12 * 80 + 42] = red + 'S';
    screen[12 * 80 + 43] = red + 'C';
    screen[12 * 80 + 44] = red + '"';
    screen[12 * 80 + 45] = red + ' ';
    screen[12 * 80 + 46] = red + 'F';
    screen[12 * 80 + 47] = red + 'O';
    screen[12 * 80 + 48] = red + 'R';
    screen[12 * 80 + 49] = red + ' ';
    screen[12 * 80 + 50] = red + 'E';
    screen[12 * 80 + 51] = red + 'X';
    screen[12 * 80 + 52] = red + 'I';
    screen[12 * 80 + 53] = red + 'T';
}

//***************************************************************************
void move(dir) {
    while (!kbhit()) {
        setfood();
        check();
        if (dir == 1 || dir == 2) {
            delay(speed + 30);
        } else if (dir == 3 || dir == 4) {
            delay(speed);
        }
        screen[a[size - 1]] = p;
        screen[x * 80 + y] = p;

        for (int die = 1; die <= size; die++) {
            if (x * 80 + y == a[die]) {
                t1 = 1;
                screen[x * 80 + y] = 4 * 16 * 256;
            }
        }
        if (color == p + 177) {
            t1 = 1;
        }
        if (t1 == 1) {
            die1();
            return;
        }
        if (t1 == 0) {
            switch (dir) {
                case 1:
                    x++;
                    if (x == 25) {
                        x = x - 23;
                    }
                    break;

                case 2:
                    x--;
                    if (x == 1) {
                        x = x + 23;
                    }
                    break;

                case 3:
                    y++;
                    if (y == 80) {
                        y = y - 80;
                    }
                    break;

                case 4:
                    y--;
                    if (y == -1) {
                        y = y + 80;
                    }
                    break;
            }
            color = screen[x * 80 + y];
            for (int w = size; w >= 1; w--) {
                a[w] = a[w - 1];
            }
            a[0] = x * 80 + y;
            for (int d = 1; d <= size - 1; d++) {
                screen[a[d]] = 6 * 16 * 256;
            }
            screen[a[0]] = 4 * 16 * 256;
        }
    }
}

//***************************************************************************
void docommand(int t, char c) {
    switch (c) {
        case 'P':
            dir = 1;
            break;

        case 'H':
            dir = 2;
            break;

        case 'M':
            dir = 3;
            break;

        case 'K':
            dir = 4;
            break;
    }
    move(dir);
}

//***************************************************************************
int funckey(char &c) {
    int t = 0;
    c = getch();
    if (c == 0) {
        t = 1;
        c = getch();
    }
    return t;
}

//***************************************************************************
void main() {
    rand1();
    init1();
    move(dir);
    int t = funckey(c);
    while (c != 27 || (c == 27 && t != 0)) {
        docommand(t, c);
        t = funckey(c);
    }
}