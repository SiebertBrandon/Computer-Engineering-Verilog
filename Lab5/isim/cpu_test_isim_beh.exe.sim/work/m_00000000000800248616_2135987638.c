/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab5/cpu_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {299, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {40976U, 0U};
static unsigned int ng5[] = {8213U, 0U};
static unsigned int ng6[] = {24576U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {32773U, 0U};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {45059U, 0U};
static int ng13[] = {5, 0};
static unsigned int ng14[] = {12291U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {36866U, 0U};
static int ng17[] = {7, 0};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {16386U, 0U};
static int ng20[] = {9, 0};
static int ng21[] = {10, 0};
static int ng22[] = {11, 0};
static unsigned int ng23[] = {20482U, 0U};
static int ng24[] = {12, 0};
static unsigned int ng25[] = {36867U, 0U};
static int ng26[] = {13, 0};
static int ng27[] = {289, 0};
static int ng28[] = {15, 0};
static int ng29[] = {284, 0};
static int ng30[] = {296, 0};
static int ng31[] = {293, 0};
static int ng32[] = {297, 0};
static int ng33[] = {14, 0};
static int ng34[] = {287, 0};



static void Initial_54_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng16)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng23)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng25)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng28)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng29)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng30)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng31)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng24)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng32)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng33)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng34)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2088);
    t6 = (t4 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2088);
    t16 = (t13 + 64U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t3, t12, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 16);

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB6:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB16;

LAB17:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB18;

LAB19:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB20;

LAB21:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB22;

LAB23:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB24;

LAB25:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB28;

LAB29:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB30;

LAB31:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB32;

LAB33:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB34;

LAB35:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB36;

LAB37:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB38;

LAB39:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB40;

LAB41:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB42;

LAB43:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB44;

LAB45:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB46;

LAB47:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB48;

}

static void Always_83_1(char *t0)
{
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t14, 32, t16, 12);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t10, t13, 2, 1, t17, 32, 2);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t13, 12, 2);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 16);
    goto LAB2;

}

static void Always_87_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t14, 32, t16, 12);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t17, 32, 2);
    t15 = (t6 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t7);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t27);
    goto LAB7;

}


extern void work_m_00000000000800248616_2135987638_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_83_1,(void *)Always_87_2};
	xsi_register_didat("work_m_00000000000800248616_2135987638", "isim/cpu_test_isim_beh.exe.sim/work/m_00000000000800248616_2135987638.didat");
	xsi_register_executes(pe);
}
