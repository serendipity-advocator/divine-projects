#include <iostream>
#include <string>

using namespace std;

class block
{
private:
    int block_content[4][4]={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
    string name = "parent's name_for_overridden";
public:
    virtual string get_name() {return name;}
    block()
    {
      for(auto a: block_content) a=0;
      //cout<<"block constucts"<<endl;
    }

    virtual int get_block_content(int a, int b)
    {
        return block_content[a][b];
    }

    void print_all_block()
    {
      for(int i=0; i<4;i++)
      {
        for(int j=0; j<4; j++)
        {
          cout<<get_block_content(i,j)<<"\t";
        }
        cout<<endl;
      }
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
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}};
public:
    //T1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    //~T1(){cout<<name<<"'s child class destucts."<<endl;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class T2: public block
{
private:
    string name = "T2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    //T2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class T3: public block
{
private:
    string name = "T3";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 1, 0}};
public:
    //T3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class T4: public block
{
private:
    string name = "T4";
    int Matrix[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}};
public:
    //T4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class L1: public block
{
private:
    string name = "L1";
    int Matrix[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}};
public:
    //L1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override {return Matrix[a][b];}
};

class L2: public block
{
private:
    string name = "L2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}, {1, 0, 0, 0}};
public:
    //L2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class L3: public block
{
private:
    string name = "L3";
    int Matrix[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}};
public:
    //L3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class L4: public block
{
private:
    string name = "L4";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}, {1, 1, 1, 0}};
public:
    //L4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class J1: public block
{
private:
    string name = "J1";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
public:
    //J1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class J2: public block
{
private:
  string name = "J2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 1, 0}};
public:
    //J2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class J3: public block
{
private:
    string name = "J3";
    int Matrix[4][4] = {{0, 0, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    //J3(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class J4: public block
{
private:
    string name = "J4";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}, {1, 1, 1, 0}};
public:
    //J4(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class S1: public block
{
private:
    string name = "S1";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 1, 0}, {1, 1, 0, 0}};
public:
    //S1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class S2: public block
{
private:
    string name = "S2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}};
public:
    //S2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class Z1: public block
{
private:
    string name = "Z1";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
public:
    //Z1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class Z2: public block
{
private:
    string name = "Z2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}};
public:
    //Z2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class I1: public block
{
private:
    string name = "I1";
    int Matrix[4][4] = {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
public:
    //I1(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class I2: public block
{
private:
    string name = "I2";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
public:
    //I2(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
};

class O: public block
{
private:
    string name = "O";
    int Matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}};
public:
    //O(){cout<<name<<"'s child class constructs"<<endl;}
    string get_name() override {return name;}
    int get_block_content(int a, int b) override{return Matrix[a][b];}
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
      block_type = new block*[19];
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
      form_assign<I1>(block_type, 16);
      form_assign<I2>(block_type, 17);
      form_assign<O>(block_type, 18);
    }
    void get_form(string form_wanted)
    {
        //string form_name;
        //cin>>form_name;
        int form_exist;
        for(form_exist = 0; form_exist< 17; form_exist++)
        {
            //cout<<form_exist<<endl;
            //cout<<"comparing!"<<endl;
            //cout<<i<<endl;
            //cout<<block_type[i]->get_name()<<endl;
            if(form_wanted == block_type[form_exist]->get_name())
            {
                //cout<<"We have "<<block_type[form_exist]->get_name()<<" for you!"<<endl;
                block_type[form_exist]->print_all_block();
                break;
            }
        }
        //cout<<form_exist<<endl;
        if(form_exist == 17) {cout<<"Sorry, no such form provided in the game"<<endl;}
        form_exist = 0;
      //  cout<<form_exist<<endl;
    }
};
const form eg_form;

class Game_screen
{
  friend class T1; friend class T2; friend class T3; friend class T4;
  friend class L1; friend class L2; friend class L3; friend class L4;
  friend class J1; friend class J2; friend class J3; friend class J4;
  friend class S1; friend class S2; friend class Z1; friend class Z2; friend class O;
  friend class form;
private:
  int** Game_matrix;
  int row = 0;
  int col = 0;
  int detecting_block[4][2]={{0, 0}, {0, 0}, {0, 0}, {0, 0}};
  int drop_table[5]={0, 0, 0, 0, 0};
  int drop_number=0;
  int count=0;
public:
  void set_row(int a)
  {
    row = a;
  }
  void set_col(int b)
  {
    col = b;
  }
  int get_row()
  {
    return row;
  }
  int get_col()
  {
    return col;
  }
  Game_screen(int m, int n)
  {
    int i=0;
    int j=0;
    int k=0;
    set_row(m);
    set_col(n);
    //cout<<"bang!"<<endl;
    if(row<4||col<4) cout<<"invalid game frame size!"<<endl;
    else
    {
      //cout<<"bang!"<<endl;
      int i, j, k;
      Game_matrix = (int**)new int[(row+4)*sizeof(int*) + (col+4)*n*sizeof(int)];
      cout<<endl;
      for(i = 0; i < (row+4); i++)
      {
        Game_matrix[i] = ((int *)(Game_matrix + (row+4))) + i*col*sizeof(int);
      }
      for(j= 0; j < (col+4); j++)
        {
          for(k = 0; k < col; k++)
          {
            Game_matrix[m][n] = 0;
          //cout<<"bang!"<<endl;
        }
        //cout<<endl;
        //cout<<"bang!"<<endl;
      }
    }
    //cout<<"bang!"<<endl;
  }

  void Delete_game()
  {
    delete [] Game_matrix;
  }

  int Get_element(int j, int k)
  {
    return Game_matrix[j][k];
  }

  void Display_game(int m, int n)
  {
    int j=0;
    int k=0;
    //cout<<"bang!"<<endl;
    for(j= 4; j < (m+4); j++)
      {
        //cout<<"bang!"<<endl;
        for(k = 0; k < n; k++)
        {
          //cout<<"bang!"<<endl;
          cout<<Game_matrix[j][k]<<"\t";
          //cout<<"bang!"<<endl;
        }
        cout<<endl;
      }
      cout<<endl;

  }

  void Display_detecting_block()
  {
    for(int j=0; j<4; j++)
    {
      for(int k=0; k<2; k++)
      {
        cout<<detecting_block[j][k]<<"\t";
      }
      cout<<endl;
    }
    cout<<endl;
  }

  void Display_drop_table()
  {
    cout<<"Now drop table is { ";
    for(int i=0; i<4; i++)
    {
      cout<<drop_table[i]<<" ";
    }
    cout<<"}"<<endl;
  }

  void clear_drop_table()
  {
    for(int j=0; j<4; j++)
    {
      drop_table[j] = 0;
    }
  }

  bool detect_buffer(int k)
  {
    int count = 0;
    for(int j= 0; j < 4; j++)
      {
        for(int k = 0; k < col; k++)
        {
          if(Game_matrix[j][k]==1)
          {
            count++;
          }

        }
        //cout<<"There are "<<count<<"small blocks in buffer."<<endl;
      }
      if(count == k) return 1;
      else return 0;
  }
  void clear_detecting_block()
  {
    for(int j=0; j<4; j++)
    {
      for(int k=0; k<2; k++)
      {
        detecting_block[j][k] =0;
      }
    }
  }

  bool dropping_condition()
  {
    int i =0;
    int interior = 0;
    //cout<<"drop 1!"<<endl;
    //();
    for(count = 0; count < 4; count++)
    {
      //cout<<"Now, count is "<<count<<endl;
      //cout<<"The block part we test now is ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"]."<<endl;
      if (detecting_block[count][0] == (row+3))
      {
        //cout<<"The block ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"] have been already touched floor, stop dropping!"<<endl;
        //cout<<"Record number fixed."<<endl;
        return 0;
      }
      else if (Game_matrix[detecting_block[count][0]+1][detecting_block[count][1]] == 0)
      {
        //cout<<"The block ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"] is in the air."<<endl;
        continue;
      }
      else
      {
        interior =0;
        for (i = 0; i < 4; i++)
        {

           if ((detecting_block[count][0]+1) == (detecting_block[i][0]) && (detecting_block[count][1]) == (detecting_block[i][1]))
            {
              //cout<<"This block ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"] is an interior block!"<<endl;
              interior++;
              continue;
            }
        }
      }
      //cout<<"Now, interior = "<<interior<<endl;
      //cout<<"The block under ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"] contains "<<Game_matrix[detecting_block[count][0]+1][detecting_block[count][1]]<<endl;
      if(interior == 0)
          {
            //cout<<"The block ["<<detecting_block[count][0]<<", "<<detecting_block[count][1]<<"] is touched by ["<<detecting_block[count][0]+1<<", "<<detecting_block[count][1]<<"]."<<endl;
            return 0;
          }
    }
  }

  void Add_form(string added, int pos)
  {
    int form_exist;
    //cout<<added<<endl;
    //adding the wanted form to the buffer.
    for(int j= 0; j < 4; j++)
      {
        for(int k = 0;k < 4; k++)
        {
          for(form_exist = 0; form_exist< 19; form_exist++)
          {
            if(added == eg_form.block_type[form_exist]->get_name())
            {
              //cout<<form_exist<<endl;
              //cout<<"We have "<<eg_form.block_type[form_exist]->get_name()<<" for you!"<<endl;
              Game_matrix[j][pos+k-1] = eg_form.block_type[form_exist]->get_block_content(j, k);
            }
          }
        }
      }
      if(detect_buffer(4)==1)
      {
        //Display_game(get_row(), get_col());
        //scanning the buffer region
        //cout<<"The added block is located at :"<<endl;
        count = 0;
        for(int j= 0; j < 4; j++)
        {
            for(int k = 0;k < col; k++)
            {
              if(Game_matrix[j][k] == 1)
              {
                detecting_block[count][0]=j;
                detecting_block[count][1]=k;
                //cout<<"["<<j<<", "<<k<<"]"<<endl;
                count++;
              }
            }
        }
        //Display_detecting_block();
        //<<"Now, we start to drop!"<<endl;
        //droping
        while(dropping_condition()==1)
        {
          //cout<<"drop!"<<endl;//not okay!
          for(int j = 3; j>-1 ; j--)
          {
              Game_matrix[detecting_block[j][0]][detecting_block[j][1]]=0;
              detecting_block[j][0] = detecting_block[j][0]+1;
              Game_matrix[detecting_block[j][0]][detecting_block[j][1]]=1;
          }
          //Display_game(get_row(), get_col());
        }
        clear_detecting_block();
        //Display_detecting_block();
        Display_game(get_row(), get_col());
      }
      else cout<<"invalid input!"<<endl;
    }

  int get_drop_number()
  {
    return drop_number;
  }
  void isolated_block_dropping()
  {
    int j, k, m;
    cout<<"Checking isolated small block!"<<endl;
    for(j=(row+2); j>=4; j--)
    {
        //cout<<"Row checking!"<<endl;
        for(k = 0; k < col; k++)
        {
          //cout<<"Column Checking!"<<endl;
          cout<<"Checking the "<<j-3<<" row and the "<<k+1<<" column."<<endl;
          if(Game_matrix[j][k]==0)
          {
            cout<<"empty"<<endl;
            continue;
          }
          else
          {
            if(k==0)
            {
              if((Game_matrix[j][k+1]==0) && (Game_matrix[j-1][k]==0))
              {
                int m;
                m=j;
                cout<<"Catch! mid"<<endl;
                  if(Game_matrix[m+1][k]==0)
                  {
                    Game_matrix[m+1][k] = Game_matrix[m][k];
                    Game_matrix[m][k]=0;
                    m++;
                    Display_game(get_row(), get_col());
                  }
                  cout<<"Bang!"<<endl;
                }
              }
            }
            if(k>0 && k<(col-1))
            {
              if((Game_matrix[j][k-1]==0) && (Game_matrix[j][k+1]==0) && (Game_matrix[j-1][k]==0))
              {
                int m;
                m=j;
                cout<<"Catch! mid"<<endl;
                while(m<=(row+2))
                {
                  if(Game_matrix[m+1][k]==0)
                  {
                    Game_matrix[m+1][k] = Game_matrix[m][k];
                    Game_matrix[m][k]=0;
                    m++;
                    Display_game(get_row(), get_col());
                  }
                  else break;
                  //cout<<"Bang!"<<endl;
                }
                }
              }
            }
            if(k==(col-1))
            {
              if((Game_matrix[j][k-1]==0) && (Game_matrix[j-1][k]==0))
              {
                int m;
                m=j;
                cout<<"Catch! right"<<endl;
                  if(Game_matrix[m+1][k]==0)
                  {
                    Game_matrix[m+1][k] = Game_matrix[m][k];
                    Game_matrix[m][k]=0;
                    m++;
                    Display_game(get_row(), get_col());
                  }
                  cout<<"Bang!"<<endl;
                }
              }
            }
            cout<<"Bang!"<<endl;
            cout<<"finish isolated_block_dropping.";
            cout<<endl;
          }
  void cancel_block(int drop_number)
  {
    int j, k;
      if(drop_number!=0)
      {
        Display_drop_table();
        for(j=(row+3); j>=4; j--)
        {
          for(int m=0; m<drop_number; m++)
          {
            for(j=drop_table[m]-1; j>=drop_table[m+1]; j--)
            {
              cout<<"Now we start dropping from the "<<drop_table[m]-4+1<<" row until the "<<drop_table[m+1]-4+1<<" row."<<endl;
              for(k = 0; k < col; k++)
              {
                 Game_matrix[j+(m+1)][k] = Game_matrix[j][k];
                 Game_matrix[j][k] =0;
              }
              Display_game(get_row(), get_col());
            }
          }
        }
        //cout<<"bang!";
        clear_drop_table();
        drop_number=0;
        cout<<"Now, drop number is "<<drop_number<<endl;
        Display_game(get_row(), get_col());
      }
    }

  void game_over_judge()
  {
    if(detect_buffer(0)!=1)
    {
      Delete_game();
      cout<<"GAME OVER"<<endl;
    }
  }

bool iso_cancel_checking()
{
  cout<<"we check for canceling first!"<<endl;
  int j, k, m;
  int i = 0;
  drop_number =0;
  for(j= (row+3); j >= 4; j--)
    {
      //cout<<"Running first layer of nested for-loop."<<endl;
      count=0;
      for(k = 0; k < col; k++)
      {
        //cout<<"Running second layer of nested for-loop."<<endl;
        //cout<<"Now we are in the "<<j<<"th row and the "<<k<<"th column."<<endl;
        if(Game_matrix[j][k]==1)
        {
          //cout<<Game_matrix[j][k]<<endl;
          count++;
        }
        //cout<<"This row now already have "<<count<<" full small blocks."<<endl;
        //cout<<count;
      }
      if(count==col)
      {
        cout<<"cancel!"<<endl;
        drop_number++;
        cout<<"full row"<<endl;
        drop_table[i] = j;
        i++;
        for(k = 0; k < col; k++)
        {
          Game_matrix[j][k]=0;
        }
        //Display_drop_table();
        drop_table[i]=4;
        Display_game(get_row(), get_col());
      }
    }
    cout<<"Now, drop number is "<<drop_number<<endl;
    if(drop_number!=0)
    {
      cout<<"We need to drop some row down!"<<endl;
      return 0;
    }
    cout<<"We don't need to cancel row, but we still have to check isolated_block."<<endl;
    for(j=(row+2); j>=4; j--)
    {
        cout<<"Row checking!"<<endl;
        for(k = 0; k < col; k++)
        {
          cout<<"Column Checking!"<<endl;
          cout<<"Checking the "<<j-3<<" row and the "<<k+1<<" column."<<endl;
          if(Game_matrix[j][k]==0)
          {
            continue;
          }
          else if(Game_matrix[j+1][k]==0)
          {
            if(k==0)
            {
              if((Game_matrix[j][k+1]==0) && (Game_matrix[j-1][k]==0))
              {
                cout<<"left iso~";
                return 0;
              }
            }
            if(k>0 && k<(col-1))
              {
                if((Game_matrix[j][k-1]==0) && (Game_matrix[j][k+1]==0) && (Game_matrix[j-1][k]==0))
                {
                  cout<<"mid iso~";
                  return 0;
                }
              }
              if(k==(col-1))
              {
                if((Game_matrix[j][k-1]==0) && (Game_matrix[j-1][k]==0))
                {
                  cout<<"right iso~";
                  return 0;
                }
              }
            }
          }
        }
        cout<<"We've finished all the test. Go add next form!"<<endl;
        return 1;
      }
};
int main()
{
    cout<<"This is a simple tetris game. Enjoy it!"<<endl;
    form eg_form;
    int row = -1;
    int col = -1;
    string added = "NONE";
    int position = -1;
    //cout<<"Please type in to the game frame  row size you want!";
    cin>>row;
    //cout<<"Please type in to the game frame  column size you want!";
    cin>>col;
    Game_screen round1(row, col);
    //cout<<"bang!"<<endl;
    //round1.Display_game(round1.get_row(), round1.get_col());
    cout<<"Ready to get form!!"<<endl;

    cin>>added;
    while(added!="End")
    {
      cin>>position;
      round1.Add_form(added, position);
      //cout<<"bang!"; okay
      while(round1.iso_cancel_checking()==0)
      {
        round1.game_over_judge();
        round1.cancel_block(round1.get_drop_number());
        round1.isolated_block_dropping();
      }
      cin>>added;
    }
    if(added=="End")
    {
      round1.Display_game(round1.get_row(), round1.get_col());
      round1.Delete_game();
    }
    return 0;
}
