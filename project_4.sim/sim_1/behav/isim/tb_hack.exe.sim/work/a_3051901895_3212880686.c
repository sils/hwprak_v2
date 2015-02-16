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
static const char *ng0 = "//nap.rz.tu-harburg.de/fs1$/18/sims1301/windows/Xilinx/project_4/project_4.srcs/sources_1/new/ProgramCounter.vhd";
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

LAB0:    xsi_set_current_line(24, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3840);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3051901895_3212880686_p_1(char *t0)
{
    char t52[16];
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
    unsigned char t11;
    unsigned char t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1632U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 3856);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 4000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t13 = (0 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t5 + t16);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB17;

LAB18:    t12 = (unsigned char)0;

LAB19:    if (t12 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t21 = (1 - 2);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t8 = (t9 + t24);
    t25 = *((unsigned char *)t8);
    t26 = (t25 == (unsigned char)3);
    if (t26 == 1)
        goto LAB20;

LAB21:    t20 = (unsigned char)0;

LAB22:    t11 = t20;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t30 = (t0 + 1352U);
    t31 = *((char **)t30);
    t32 = (2 - 2);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t30 = (t31 + t35);
    t36 = *((unsigned char *)t30);
    t37 = (t36 == (unsigned char)3);
    if (t37 == 1)
        goto LAB23;

LAB24:    t29 = (unsigned char)0;

LAB25:    t4 = t29;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6780U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t52, t2, t1, 1);
    t6 = (t0 + 4000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast(t6);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(34, ng0);
    t41 = (t0 + 1032U);
    t42 = *((char **)t41);
    t43 = (16 - 1);
    t44 = (15 - t43);
    t45 = (t44 * 1U);
    t46 = (0 + t45);
    t41 = (t42 + t46);
    t47 = (t0 + 4000);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t41, 16U);
    xsi_driver_first_trans_fast(t47);
    goto LAB9;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    t11 = (unsigned char)1;
    goto LAB16;

LAB17:    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 6732U);
    t19 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t7, t6, 0);
    t12 = t19;
    goto LAB19;

LAB20:    t10 = (t0 + 1192U);
    t27 = *((char **)t10);
    t10 = (t0 + 6732U);
    t28 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t27, t10, 0);
    t20 = t28;
    goto LAB22;

LAB23:    t38 = (t0 + 1192U);
    t39 = *((char **)t38);
    t38 = (t0 + 6732U);
    t40 = ieee_p_1242562249_sub_2479290730_1035706684(IEEE_P_1242562249, t39, t38, 0);
    t29 = t40;
    goto LAB25;

}


extern void work_a_3051901895_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3051901895_3212880686_p_0,(void *)work_a_3051901895_3212880686_p_1};
	xsi_register_didat("work_a_3051901895_3212880686", "isim/tb_hack.exe.sim/work/a_3051901895_3212880686.didat");
	xsi_register_executes(pe);
}
