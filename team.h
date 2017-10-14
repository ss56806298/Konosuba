#ifndef TEAM_H
#define TEAM_H

#include "member.h"
#include "member_list.h"

class Member;

struct t_m{
    Member *member;
    int team_flag; //0为不在队伍,1为在队伍
};

class Team {

public:
    Team();

    t_m team_inf[max_team_member];//现在的队伍信息

};

#endif // TEAM_H
