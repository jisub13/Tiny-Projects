#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
int blocks,x,y, start, laser_x, laser_y =7, collisions;
char map[SIZE][SIZE], keystroke, shape;

int print_map();
int create_start();
int loc(char boy);
int move();

int main(void)
{
/*stage 1 - creating the initial obstacles*/
    create_start(map);
    /*Enter number of obstacles*/
    printf("Enter Difficulty \n");
    scanf("%d", &blocks);
    /*input coordinate of obstacles*/
    for (int v = 0; v < blocks; v++)
    {
        printf("Enter coordinates\n");
        scanf("%d%d", &x, &y);
    /*because map[][] is a pointer you can't assign normal way apparently*/
        map[x][y] = '1';
    }
    /*print initial layourt*/
    print_map(map);
    start = 1;
/*stage 2 - having the guy move*/
    while(collisions == 0)
    {
        printf("Enter key (WASD);");
        scanf("%s",&keystroke);
        if (keystroke == 'w')
        {
            move('w');
        }
        else if (keystroke == 'a')
        {
            shape = '<';
            move('a');
        }
        else if (keystroke == 'd')
        {
            shape ='>';
            move("d");
        }
        else if (keystroke == 's')
        {
            move('s');
        }
        print_map(map);
    }
}
















/*functions*/

/*allocates '0' to all values of character array*/
int create_start()
{
    for(int i=0; i < SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            map[j][i] = '0';
        }
    }
}

/*prints out edited layout*/
int print_map()
{
    for(int a = 0; a < SIZE; a++)
    {
        if (start == 0 && a == SIZE/2)
        {
            printf("> ");
        }
        else
        {
            printf("  ");

        }
        for(int b = 0; b < SIZE; b++)
        {
            printf("%c",map[a][b]);
            printf(" ");
        }
    printf("\n");
    }
    return(0);
}

/* changes my dudes location */
int loc(char boy)
{
    map[laser_y][laser_x] = boy;
}

/* movements*/
int move(char direction)
{
    map[laser_y][laser_x] = '0';
    if(direction == 'a')
    {
        laser_x -= 1;
        loc(shape);
    }
    else if (direction == 'd')
    {
        laser_x += 1;
        loc(shape);
    }
    else if (direction == 'w')
    {
        laser_y -=1;
        loc(shape);
    }
    else if (direction == 's')
    {
        laser_y +=1;
        loc(shape);
    }
}

/* collision testing */
int collide()
{
    if(map[laser_y][laser_y] == '0')
    {
        return(0);
    }
    else if(map[laser_y][laser_y] == '1')
    {
        return(1);
    }
}