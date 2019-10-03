#include <iostream>
#include <string>

using namespace std;

class block
{
private:
    int block_content[4][4];
public:
    block() {for(auto a: block_content) a=0;}    

    int* get_block_content()
    {
        return block_content[0];
    }
    void set_block_content(int a, int b, int value)
    {
        block_content[a][b] = value;
    }

};

class T1: public block
{
private:
    string name = "T1";
    int Matrix_T1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    T1();
};

class T2: public block
{
private:
    string name = "T2";
    int Matrix_T2[4][4] = {{0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    T2();
};

class T3: public block
{
private:
    string name = "T3";
    int Matrix_T3[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
public:
    T3();
};

class T4: public block
{
private:
    string name = "T4";
    int Matrix_T4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    T4();
};

class L1: public block
{
private:
    string name = "L1";
    int Matrix_L1[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}};
public:
    L1();
};

class L2: public block
{
private:
    string name = "L2";
    int Matrix_L2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {1, 0, 0, 0}};
public:
    L2();
};

class L3: public block
{
private:
    string name = "L3";
    int Matrix_L3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}};
public:
    L3();
};

class L4: public block
{
private:
    string name = "L4";
    int Matrix_L4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    L4();
};

class J1: public block
{
private:
    string name = "J1";
    int Matrix_J1[4][4] = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
public:
    J1();
};

class J2: public block
{
private:
    string name = "J2";
    int Matrix_J2[4][4] = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
public:
    J2();
};

class J3: public block
{
private:
    string name = "J3";
    int Matrix_J3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    J3();
};

class J4: public block
{
private:
    string name = "J4";
    int Matrix_J4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
public:
    J3();
};

class S1: public block
{
private:
    string name = "S1";
    int Matrix_S1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 1, 0}, {1, 1, 0, 0}};
public:
    S1();
};

class S2: public block
{
private:
    string name = "S2";
    int Matrix_S2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    S2();
};

class Z1: public block
{
private:
    string name = "Z1";
    int Matrix_Z1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
public:
    Z1();
};

class Z2: public block
{
private:
    string name = "Z2";
    int Matrix_Z2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
public:
    Z2();
};

class I1: public block
{
private:
    string name = "I1";
    int Matrix_I1[4][4] = {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    I1();
};

class I2: public block
{
private:
    string name = "I2";
    int Matrix_I2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
public:
    I2();
};

class O: public block
{
private:
    string name = "O";
    int Matrix_O [4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}};
public:
    O();
};

int main()
{
    cout<<"This is a simple tetris game. Enjoy it!"<<endl;
}
class form
{
friend class T1, T2, T3, T4, L1, L2, L3, L4, J1, J2, J3, J4, S1, S2, Z1, Z2, O;
private:
    class form[17] = {"T1", "T2", "T3", "T4", "L1", "L2", "L3", "L4", "J1", "J2", "J3", "J4", "S1", "S2", "Z1", "Z2", "O"};
public:
int* get_form()
{
    string form_name;
    cin>>form_name;
    for(int i = 0; i< 17; i++)
    {
        if(form_name == form[i])
        {
            cout<<form[i].name;
        }
    }    

}
};
