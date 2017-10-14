#include "member.h"

Member::Member(mem_inf default_member_info)
{
    this->NAME = default_member_info.NAME;
    this->GENDER = default_member_info.GENDER;
    this->PRO = default_member_info.PRO;
    this->LEV = default_member_info.LEV;
    this->HP = default_member_info.HP;
    this->MAX_HP = default_member_info.HP;
    this->MP = default_member_info.MP;
    this->MAX_MP = default_member_info.MP;
    this->SPD = default_member_info.SPD;
    this->STR = default_member_info.STR;
    this->INT = default_member_info.INT;
    this->AGI = default_member_info.AGI;
    this->LUK = default_member_info.LUK;
    this->PHY_DEF = default_member_info.PHY_DEF;
    this->MAG_DEF = default_member_info.MAG_DEF;
}
