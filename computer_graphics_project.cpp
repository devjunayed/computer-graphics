#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Functions declaration
void menu();
void nameId();
void name();
void nationalFlag();
void star();
void house();
void emoji();
void pizza();






//main function
int main()
{
    while(1)
    {
        menu();
    }


}

//menu
void menu()
{

    char key;
    cout << "Enter '0' to terminate" << endl;
    cout << "======================" << endl;
    cout << "Choose any option: " << endl;
    cout << "-------------------" << endl;
    cout << "1. Display my name" << endl;
    cout << "2. National Flag" << endl;
    cout << "3. Star" << endl;
    cout << "4. House beside tree" << endl;
    cout << "5. Emoji"  << endl;
    cout << "6. Pizza" << endl;
    cout << "-------------------"  << endl;
    cout << "Your option please: ";
    cin >> key;


    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");
    switch(key)
    {
    case '0':
        cout << "\n\n\nApplication is terminated succesfully"<< endl;
        cout << "have a nice day!\n" << endl;
        system("taskkill /IM computer_graphics_project.exe /F");
        break;
    case '1':
        name();
        break;
    case '2':
        nationalFlag();
        break;
    case '3':
        star();
        break;
    case '4':
        house();
        break;
    case '5':
        emoji();
        break;
    case '6':
        pizza();
        break;
    default:
        system("cls");
        closegraph();
        cout << "\033[31mPlease choose valid option!\033[0m" << endl;
        main();
        break;
    }

    getch();
    closegraph();
    system("cls");
}


//name function
void name()
{
    nameId();
    //printing J
    line(50, 150, 100, 150);
    line(100, 150, 100, 200);
    arc(75, 200, 180, 0, 26);

    //printing U
    line(114, 150, 114, 200);
    line(165, 150, 165, 200);
    arc(140, 200, 180, 0, 26);



    //printing N
    line(175, 150, 175, 225);
    line(175, 150, 220, 225);
    line(220, 150, 220, 225);

    //printing A
    line(260, 150, 230, 225);
    line(260, 150, 290, 225);
    line(248, 185, 272, 185);

    //printing Y
    line(285, 150, 320, 195);
    line(350, 150, 300, 225);

    //printing E
    line(370, 150, 370, 225);
    line(370, 150, 420, 150);
    line(370, 185, 420, 185);
    line(370, 225, 420, 225);

    //printing D
    line(440, 150, 440, 225);
    arc(440, 189, 270, 85, 39);

}



//name and id for showing every window
void nameId()
{
    /*===NAME label start===*/

    // printing N
    line(10, 10, 10, 25);
    line(10, 10, 15, 25);
    line(15, 25, 15, 10);

    //printing A
    line(20, 25, 25, 10);
    line(25, 10, 30, 25);
    line(22, 20, 28, 20);

    //printing M
    line(35, 10, 35, 25);
    line(35, 10, 40, 20);
    line(45, 10, 40, 20);
    line(45, 10, 45, 25);

    //printing E
    line(50, 10, 50, 25);
    line(50, 10, 58, 10);
    line(50, 18, 56, 18);
    line(50, 25, 58, 25);

    //printing :-
    rectangle(65, 12, 68, 14);
    rectangle(65, 22, 68, 24);
    line(70, 18, 75, 18);

    /*==NAME label start===*/

    /*==NAME start===*/

    //printing M
    line(80, 10, 80, 25);
    line(80, 10, 85, 20);
    line(90, 10, 85, 20);
    line(90, 10, 90, 25);

    //printing D
    line(95, 10, 95, 25);
    arc(95, 18, 270, 90, 8);

    //printing .
    rectangle(105, 23, 107, 25);

    //printing J
    line(115, 10, 125, 10);
    line(125, 10, 125, 20);
    arc(120, 22, 180, 0, 6);

    //printing U
    line(130, 10, 130, 22);
    arc(135, 22, 180, 0, 5);
    line(139, 10, 139, 22);

    //printing N
    line(145, 10, 145, 25);
    line(145, 10, 150, 25);
    line(150, 25, 150, 10);

    //printing A
    line(155, 25, 160, 10);
    line(160, 10, 165, 25);
    line(158, 20, 163, 20);

    //printing Y
    line(170, 10, 175, 20);
    line(175, 20, 180, 10);
    line(175, 20, 175, 25);

    //printing E
    line(185, 10, 185, 25);
    line(185, 10, 192, 10);
    line(185, 18, 190, 18);
    line(185, 25, 192, 25);

    //printing D
    line(200, 10, 200, 25);
    arc(200, 18, 270, 90, 8);

    /*===NAME End===*/


    /*===ID Label start===*/

    //printing I
    line(10, 35, 20, 35);
    line(15, 35, 15, 50);
    line(10, 50, 20, 50);

    //printing D
    line(25, 35, 25, 50);
    arc(25, 42, 270, 90, 8);

    //printing :-
    rectangle(42, 37, 45, 40);
    rectangle(42, 44, 45, 48);
    line(50, 43, 55, 43);

    /*===ID Label End===*/


    /*===ID start===*/

    //printing C
    arc(70, 42, 80, 280, 8);

    //printing S
    arc(80, 39, 0, 180, 5);
    line(76, 40, 85, 44);
    arc(80, 45, 180, 0, 5);

    //printing E
    line(90, 35, 90, 50);
    line(90, 35, 99, 35);
    line(90, 43, 97, 43);
    line(90, 50, 99, 50);

    //printing 1
    line(110, 35, 110, 50);
    line(110, 35, 108, 36);
    line(105, 50, 115, 50);

    //printing 9
    circle(122, 40, 5);
    ellipse(118, 42, 270, 360, 8, 9);

    //printing 0
    ellipse(135, 43, 0, 360, 6, 7 );

    //printing 3
    ellipse(145, 40, 270, 90, 7, 5);
    ellipse(145, 48, 270, 90, 7, 6);


    //printing 0
    ellipse(160, 43, 0, 360, 6, 7 );

    //printing 1
    line(170, 35, 170, 50);
    line(170, 35, 168, 36);
    line(165, 50, 175, 50);


    //printing 8
    ellipse(182, 40, 0, 360, 5, 4 );
    ellipse(182, 47, 0, 360, 5, 5 );

    //printing 0
    ellipse(195, 43, 0, 360, 6, 7 );


    //printing 3
    ellipse(205, 40, 270, 90, 7, 5);
    ellipse(205, 48, 270, 90, 7, 6);

    //printing 2
    ellipse(217, 43, 267, 90, 7, 6);
    line(217, 46, 222, 54);


    /*===ID End===*/

}

//National Flag with color
void nationalFlag()
{
    nameId();


    //stand holder
    setcolor(RGB(192,192,192));
    rectangle(30, 400, 60, 420);
    setfillstyle(1, RGB(192, 192, 192));
    floodfill(35, 410, RGB(192,192, 192));

    //stand
    setcolor(RGB(192,192,192));
    rectangle(42, 100, 46, 400);
    setfillstyle(1, RGB(192, 192, 192));
    floodfill(43, 300, RGB(192,192, 192));

    //green rectangle
    setcolor(GREEN);
    rectangle(48, 105, 220, 190);
    setfillstyle(1, GREEN);
    floodfill(50, 150, GREEN);

    //red circle
    setcolor(RED);
    circle(130, 150, 25);
    setfillstyle(1, RED);
    floodfill(130, 150, RED);



}

void star()
{
    nameId();

    setcolor(RGB (175, 238, 238));
    line(100, 200, 300, 200);
    line(300, 200, 200, 350);
    line(200, 350, 100, 200);
    line(100, 300, 300, 300);
    line(300, 300, 200, 150);
    line(200, 150, 100, 300);

    setfillstyle(1, RGB (175, 238, 238));
    floodfill(200, 155, RGB (175, 238, 238));
    floodfill(295, 204, RGB (175, 238, 238));
    floodfill(200, 250, RGB (175, 238, 238));
    floodfill(105, 295, RGB (175, 238, 238));
    floodfill(295, 295, RGB (175, 238, 238));
    floodfill(200, 310, RGB (175, 238, 238));
    floodfill(105, 205, RGB (175, 238, 238));


}

void house()
{

    nameId();
    //canvas
    setcolor(WHITE);
    rectangle(0, 80, 700, 400);
    setfillstyle(1, WHITE);
    floodfill(51, 111, WHITE);

    //sun
    setcolor(YELLOW);
    circle(180,135, 35);
    setfillstyle(1, YELLOW);
    floodfill(180, 135, YELLOW);


    //roof
    setcolor(RGB(128, 128, 128));

    line(150, 200, 320, 200);
    line(320, 200, 360, 260);
    line(360, 260, 180, 260);
    line(180, 260, 150, 200);

    setfillstyle(5, RGB(128, 128, 128));
    floodfill(151, 201, RGB(128, 128, 128));

    //left side
    setcolor(RGB(192, 192, 192));

    line(150, 200, 110, 260);
    line(110, 260, 110, 380);
    line(110, 380, 180, 380);
    line(180, 380, 180, 260);
    line(180, 260, 150, 200);

    setfillstyle(1, RGB(192, 192, 192));
    floodfill(151, 220, RGB(192, 192, 192));

    //left side top left bar
    setcolor(BLACK);

    line(150, 200, 100, 260);
    line(100, 260, 110, 260);
    line(110, 260, 160, 210);
    line(160, 210, 150, 200);

    setfillstyle(1, BLACK);
    floodfill(151, 207, BLACK);

    //left side glass

    setcolor(WHITE);
    circle(150, 260, 22);
    setfillstyle(1, WHITE);
    floodfill(150, 250, WHITE);

    setcolor(RGB(0, 191, 255));
    circle(150, 260, 20);
    setfillstyle(1, RGB(0, 191, 255));
    floodfill(150, 250, RGB(0, 191, 255));


    //left side window
    setcolor(WHITE);
    rectangle(120, 300, 170, 340);
    setfillstyle(1, WHITE);
    floodfill(121, 301, WHITE);

    setcolor(RGB(0, 191, 255));
    rectangle(122, 302, 168, 338);
    setfillstyle(1, RGB(0, 191, 255));
    floodfill(124, 305, RGB(0, 191, 255));

    setcolor(WHITE);
    rectangle(144, 300, 146, 340);
    setfillstyle(1, WHITE);
    floodfill(145, 330, WHITE);



    //main body
    setcolor(RGB(150, 75, 0));
    rectangle(180, 260, 350, 380);

    setfillstyle(1, RGB(150, 75, 0));
    floodfill(181, 262, RGB(150, 75, 0));

    //front left  window
    setcolor(WHITE);
    rectangle(190, 300, 230, 340);
    setfillstyle(1, WHITE);
    floodfill(191, 301, WHITE);

    setcolor(RGB(0, 191, 255));
    rectangle(192, 302, 228, 338);
    setfillstyle(1, RGB(0, 191, 255));
    floodfill(193, 305, RGB(0, 191, 255));

    setcolor(WHITE);
    rectangle(209, 300, 211, 340);
    setfillstyle(1, WHITE);
    floodfill(210, 330, WHITE);


    //front right  window
    setcolor(WHITE);
    rectangle(300, 300, 340, 340);
    setfillstyle(1, WHITE);
    floodfill(301, 301, WHITE);

    setcolor(RGB(0, 191, 255));
    rectangle(302, 302, 338, 338);
    setfillstyle(1, RGB(0, 191, 255));
    floodfill(303, 305, RGB(0, 191, 255));

    setcolor(WHITE);
    rectangle(319, 300, 321, 340);
    setfillstyle(1, WHITE);
    floodfill(320, 330, WHITE);


    //door

    setcolor(BLACK);
    rectangle(247, 290, 287, 380);
    setfillstyle(1, BLACK);
    floodfill(248, 291,BLACK);

    setcolor(RGB(153, 102, 51));
    rectangle(245, 290, 285, 380);
    setfillstyle(1, RGB(153, 102, 51));
    floodfill(248, 298, RGB(153, 102, 51));

    setcolor(BLACK);
    circle(249, 335, 5);
    setfillstyle(1, BLACK);
    floodfill(249, 335, BLACK);

    //tree
    line(400, 380, 600, 380);
    setcolor(RGB(153, 102, 51));
    line(520, 380, 480, 380);
    line(480, 380, 480, 200);
    line(520, 380, 520, 200);
    line(520, 200, 480, 200);

    line(520, 270, 520, 260);
    line(520, 260, 540, 240);
    line(540, 240, 540, 250);
    line(540, 250, 520, 270);

    setfillstyle(1, RGB(153, 102, 51));
    floodfill(519, 379, RGB(153, 102, 51));
    floodfill(521, 261, RGB(153, 102, 51));

    //leaf
    setcolor(GREEN);
    circle(500, 150, 50);
    circle(460, 170, 50);
    circle(540, 170, 50);
    setfillstyle(1, GREEN);
    floodfill(500, 150, GREEN);
    floodfill(505, 150, GREEN);
    floodfill(530, 120, GREEN);
    floodfill(530, 150, GREEN);
    floodfill(480, 150, GREEN);
    floodfill(440, 170, GREEN);
    floodfill(550, 170, GREEN);

    //chimney

    setcolor(BLACK);
    rectangle(280, 170, 320, 230);
    setfillstyle(1, BLACK);
    floodfill(281, 181, BLACK);
    floodfill(318, 171, BLACK);



    //cloud 1



    setcolor(RGB(192, 192, 192));
    ellipse(110, 120, 0, 360, 30, 12);
    ellipse(130, 110, 0, 360, 30, 12);
    ellipse(140, 120, 0, 360, 30, 12);
    setfillstyle(1, RGB(192, 192, 192));
    floodfill(100, 120, RGB(192, 192, 192));
    floodfill(130, 120, RGB(192, 192, 192));
    floodfill(120, 105, RGB(192, 192, 192));
    floodfill(105, 110, RGB(192, 192, 192));
    floodfill(150, 120, RGB(192, 192, 192));
    floodfill(150, 110, RGB(192, 192, 192));
    floodfill(130, 123, RGB(192, 192, 192));

    //cloud 2
    setcolor(RGB(192, 192, 192));
    ellipse(220, 140, 0, 360, 30, 12);
    ellipse(240, 130, 0, 360, 30, 12);
    ellipse(250, 140, 0, 360, 30, 12);
    setfillstyle(1, RGB(192, 192, 192));
    floodfill(210, 140, RGB(192, 192, 192));
    floodfill(240, 140, RGB(192, 192, 192));
    floodfill(230, 125, RGB(192, 192, 192));
    floodfill(215, 130, RGB(192, 192, 192));
    floodfill(260, 140, RGB(192, 192, 192));
    floodfill(260, 130, RGB(192, 192, 192));
    floodfill(240, 143, RGB(192, 192, 192));


}

void emoji()
{
    nameId();

    //orange circle
    setcolor(RGB(255, 165, 0));
    circle(300, 250, 92);
    setfillstyle(1, RGB(255, 165, 0));
    floodfill(300, 250, RGB(255, 165, 0));


    //yellow circle
    setcolor(RGB(255, 217, 0));
    circle(300, 250, 90);
    setfillstyle(1, RGB(255, 217, 0));
    floodfill(300, 250, RGB(255, 217, 0));

    //left eye circle
    setcolor(WHITE);
    circle(260, 230, 20);
    setfillstyle(1, WHITE);
    floodfill(250, 230, WHITE);

    setcolor(BLACK);
    circle(265, 225, 8);
    setfillstyle(1, BLACK);
    floodfill(265, 225, BLACK);



    //right eye circle
    setcolor(WHITE);
    circle(340, 230, 20);
    setfillstyle(1, WHITE);
    floodfill(340, 230, WHITE);


    setcolor(BLACK);
    circle(345, 225, 8);
    setfillstyle(1, BLACK);
    floodfill(345, 225, BLACK);

    //mouth
    setcolor(WHITE);
    setbkcolor(WHITE);
    rectangle(270, 290, 330, 300);
    setfillstyle(7, BLACK);
    floodfill(271, 291, WHITE);



}
void pizza()
{
    nameId();

    setcolor(YELLOW);
    circle(250, 250, 67);
    setfillstyle(1, YELLOW);
    floodfill(310, 270, YELLOW);

    setcolor(WHITE);
    circle(250, 250, 60);
    setfillstyle(1, WHITE);
    floodfill(300, 270, WHITE);

    //tomato
    setcolor(RED);
    circle(230, 230, 18);
    setfillstyle(1, RED);
    floodfill(230, 230, RED);

    setcolor(RED);
    circle(270, 230, 18);
    setfillstyle(1, RED);
    floodfill(270, 230, RED);

    setcolor(RED);
    circle(230, 270, 18);
    setfillstyle(1, RED);
    floodfill(230, 270, RED);

    setcolor(RED);
    circle(270, 270, 18);
    setfillstyle(1, RED);
    floodfill(270, 270, RED);

    //vegetables
    setcolor(GREEN);
    circle(250, 210, 15);
    setfillstyle(1, GREEN);
    floodfill(250, 210, GREEN);


    setcolor(GREEN);
    circle(250, 250, 15);
    setfillstyle(1, GREEN);
    floodfill(250, 250, GREEN);

    setcolor(GREEN);
    circle(210, 250, 15);
    setfillstyle(1, GREEN);
    floodfill(210, 250, GREEN);

    setcolor(GREEN);
    circle(290, 250, 15);
    setfillstyle(1, GREEN);
    floodfill(290, 250, GREEN);

    setcolor(GREEN);
    circle(250, 290, 15);
    setfillstyle(1, GREEN);
    floodfill(250, 290, GREEN);

}
