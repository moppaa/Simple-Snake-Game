#include <iostream>

using namespace std;

bool gameOver;
const int WIDTH = 20;
const int HEIGHT = 20;
int x, y, fruitx, fruity, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
    score = 0;
}

void Draw() 
{
    system("cls");
    for (int i = 0; i < WIDTH; i++)
    {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0)
                cout << "#";
            
                cout << " ";

            if (j == WIDTH - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH; i++)
    {
        cout << "#";
    }
    cout << endl;
}

void Input()
{

}

void Logic()
{

}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        //Sleep(10); sleep(10);
    }

    return 0;
}
