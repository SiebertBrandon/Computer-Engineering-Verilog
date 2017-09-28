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
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab4/CPU/CPU_Test.v";
static int ng1[] = {0, 0};
static int ng2[] = {256, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2332164137U, 0U};
static unsigned int ng6[] = {4165009514U, 0U};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {3406430507U, 0U};
static int ng11[] = {5, 0};
static int ng12[] = {6, 0};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {3019899099U, 0U};
static int ng15[] = {8, 0};
static int ng16[] = {9, 0};
static int ng17[] = {10, 0};
static unsigned int ng18[] = {2583822368U, 0U};
static int ng19[] = {11, 0};
static unsigned int ng20[] = {335544324U, 0U};
static int ng21[] = {12, 0};
static int ng22[] = {13, 0};
static int ng23[] = {14, 0};
static unsigned int ng24[] = {2852257824U, 0U};
static int ng25[] = {15, 0};
static unsigned int ng26[] = {4160815200U, 0U};
static int ng27[] = {16, 0};
static const char *ng28 = "Program Counter: %d";



static void Initial_231_0(char *t0)
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

LAB0:    xsi_set_current_line(231, ng0);

LAB2:    xsi_set_current_line(232, ng0);
    xsi_set_current_line(232, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(236, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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

LAB10:    xsi_set_current_line(237, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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

LAB12:    xsi_set_current_line(238, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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

LAB14:    xsi_set_current_line(239, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng8)));
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

LAB16:    xsi_set_current_line(240, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB17;

LAB18:    xsi_set_current_line(241, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB19;

LAB20:    xsi_set_current_line(242, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng12)));
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

LAB22:    xsi_set_current_line(243, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB23;

LAB24:    xsi_set_current_line(244, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB25;

LAB26:    xsi_set_current_line(245, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng16)));
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

LAB28:    xsi_set_current_line(246, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB29;

LAB30:    xsi_set_current_line(247, ng0);
    t1 = ((char*)((ng18)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng19)));
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

LAB32:    xsi_set_current_line(248, ng0);
    t1 = ((char*)((ng20)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB33;

LAB34:    xsi_set_current_line(249, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB35;

LAB36:    xsi_set_current_line(250, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng23)));
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

LAB38:    xsi_set_current_line(251, ng0);
    t1 = ((char*)((ng24)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng25)));
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

LAB40:    xsi_set_current_line(252, ng0);
    t1 = ((char*)((ng26)));
    t2 = (t0 + 1928);
    t3 = (t0 + 1928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1928);
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
        goto LAB41;

LAB42:
LAB1:    return;
LAB4:    xsi_set_current_line(232, ng0);

LAB6:    xsi_set_current_line(233, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1928);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1928);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
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

LAB8:    xsi_set_current_line(232, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2088);
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

}

static void Always_255_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 3824);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(255, ng0);

LAB5:    xsi_set_current_line(256, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng28, 2, t0, (char)118, t5, 32);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1928);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 32);
    goto LAB2;

}

static void Cont_259_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3920);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 3840);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_m_00000000000091511606_2138213552_init()
{
	static char *pe[] = {(void *)Initial_231_0,(void *)Always_255_1,(void *)Cont_259_2};
	xsi_register_didat("work_m_00000000000091511606_2138213552", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000000091511606_2138213552.didat");
	xsi_register_executes(pe);
}
