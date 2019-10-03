#include <iostream>
#include <string>

using namespace std;

class block
{
private:
    int block_content[4][4];
    string name = "parent's name_for_overridden";
public:
    virtual string get_name() {return name;}
    block()
    {
      for(auto a: block_content) a=0;
      cout<<"block constucts"<<endl;
    }

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
    T1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    ~T1(){cout<<name<<"'s child class destucts."<<endl;}
};

class T2: public block
{
private:
    string name = "T2";
    int Matrix_T2[4][4] = {{0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    T2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class T3: public block
{
private:
    string name = "T3";
    int Matrix_T3[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
public:
    T3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class T4: public block
{
private:
    string name = "T4";
    int Matrix_T4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    T4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class L1: public block
{
private:
    string name = "L1";
    int Matrix_L1[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}};
public:
    L1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class L2: public block
{
private:
    string name = "L2";
    int Matrix_L2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {1, 0, 0, 0}};
public:
    L2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class L3: public block
{
private:
    string name = "L3";
    int Matrix_L3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}};
public:
    L3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class L4: public block
{
private:
    string name = "L4";
    int Matrix_L4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    L4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class J1: public block
{
private:
    string name = "J1";
    int Matrix_J1[4][4] = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
public:
    J1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class J2: public block
{
private:
  string name = "J2";
    int Matrix_J2[4][4] = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
public:
    J2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class J3: public block
{
private:
    string name = "J3";
    int Matrix_J3[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    J3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class J4: public block
{
private:
    string name = "J4";
    int Matrix_J4[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
public:
    J4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class S1: public block
{
private:
    string name = "S1";
    int Matrix_S1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 1, 0}, {1, 1, 0, 0}};
public:
    S1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class S2: public block
{
private:
    string name = "S2";
    int Matrix_S2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    S2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class Z1: public block
{
private:
    string name = "Z1";
    int Matrix_Z1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
public:
    Z1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class Z2: public block
{
private:
    string name = "Z2";
    int Matrix_Z2[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
public:
    Z2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class I1: public block
{
private:
    string name = "I1";
    int Matrix_I1[4][4] = {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    I1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class I2: public block
{
private:
    string name = "I2";
    int Matrix_I2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
public:
    I2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

class O: public block
{
private:
    string name = "O";
    int Matrix_O [4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}};
public:
    O(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
};

template <class myType>
void form_assign (block **b_type,int i)
{
 b_type[i] = new myType;
}


class form
{
    friend class T1; friend class T2; friend class T3; friend class T4;
    friend class L1; friend class L2; friend class L3; friend class L4;
    friend class J1; friend class J2; friend class J3; friend class J4;
    friend class S1; friend class S2; friend class Z1; friend class Z2; friend class O;
public:
    block **block_type;
    form()
    {
      block_type = new block*[17];
      form_assign<T1>(block_type, 0);
      form_assign<T2>(block_type, 1);
      form_assign<T3>(block_type, 2);
      form_assign<T4>(block_type, 3);
      form_assign<L1>(block_type, 4);
      form_assign<L2>(block_type, 5);
      form_assign<L3>(block_type, 6);
      form_assign<L4>(block_type, 7);
      form_assign<J1>(block_type, 8);
      form_assign<J2>(block_type, 9);
      form_assign<J3>(block_type, 10);
      form_assign<J4>(block_type, 11);
      form_assign<S1>(block_type, 12);
      form_assign<S2>(block_type, 13);
      form_assign<Z1>(block_type, 14);
      form_assign<Z2>(block_type, 15);
      form_assign<O>(block_type, 16);
    }
    void get_form(string form_wanted)
    {
        //string form_name;
        //cin>>form_name;
        int form_exist =0;
        for(int i = 0; i< 17; i++)
        {
            //cout<<i<<endl;
            //cout<<block_type[i]->get_name()<<endl;
            if(form_wanted == block_type[i]->get_name())
            {
                cout<<block_type[i]->get_name();
                break;
            }
            else form_exist = form_exist +1;
        }
        if(form_exist !=0) {cout<<"no such form provided in the game"<<endl;}
    }
};

int main()
{
    cout<<"This is a simple tetris game. Enjoy it!"<<endl;
    string form_name;
    form eg_form;
    cout<<"Ready to get form!!"<<endl;
    cin>>form_name;
    eg_form.get_form(form_name);
}
