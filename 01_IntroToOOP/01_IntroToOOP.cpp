#include <iostream>
#include <fstream>
using namespace std;

/*
struct Player
{
    string name;
    short age;
    int games;
    int goals;
};

void PrintPlayer(Player &pl)
{
    cout << "Name : " << pl.name << endl;
    cout << "Age : " << pl.age << endl;
    cout << "Games : " << pl.games << endl;
    cout << "Goals : " << pl.goals << endl;
}

void InitPlayer(Player& pl)
{
    cout << "Enter name : "; cin >> pl.name;
    cout << "Enter age : "; cin >> pl.age;
    pl.games = 0;
    pl.goals = 0;
}

void AddGameToPlayer(Player &pl, int goals = 0)
{
    pl.games++;
    pl.goals += goals;
}
*/

/*
struct Plater // Public
{

};
*/

/*
class Player // Private
{
private:
    string name;
    short age;
    int games;
    int goals;
public:
    void PrintPlayer()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Games : " << games << endl;
        cout << "Goals : " << goals << endl;
    }

    void InitPlayer()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter age : "; cin >> age;
        games = 0;
        goals = 0;
    }

    void AddGameToPlayer(int goals = 0)
    {
        games++;
        this->goals += goals;
        //goals += goals;
    }
};

class Student
{
private:
    string name; // data members
    int marks[3];
public:
    // setter
    void setName(string name)
    {
        this->name = name;
    }
    void setMark(int index, int mark)
    {
        if (mark >= 1 and mark <=12)
        {
            marks[index] = mark;
        }
        else
        {
            marks[index] = 0;
        }
    }
    // getter
    string getName()
    {
        return name;
    }
    int getMark(int index)
    {
        return marks[index];
    }

    double getAverage() // member function
    {
        double summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }
        return (double)summa / 3;
    }
};
*/

class Dot
{
private:
    int x;
    int y;
    int z;
public:
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    void setZ(int z)
    {
        this->z = z;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }

    void InputXYZ()
    {
        cout << "Enter X : "; cin >> x;
        cout << "Enter Y : "; cin >> y;
        cout << "Enter Z : "; cin >> z;
    }

    void ShowXYZ()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }

    void SaveFile()
    {
        ofstream out("Document_1");
        out << x << endl;
        out << y << endl;
        out << z << endl;
    }
    void ShowFromFile() // ReadFromFile
    {
        ifstream in("Document_1");
        in >> x;
        cout << x << endl;
        in >> y;
        cout << y << endl;
        in >> z;
        cout << z << endl;
       
    }
};

int main()
{
    /*Student st;
    st.setName("Ivan");
    st.setMark(0, 10);
    st.setMark(1, 11);
    st.setMark(2, 9);

    cout << "Name : " << st.getName() << " Marks : " << st.getMark(0) << " " << st.getMark(1) << " " << st.getMark(2) << endl;

    cout << "Average mark : " << st.getAverage() << endl;*/

    // ----------------------------------------------

    Dot d;
    d.InputXYZ();
    d.ShowXYZ();
    d.setX(9);
    d.setY(8);
    d.setZ(7);
    cout << "X is " << d.getX() << " Y is " << d.getY() << " Z is " << d.getZ() << endl;
    d.SaveFile();
    d.ShowFromFile();
    /*Dot read;
    read.ShowFromFile();
    read.ShowXYZ();*/
    // -----------------------------------------------

    /*Player player;
    player.InitPlayer();
    player.PrintPlayer();


    player.AddGameToPlayer(3);
    player.PrintPlayer();*/

    /*Player player;
    InitPlayer(player);
    PrintPlayer(player);
    AddGameToPlayer(player);
    AddGameToPlayer(player,1);
    AddGameToPlayer(player,2);
    PrintPlayer(player);*/

}