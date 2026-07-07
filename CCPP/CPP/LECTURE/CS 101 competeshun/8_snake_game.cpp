#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
bool GO;
int xs[100],ys[100];
int xf,yf;
int xm=10,ym=20;
int score;
char ch;


void setup() {
    GO=false;
    xs[0]=5, ys[0]=5;
    xf=7, yf=7;
    score = 0;
}
void draw() {
    system("cls");
    for (int i=0;i<=ym+2;i++) {
        cout << "#";
    }
    cout << "\n";
    for (int i=0;i<=xm;i++) {
        cout << "#";
        for (int j=0;j<=ym;j++) {
            bool drawn = false;
            for (int k=0;k<100;k++) {
                if (i==xs[k] && j==ys[k]) {
                    cout << "S";
                    drawn = true;
                    break;
                }
            }
            if (!drawn) {
                if (i==xf && j==yf) {
                    cout << "F";
                } else {
                    cout << " ";
                }
            }
        }
        cout << "#" << "\n";
    }
    for (int i=0;i<=ym+2;i++){
        cout << "#";
    }
    cout << "\nScore: " << score << endl;
}
void input() {
    if (_kbhit()) {
        for (int i=score;i>0;i--) {
            xs[i]=xs[i-1];
            ys[i]=ys[i-1];
        }
        ch=_getch();
        if (ch == 'w') {
            xs[0]-=1;
        }
        if (ch == 's') {
            xs[0]+=1;
        }
        if (ch == 'a') {
            ys[0]-=1;
        }
        if (ch == 'd') {
            ys[0]+=1;
        }
        if (ch == 'x') {
            GO=true;
        }
    }
}
void execute() {
    if (xs[0]==xf&&ys[0]==yf) {
        score+=1;
        if (ch=='w') {
            xs[1]=xs[0]+1;
            ys[1]=ys[0];
        } else if (ch=='s') {
            xs[1]=xs[0]-1;
            ys[1]=ys[0];
        } else if (ch=='a') {
            xs[1]=xs[0];
            ys[1]=ys[0]+1;
        } else if (ch=='d') {
            xs[1]=xs[0];
            ys[1]=ys[0]-1;
        }
        xf=rand()%xm;
        yf=rand()%ym;
    }else if (xs[0]<0 || xs[0]>xm || ys[0]<0 || ys[0]>ym) {
        GO=true;
    } else {
        for (int i=score;i>0;i--) {
            if (xs[0]==xs[i] && ys[0]==ys[i]) {
                GO=true;
            }
        }
    }
}



int main() {
    setup();
    while (!GO) {
        draw();
        input();
        execute();
        Sleep(5);
    }
}