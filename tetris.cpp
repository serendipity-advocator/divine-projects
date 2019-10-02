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


int main()
{
    cout<<"This is a simple tetris game. Enjoy it!"<<endl;
}
class form: public block
{
private:
    
    
    int T3[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
    int T4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
    int L1[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}};
    int L2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {1, 0, 0, 0}};
    int L3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}};
    int L4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
    int J1[4][4] = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    int J2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}};
    int J3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
    int J4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
    int S1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 1, 0}, {1, 1, 0, 0}};
    int S2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
    int Z1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
    int Z2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
    int I1[4][4] = {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
    int I2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
    int O [4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}};

    string form[19] = {"T1", "T2", "T3", "T4", "L1", "L2", "L3", "L4", "J1", "J2", "J3", "J4", "S1", "S2", "S3", "Z1", "Z2", "O"};
public:
int* get_form()
{
    string form_name;
    cin>>form_name;
    for(int i = 0; i< 11; i++)
    {
        if(form_name == form[i])
        {

        }
    }    

}
};
