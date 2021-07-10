#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int pointer = 1;
int pressedKey = 0;

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void setCursorPosition(int x, int y)
{
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD pos = { x, y };
    SetConsoleCursorPosition(output, pos);
}

void pointHere(int x, int y)
{
    if(x == y)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);

    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void welcome()
{
    setCursorPosition(32, 8);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    setCursorPosition(46, 9);
    printf("****Welcome To Our Project.****\n");

    setCursorPosition(32, 10);  printf("Student");
    setCursorPosition(70, 10);  printf("Sec.");
    setCursorPosition(80, 10);  printf("B.N.");

    setCursorPosition(32, 12);  printf("Ahmed Mohammed Hussanein Ali");
    setCursorPosition(70, 12);  printf("1");
    setCursorPosition(80, 12);  printf("15");

    setCursorPosition(32, 11);  printf("Ahmed Mohammoud Hussany");
    setCursorPosition(70, 11);  printf("1");
    setCursorPosition(80, 11);  printf("19");

    setCursorPosition(32, 13);  printf("Osama Ali Mohammed Rashoan");
    setCursorPosition(70, 13);  printf("1");
    setCursorPosition(80, 13);  printf("26");

    setCursorPosition(32, 15);  printf("press any key to continue.");

    setCursorPosition(32, 16);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    getch();
}

short choice()
{
    system("cls");

    pointer = 1;
    pressedKey = 0;

    //setCursorPosition(32, 8);
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    //setCursorPosition(32, 12);
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


    while(1)
    {
        //fflush(stdin);
        system("cls");

        setCursorPosition(32, 8);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        setCursorPosition(32, 9);  pointHere(pointer, 0);  printf("Choose Your Data Structure:");
        setCursorPosition(32, 10); pointHere(pointer, 1);  printf("1.Dynamic Array.");
        setCursorPosition(32, 11); pointHere(pointer, 2);  printf("2.Linked List.");

        pointHere(pointer, 0);
        setCursorPosition(32, 12);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


        while(1)
        {
            pressedKey = getch();
            if(pressedKey == 72)
            {
                pointer--;
                if(pointer == 0)
                    pointer = 2;

                break;
            }
            else if(pressedKey == 80)
            {
                pointer++;
                if(pointer == 3)
                    pointer = 1;

                break;
            }
            else if(pressedKey == VK_RETURN)
            {
                return pointer;
            }
        }

    }

}

void Options(short choice)
{
    system("cls");

    pointer = 1;
    pressedKey = 0;

    while(1)
    {
        //fflush(stdin);
        system("cls");

        setCursorPosition(32, 8);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        setCursorPosition(32, 9);  pointHere(pointer, 0);  printf("What do you want to do?");
        setCursorPosition(32, 10); pointHere(pointer, 1);  printf("1.Insert a student at beginning.");
        setCursorPosition(32, 11); pointHere(pointer, 2);  printf("2.Insert a student at middle.");
        setCursorPosition(32, 12); pointHere(pointer, 3);  printf("3.Insert a student at last.");
        setCursorPosition(32, 13); pointHere(pointer, 4);  printf("4.Print the data base.");
        setCursorPosition(32, 14); pointHere(pointer, 5);  printf("5.Back to the previous menu.");
        setCursorPosition(32, 15); pointHere(pointer, 6);  printf("6.Exit.");

        pointHere(pointer, 0);
        setCursorPosition(32, 16);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


        while(1)
        {
            pressedKey = getch();
            if(pressedKey == 72)
            {
                pointer--;
                if(pointer == 0)
                    pointer = 6;

                break;
            }
            else if(pressedKey == 80)
            {
                pointer++;
                if(pointer == 7)
                    pointer = 1;

                break;
            }
            else if(pressedKey == VK_RETURN)
            {
                switch(pointer)
                {
                case 1:
                    printf("\nInsert At beginning.");
                    Sleep(1000);
                    break;

                case 2:
                    printf("\nInsert At middle.");
                    Sleep(1000);
                    break;

                case 3:
                    printf("\nInsert At last.");
                    Sleep(1000);
                    break;

                case 4:
                    printf("\nprint all data base.");
                    Sleep(1000);
                    break;

                case 5:
                    printf("\nback to menu.");
                    Sleep(1000);
                    break;

                case 6:
                    printf("\nexit.");
                    Sleep(1000);
                    exit(0);
                    break;
                }
            }
            if(((pointer == 6) || (pointer == 5))&& (pressedKey == VK_RETURN))
                break;
        }
        if (((pointer == 6) || (pointer == 5))&& (pressedKey == VK_RETURN))
            break;

    }
}

typedef struct
{
    char name[50];
    int ID;
    int day;
    int month;
    int year;
    int score;

} Student;

int main()
{
    hidecursor();

    welcome();

    while(1)
    {
        char c = choice();
        Options((short)c);
        if(pointer == 6)
            break;
    }


    return 0;
}