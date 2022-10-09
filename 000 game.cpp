//c++学习第8天
#pragma warning(disable : 4996)
#include <iostream>
#include <string>



using std::cin;
using std::cout;
using std::endl;
using std::string;

struct person
{
    string name;
    int old;
    string address;
    int money = 1000;
    double HP = 100.0;
}player;

void battle();
void work();

void print()
{
    cout<<endl;
    cout<< "---------------M E N U-----------------"<<endl;
    cout<< "||------------------------------------||"<<endl;
    cout<< "||  1.battle                          ||"<<endl;
    cout<< "||  2.work                            ||"<<endl;

    cout<< "||  0.exit                            ||"<<endl;

    cout<<"name:"<<player.name<<" money:"<<player.money<<" HP:"<<player.HP<<endl;

    cout<<"Enter a number"<<endl;
}

void menu ()
{
    int n=100;
    print();

    while(n!=0)
    {
        cin>>n;
        if(n==1)battle();
        if(n==2)work();


        if(n==0)exit(0);
        if(player.HP<=0){cout<<"Oh no ! "<<player.name<<"  You dead !!!\n";
            if(player.old<30)cout<<" 可怜的年轻人~ "<<endl; exit(0);}
        print();
    }
}

int main(int argc ,char *argv[])
{
    cout<<"Enter your name :";
    cin>>player.name;
    cout<<"Enetr your ole :";
    cin>>player.old;

    menu();




    cout << endl;cout << "按任何键退出";cin.get();cin.get();//面向行的输入，保留换行符

}

void battle()//n==1
{   cout<<"Battling ~"<<endl;
    cout<<" Your HP subtract 9 "<<endl;
    player.HP=player.HP-9;
    cout<<"Now your HP is " <<player.HP<<endl;
    player.money=player.money+9999;
    cout<<" Your money add 9999 "<<endl;
    cout<<"Now your money is " <<player.money<<endl;
}
void work()//n==2
{   cout<<"Working ~"<<endl;
    player.money=player.money+100;
    cout<<" Your money add 100 "<<endl;
    cout<<"Now your money is " <<player.money<<endl;
}