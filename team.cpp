#include "team.h"

Team::Team() {

    for (int i = 0;i < max_team_member;i++) {
        mem_inf default_member_info = default_member_list[i];
        Member *member = new Member(default_member_list[i]);
        t_m team;
        team.member = member;
        team.team_flag = 1;

        team_inf[i] = team;
    }
}
