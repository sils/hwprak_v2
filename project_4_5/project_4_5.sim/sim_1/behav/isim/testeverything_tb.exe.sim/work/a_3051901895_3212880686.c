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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//nap.rz.tu-harburg.de/fs1$/18/sims1301/windows/Xilinx/project_4/project_4_5/project_4_5.srcs/sources_1/imports/new/ProgramCounter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2479218856_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2479254793_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2479290730_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3051901895_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(25, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4248);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3051901895_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (15 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4424);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 4264);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3051901895_3212880686_p_2(char *t0)
{
    char t61[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1632U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 4280);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 4488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = (16 - 1);
    t12 = (t11 - 15);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t5 + t15);
    t4 = *((unsigned char *)t2);
    t16 = (t4 == (unsigned char)3);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7828U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t61, t2, t1, 1);
    t6 = (t0 + 4488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast(t6);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(34, ng0);
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t20 = (2 - 2);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t6 = (t7 + t23);
    t24 = *((unsigned char *)t6);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB20;

LAB21:    t19 = (unsigned char)0;

LAB22:    if (t19 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 2152U);
    t28 = *((char **)t10);
    t29 = (1 - 2);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t10 = (t28 + t32);
    t33 = *((unsigned char *)t10);
    t34 = (t33 == (unsigned char)3);
    if (t34 == 1)
        goto LAB23;

LAB24:    t27 = (unsigned char)0;

LAB25:    t18 = t27;

LAB19:    if (t18 == 1)
        goto LAB14;

LAB15:    t39 = (t0 + 2152U);
    t40 = *((char **)t39);
    t41 = (0 - 2);
    t42 = (t41 * -1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t39 = (t40 + t44);
    t45 = *((unsigned char *)t39);
    t46 = (t45 == (unsigned char)3);
    if (t46 == 1)
        goto LAB26;

LAB27:    t38 = (unsigned char)0;

LAB28:    t17 = t38;

LAB16:    if (t17 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7828U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t61, t2, t1, 1);
    t6 = (t0 + 4488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast(t6);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(35, ng0);
    t50 = (t0 + 1032U);
    t51 = *((char **)t50);
    t52 = (16 - 1);
    t53 = (15 - t52);
    t54 = (t53 * 1U);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = (t0 + 4488);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t50, 16U);
    xsi_driver_first_trans_fast(t56);
    goto LAB12;

LAB14:    t17 = (unsigned char)1;
    goto LAB16;

LAB17:    t18 = (unsigned char)1;
    goto LAB19;

LAB20:    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 7780U);
    t26 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t9, t8, 0);
    t19 = t26;
    goto LAB22;

LAB23:    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t35 = (t0 + 7780U);
    t37 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t36, t35, 0);
    t27 = t37;
    goto LAB25;

LAB26:    t47 = (t0 + 1192U);
    t48 = *((char **)t47);
    t47 = (t0 + 7780U);
    t49 = ieee_p_1242562249_sub_2479290730_1035706684(IEEE_P_1242562249, t48, t47, 0);
    t38 = t49;
    goto LAB28;

}


extern void work_a_3051901895_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3051901895_3212880686_p_0,(void *)work_a_3051901895_3212880686_p_1,(void *)work_a_3051901895_3212880686_p_2};
	xsi_register_didat("work_a_3051901895_3212880686", "isim/testeverything_tb.exe.sim/work/a_3051901895_3212880686.didat");
	xsi_register_executes(pe);
}
