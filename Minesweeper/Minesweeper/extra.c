#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#define WIDTH 9
#define HEIGHT 9
#define MINES 10

typedef struct {
    int revealed;
    int mine;
    int neighborCount;
    int flagged;
} Cell;

Cell board[HEIGHT][WIDTH];

void initializeBoard() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            board[i][j].revealed = 0;
            board[i][j].mine = 0;
            board[i][j].neighborCount = 0;
            board[i][j].flagged = 0;
        }
    }

    srand(time(NULL));
    int minesPlaced = 0;
    while (minesPlaced < MINES)
    {
        int x = rand() % WIDTH;
        int y = rand() % HEIGHT;
        if (!board[y][x].mine)
        {
            board[y][x].mine = 1;
            minesPlaced++;
        }
    }

    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (board[y][x].mine)
                continue;
            int count = 0;
            for (int dy = -1; dy <= 1; dy++)
            {
                for (int dx = -1; dx <= 1; dx++)
                {
                    if (x + dx >= 0 && x + dx < WIDTH && y + dy >= 0 && y + dy < HEIGHT)
                    {
                        if (board[y + dy][x + dx].mine)
                            count++;
                    }
                }
            }
            board[y][x].neighborCount = count;
        }
    }
}

void printBoard(int revealAll)
{
    printf("  ");
    for (int x = 0; x < WIDTH; x++)
    {
        printf("%d ", x);
    }
    printf("\n");

    for (int y = 0; y < HEIGHT; y++)
    {
        printf("%d ", y);
        for (int x = 0; x < WIDTH; x++)
        {
            if (revealAll)
            {
                if (board[y][x].mine)
                    printf("* ");
                else
                    printf("%d ", board[y][x].neighborCount);
            }
            else
            {
                if (board[y][x].flagged)
                {
                    printf("F ");
                }
                else if (!board[y][x].revealed)
                {
                    printf("# ");
                }
                else if (board[y][x].mine)
                {
                    printf("* ");
                }
                else
                {
                    printf("%d ", board[y][x].neighborCount);
                }
            }
        }
        printf("\n");
    }
}

void revealCell(int x, int y) {
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return;
    if (board[y][x].revealed || board[y][x].flagged) return;
    board[y][x].revealed = 1;
    if (board[y][x].mine) return;
    if (board[y][x].neighborCount == 0) {
        for (int dy = -1; dy <= 1; dy++) {
            for (int dx = -1; dx <= 1; dx++) {
                if (dx != 0 || dy != 0) {
                    revealCell(x + dx, y + dy);
                }
            }
        }
    }
}

int checkWin() {
    int correctFlags = 0;
    int revealedCount = 0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (board[y][x].flagged && board[y][x].mine) {
                correctFlags++;
            }
            if (board[y][x].revealed) {
                revealedCount++;
            }
        }
    }
    return (correctFlags == MINES && revealedCount + MINES == WIDTH * HEIGHT);
}

void flagCell(int x, int y) {
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return;
    if (board[y][x].revealed) return;
    board[y][x].flagged = !board[y][x].flagged;
}

int main() {
    initializeBoard();
    int gameRunning = 1;

    while (gameRunning) {
        printBoard(0);
        printf("Enter command (r x y to reveal, f x y to flag): ");
        char command;
        int x, y;
        scanf(" %c %d %d", &command, &x, &y);
        if (command == 'r') {
            revealCell(x, y);
            if (board[y][x].mine) {
                printf("Game Over! You hit a mine.\n");
                printBoard(1);
                gameRunning = 0;
            }
        }
        else if (command == 'f') {
            flagCell(x, y);
        }
        if (checkWin()) {
            printf("Congratulations! You've won the game.\n");
            printBoard(1);
            gameRunning = 0;
        }
    }
    return 0;
}

