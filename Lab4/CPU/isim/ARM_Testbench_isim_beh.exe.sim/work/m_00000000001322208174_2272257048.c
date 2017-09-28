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
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab4/CPU/CPU_Modules.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {15U, 0U};
static int ng10[] = {1, 0};
static const char *ng11 = "Executed a Store operation";
static const char *ng12 = "Executed a Load operation";
static const char *ng13 = "Executed an R-Type operation.";
static const char *ng14 = "reg1data: %d";
static const char *ng15 = "reg2data: %d";
static const char *ng16 = "ALUop: %d";
static const char *ng17 = "result: %d";
static const char *ng18 = "Writeback Reg: %d";



static void Initial_152_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(152, ng0);

LAB2:    xsi_set_current_line(153, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(154, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(155, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(156, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(158, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_160_1(char *t0)
{
    char t13[16];
    char t61[16];
    char t62[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(160, ng0);

LAB5:    xsi_set_current_line(161, ng0);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t13, 64, t4, 64, t7, 32);
    t8 = (t13 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(173, ng0);

LAB44:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB42:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t8);
    t16 = (t14 & t15);
    *((unsigned int *)t62) = t16;
    t7 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t62 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t10) = t22;
    t23 = *((unsigned int *)t10);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB45;

LAB46:
LAB47:    t17 = (t0 + 1848U);
    t18 = *((char **)t17);
    t48 = *((unsigned int *)t62);
    t49 = *((unsigned int *)t18);
    t50 = (t48 | t49);
    *((unsigned int *)t63) = t50;
    t17 = (t62 + 4);
    t19 = (t18 + 4);
    t25 = (t63 + 4);
    t51 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t19);
    t55 = (t51 | t54);
    *((unsigned int *)t25) = t55;
    t56 = *((unsigned int *)t25);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB48;

LAB49:
LAB50:    t38 = (t63 + 4);
    t75 = *((unsigned int *)t38);
    t76 = (~(t75));
    t77 = *((unsigned int *)t63);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB2;

LAB7:    xsi_set_current_line(162, ng0);
    t7 = (t0 + 4008);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4168);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = 0;

LAB25:    t15 = (t14 < 2);
    if (t15 == 1)
        goto LAB26;

LAB27:    t60 = (t0 + 3368);
    xsi_vlogvar_assign_value(t60, t13, 0, 0, 64);
    goto LAB21;

LAB9:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = 0;

LAB31:    t15 = (t14 < 2);
    if (t15 == 1)
        goto LAB32;

LAB33:    t41 = (t0 + 3368);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 64);
    goto LAB21;

LAB11:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_add(t13, 64, t7, 64, t10, 64);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 64);
    goto LAB21;

LAB13:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_minus(t13, 64, t7, 64, t10, 64);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 64);
    goto LAB21;

LAB15:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    goto LAB21;

LAB17:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = 0;

LAB37:    t15 = (t14 < 2);
    if (t15 == 1)
        goto LAB38;

LAB39:    xsi_vlogtype_unsigned_bit_neg(t13, 64, t61, 64);
    t41 = (t0 + 3368);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 64);
    goto LAB21;

LAB19:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB21;

LAB22:    t35 = (t14 * 8);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t19) = (t36 | t37);
    t38 = (t9 + t35);
    t39 = (t35 + 4);
    t40 = (t9 + t39);
    t41 = (t12 + t35);
    t42 = (t35 + 4);
    t43 = (t12 + t42);
    t44 = *((unsigned int *)t38);
    t45 = (~(t44));
    t46 = *((unsigned int *)t40);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t56 & t54);
    t57 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t57 & t55);
    t58 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t58 & t54);
    t59 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t59 & t55);

LAB24:    t14 = (t14 + 1);
    goto LAB25;

LAB23:    goto LAB24;

LAB26:    t16 = (t14 * 8);
    t17 = (t9 + t16);
    t18 = (t12 + t16);
    t19 = (t13 + t16);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 & t21);
    *((unsigned int *)t19) = t22;
    t23 = (t14 * 8);
    t24 = (t23 + 4);
    t25 = (t9 + t24);
    t26 = (t23 + 4);
    t27 = (t12 + t26);
    t28 = (t23 + 4);
    t29 = (t13 + t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t27);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB22;
    else
        goto LAB23;

LAB28:    t35 = (t14 * 8);
    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t25);
    *((unsigned int *)t17) = (t36 | t37);
    t27 = (t7 + t35);
    t39 = (t35 + 4);
    t29 = (t7 + t39);
    t38 = (t10 + t35);
    t42 = (t35 + 4);
    t40 = (t10 + t42);
    t44 = *((unsigned int *)t29);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t52 = (t46 & t45);
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = *((unsigned int *)t38);
    t53 = (t49 & t48);
    t50 = (~(t52));
    t51 = (~(t53));
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);

LAB30:    t14 = (t14 + 1);
    goto LAB31;

LAB29:    goto LAB30;

LAB32:    t16 = (t14 * 8);
    t11 = (t7 + t16);
    t12 = (t10 + t16);
    t17 = (t13 + t16);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    *((unsigned int *)t17) = t22;
    t23 = (t14 * 8);
    t24 = (t23 + 4);
    t18 = (t7 + t24);
    t26 = (t23 + 4);
    t19 = (t10 + t26);
    t28 = (t23 + 4);
    t25 = (t13 + t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t19);
    t32 = (t30 | t31);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t25);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB28;
    else
        goto LAB29;

LAB34:    t35 = (t14 * 8);
    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t25);
    *((unsigned int *)t17) = (t36 | t37);
    t27 = (t7 + t35);
    t39 = (t35 + 4);
    t29 = (t7 + t39);
    t38 = (t10 + t35);
    t42 = (t35 + 4);
    t40 = (t10 + t42);
    t44 = *((unsigned int *)t29);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t52 = (t46 & t45);
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = *((unsigned int *)t38);
    t53 = (t49 & t48);
    t50 = (~(t52));
    t51 = (~(t53));
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);

LAB36:    t14 = (t14 + 1);
    goto LAB37;

LAB35:    goto LAB36;

LAB38:    t16 = (t14 * 8);
    t11 = (t7 + t16);
    t12 = (t10 + t16);
    t17 = (t61 + t16);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    *((unsigned int *)t17) = t22;
    t23 = (t14 * 8);
    t24 = (t23 + 4);
    t18 = (t7 + t24);
    t26 = (t23 + 4);
    t19 = (t10 + t26);
    t28 = (t23 + 4);
    t25 = (t61 + t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t19);
    t32 = (t30 | t31);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t25);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB34;
    else
        goto LAB35;

LAB40:    xsi_set_current_line(170, ng0);

LAB43:    xsi_set_current_line(171, ng0);
    t9 = ((char*)((ng10)));
    t10 = (t0 + 4488);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB42;

LAB45:    t26 = *((unsigned int *)t62);
    t28 = *((unsigned int *)t10);
    *((unsigned int *)t62) = (t26 | t28);
    t11 = (t4 + 4);
    t12 = (t8 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t8);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t6 = (t31 & t33);
    t52 = (t35 & t37);
    t39 = (~(t6));
    t42 = (~(t52));
    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & t39);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t42);
    t46 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t46 & t39);
    t47 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t47 & t42);
    goto LAB47;

LAB48:    t58 = *((unsigned int *)t63);
    t59 = *((unsigned int *)t25);
    *((unsigned int *)t63) = (t58 | t59);
    t27 = (t62 + 4);
    t29 = (t18 + 4);
    t64 = *((unsigned int *)t27);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t53 = (t66 & t65);
    t67 = *((unsigned int *)t29);
    t68 = (~(t67));
    t69 = *((unsigned int *)t18);
    t70 = (t69 & t68);
    t71 = (~(t53));
    t72 = (~(t70));
    t73 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t73 & t71);
    t74 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t74 & t72);
    goto LAB50;

LAB51:    xsi_set_current_line(176, ng0);

LAB54:    xsi_set_current_line(177, ng0);
    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    t40 = (t0 + 1688U);
    t43 = *((char **)t40);
    xsi_vlog_unsigned_add(t13, 64, t41, 32, t43, 64);
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t13, 0, 0, 32);
    goto LAB53;

}

static void Always_180_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(180, ng0);

LAB5:    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Always_186_3(char *t0)
{
    char t14[16];
    char t15[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 6184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(186, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB25:    t5 = (t15 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t15) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB27;

LAB26:    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 1U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t12 = (t0 + 2488U);
    t13 = *((char **)t12);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t13);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t12 = (t15 + 4);
    t28 = (t13 + 4);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB28;

LAB29:
LAB30:    t55 = (t24 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t24);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB20:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(188, ng0);

LAB9:    xsi_set_current_line(189, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1688U);
    t13 = *((char **)t11);
    xsi_vlog_unsigned_add(t14, 64, t12, 32, t13, 64);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(191, ng0);

LAB13:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 64, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(195, ng0);

LAB17:    xsi_set_current_line(196, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 64, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB16;

LAB18:    xsi_set_current_line(203, ng0);

LAB21:    xsi_set_current_line(204, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 64, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB20;

LAB22:    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB27:    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t15) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB26;

LAB28:    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t24) = (t35 | t36);
    t37 = (t15 + 4);
    t38 = (t13 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t53 & t49);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    goto LAB30;

LAB31:    xsi_set_current_line(213, ng0);

LAB34:    xsi_set_current_line(214, ng0);
    t61 = (t0 + 1368U);
    t62 = *((char **)t61);
    t61 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t61, t62, 0, 0, 64, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 5);
    goto LAB33;

}


extern void work_m_00000000001322208174_2272257048_init()
{
	static char *pe[] = {(void *)Initial_152_0,(void *)Always_160_1,(void *)Always_180_2,(void *)Always_186_3};
	xsi_register_didat("work_m_00000000001322208174_2272257048", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000001322208174_2272257048.didat");
	xsi_register_executes(pe);
}
