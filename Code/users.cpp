#include <iostream>
#include <ctime>
#include<string>
#include"users.h"
#include"server.h"

using namespace std;

char *User::show_speak_time_and_id()
{
    time_t rawtime;
    struct tm* info;
    char current_time[80];//存储时间数组

    time(&rawtime);

    info = localtime(&rawtime);
    strftime(current_time, 80, "%Y-%m-%d %H:%M:%S", info);
    sprintf(my_chat_message,"id %d %s",id,current_time);
    return my_chat_message;
}

User::User()
{
    user_online=1;//创建对象证明用户上线
    srand(time(NULL));
    id = rand() % 10000;//0-9999
}
