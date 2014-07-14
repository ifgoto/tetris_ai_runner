
#pragma once

#include "rule_st.h"

using namespace rule_st;
using namespace m_tetris;
using namespace m_tetris_rule_toole;

std::map<std::pair<unsigned char, unsigned char>, TetrisOpertion> TetrisRuleSet::get_opertion_info()
{
    std::map<std::pair<unsigned char, unsigned char>, TetrisOpertion> info;
#define T(a, b, c, d) (((a) ? 1 : 0) | ((b) ? 2 : 0) | ((c) ? 4 : 0) | ((d) ? 8 : 0))
    TetrisOpertion op_O1 =
    {
        create_node<'O', 1,
        T(0, 0, 0, 0),
        T(0, 1, 1, 0),
        T(0, 1, 1, 0),
        T(0, 0, 0, 0)>,
        nullptr,
        nullptr,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_I1 =
    {
        create_node<'I', 1,
        T(0, 0, 0, 0),
        T(1, 1, 1, 1),
        T(0, 0, 0, 0),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_I2 =
    {
        create_node<'I', 2,
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 1, 0)>,
        rotate_template<1>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_S1 =
    {
        create_node<'S', 1,
        T(0, 0, 0, 0),
        T(0, 0, 1, 1),
        T(0, 1, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_S2 =
    {
        create_node<'S', 2,
        T(0, 0, 1, 0),
        T(0, 0, 1, 1),
        T(0, 0, 0, 1),
        T(0, 0, 0, 0)>,
        rotate_template<1>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_Z1 =
    {
        create_node<'Z', 1,
        T(0, 0, 0, 0),
        T(0, 1, 1, 0),
        T(0, 0, 1, 1),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_Z2 =
    {
        create_node<'Z', 2,
        T(0, 0, 0, 1),
        T(0, 0, 1, 1),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<1>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_L1 =
    {
        create_node<'L', 1,
        T(0, 0, 0, 0),
        T(0, 1, 1, 1),
        T(0, 1, 0, 0),
        T(0, 0, 0, 0)>,
        rotate_template<4>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_L2 =
    {
        create_node<'L', 2,
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 1, 1),
        T(0, 0, 0, 0)>,
        rotate_template<1>,
        rotate_template<3>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_L3 =
    {
        create_node<'L', 3,
        T(0, 0, 0, 1),
        T(0, 1, 1, 1),
        T(0, 0, 0, 0),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<4>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_L4 =
    {
        create_node<'L', 4,
        T(0, 1, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<3>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_J1 =
    {
        create_node<'J', 1,
        T(0, 0, 0, 0),
        T(0, 1, 1, 1),
        T(0, 0, 0, 1),
        T(0, 0, 0, 0)>,
        rotate_template<4>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_J2 =
    {
        create_node<'J', 2,
        T(0, 0, 1, 1),
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<1>,
        rotate_template<3>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_J3 =
    {
        create_node<'J', 3,
        T(0, 1, 0, 0),
        T(0, 1, 1, 1),
        T(0, 0, 0, 0),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<4>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_J4 =
    {
        create_node<'J', 4,
        T(0, 0, 1, 0),
        T(0, 0, 1, 0),
        T(0, 1, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<3>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_T1 =
    {
        create_node<'T', 1,
        T(0, 0, 0, 0),
        T(0, 1, 1, 1),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<4>,
        rotate_template<2>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_T2 =
    {
        create_node<'T', 2,
        T(0, 0, 1, 0),
        T(0, 0, 1, 1),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        rotate_template<1>,
        rotate_template<3>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_T3 =
    {
        create_node<'T', 3,
        T(0, 0, 1, 0),
        T(0, 1, 1, 1),
        T(0, 0, 0, 0),
        T(0, 0, 0, 0)>,
        rotate_template<2>,
        rotate_template<4>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
    TetrisOpertion op_T4 =
    {
        create_node<'T', 4,
        T(0, 0, 1, 0),
        T(0, 1, 1, 0),
        T(0, 0, 1, 0),
        T(0, 0, 0, 0)>,
        generate_template<'T'>,
        rotate_template<3>,
        rotate_template<1>,
        nullptr,
        move_left,
        move_right,
        move_down,
    };
#undef T
    info.insert(std::make_pair(std::make_pair('O', 1), op_O1));
    info.insert(std::make_pair(std::make_pair('I', 1), op_I1));
    info.insert(std::make_pair(std::make_pair('I', 2), op_I2));
    info.insert(std::make_pair(std::make_pair('S', 1), op_S1));
    info.insert(std::make_pair(std::make_pair('S', 2), op_S2));
    info.insert(std::make_pair(std::make_pair('Z', 1), op_Z1));
    info.insert(std::make_pair(std::make_pair('Z', 2), op_Z2));
    info.insert(std::make_pair(std::make_pair('L', 1), op_L1));
    info.insert(std::make_pair(std::make_pair('L', 2), op_L2));
    info.insert(std::make_pair(std::make_pair('L', 3), op_L3));
    info.insert(std::make_pair(std::make_pair('L', 4), op_L4));
    info.insert(std::make_pair(std::make_pair('J', 1), op_J1));
    info.insert(std::make_pair(std::make_pair('J', 2), op_J2));
    info.insert(std::make_pair(std::make_pair('J', 3), op_J3));
    info.insert(std::make_pair(std::make_pair('J', 4), op_J4));
    info.insert(std::make_pair(std::make_pair('T', 1), op_T1));
    info.insert(std::make_pair(std::make_pair('T', 2), op_T2));
    info.insert(std::make_pair(std::make_pair('T', 3), op_T3));
    info.insert(std::make_pair(std::make_pair('T', 4), op_T4));
    return info;
}

std::map<unsigned char, m_tetris::TetrisBlockStatus(*)(m_tetris::TetrisMap const &)> TetrisRuleSet::get_generate_info()
{


}
