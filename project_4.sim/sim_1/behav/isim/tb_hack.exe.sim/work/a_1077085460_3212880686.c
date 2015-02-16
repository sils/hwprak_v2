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
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
static const char *ng2 = "//nap.rz.tu-harburg.de/fs1$/18/sims1301/windows/Xilinx/project_4/project_4.srcs/sources_1/new/BRAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_1077085460_3212880686_sub_2772016641_3057020925(char *t1, char *t2, char *t3)
{
    char t4[208];
    char t5[24];
    char t17[32];
    char t26[16384];
    char t42[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    int t43;
    int t44;
    unsigned int t45;

LAB0:    t6 = ((STD_TEXTIO) + 3440);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 12U);
    t12 = ((STD_TEXTIO) + 3280);
    t13 = (t11 + 56U);
    *((char **)t13) = t12;
    t14 = (t11 + 40U);
    *((char **)t14) = 0;
    t15 = (t11 + 64U);
    *((int *)t15) = 1;
    t16 = (t11 + 48U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 1023;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (1023 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 15;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 15);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 84U);
    t24 = (t1 + 4344);
    t25 = (t22 + 88U);
    *((char **)t25) = t24;
    t27 = (t22 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 64U);
    t29 = (t24 + 80U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 80U);
    *((unsigned int *)t31) = 16384U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 12U);
    *((char **)t34) = t3;
    t35 = 0;
    t36 = 1023;

LAB4:    if (t35 <= t36)
        goto LAB5;

LAB7:    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t33 = (16384U != 16384U);
    if (t33 == 1)
        goto LAB9;

LAB10:    t0 = xsi_get_transient_memory(16384U);
    memcpy(t0, t7, 16384U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t37 = (t4 + 4U);
    t38 = *((char **)t37);
    std_textio_readline(STD_TEXTIO, (char *)0, t38, t11);
    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t20 = (t35 - 0);
    t8 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 1023, 1, t35);
    t23 = (16 - 1);
    t39 = (0 - t23);
    t21 = (t39 * -1);
    t21 = (t21 + 1);
    t21 = (t21 * 1U);
    t40 = (t21 * t8);
    t41 = (0 + t40);
    t6 = (t7 + t41);
    t43 = (16 - 1);
    t9 = (t42 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = t43;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t44 = (0 - t43);
    t45 = (t44 * -1);
    t45 = (t45 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t45;
    std_textio_read4(STD_TEXTIO, (char *)0, t11, t6, t42);

LAB6:    if (t35 == t36)
        goto LAB7;

LAB8:    t20 = (t35 + 1);
    t35 = t20;
    goto LAB4;

LAB9:    xsi_size_not_matching(16384U, 16384U, 0);
    goto LAB10;

LAB11:;
}

static void work_a_1077085460_3212880686_p_0(char *t0)
{
    char t7[16];
    char t25[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t26;

LAB0:    xsi_set_current_line(51, ng2);
    if ((unsigned char)0 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(59, ng2);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB3:    t1 = (t0 + 3816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng2);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(53, ng2);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(56, ng2);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 7104U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t16 = (t15 - 0);
    t11 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 1023, 1, t15);
    t17 = (16U * t11);
    t18 = (0 + t17);
    t8 = (t3 + t18);
    t9 = (t25 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t26 = (0 - 15);
    t19 = (t26 * -1);
    t19 = (t19 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t19;
    t10 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t8, t25);
    t13 = (t7 + 12U);
    t19 = *((unsigned int *)t13);
    t19 = (t19 * 1U);
    t2 = (16U != t19);
    if (t2 == 1)
        goto LAB13;

LAB14:    t14 = (t0 + 3960);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB6;

LAB8:    xsi_set_current_line(54, ng2);
    t3 = (t0 + 1512U);
    t8 = *((char **)t3);
    t3 = (t0 + 7120U);
    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t7, t8, t3, (unsigned char)0);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (16U != t11);
    if (t12 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t13 = (t0 + 7104U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t14, t13);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (16U * t17);
    t19 = (0U + t18);
    t20 = (t0 + 3896);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 16U);
    xsi_driver_first_trans_delta(t20, t19, 16U, 0LL);
    goto LAB9;

LAB11:    xsi_size_not_matching(16U, t11, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(16U, t19, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(60, ng2);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(63, ng2);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 7104U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t16 = (t15 - 0);
    t11 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 1023, 1, t15);
    t17 = (16U * t11);
    t18 = (0 + t17);
    t8 = (t3 + t18);
    t9 = (t25 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t26 = (0 - 15);
    t19 = (t26 * -1);
    t19 = (t19 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t19;
    t10 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t8, t25);
    t13 = (t7 + 12U);
    t19 = *((unsigned int *)t13);
    t19 = (t19 * 1U);
    t2 = (16U != t19);
    if (t2 == 1)
        goto LAB23;

LAB24:    t14 = (t0 + 3960);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB16;

LAB18:    xsi_set_current_line(61, ng2);
    t3 = (t0 + 1512U);
    t8 = *((char **)t3);
    t3 = (t0 + 7120U);
    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t7, t8, t3, (unsigned char)0);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (16U != t11);
    if (t12 == 1)
        goto LAB21;

LAB22:    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t13 = (t0 + 7104U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t14, t13);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (16U * t17);
    t19 = (0U + t18);
    t20 = (t0 + 3896);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 16U);
    xsi_driver_first_trans_delta(t20, t19, 16U, 0LL);
    goto LAB19;

LAB21:    xsi_size_not_matching(16U, t11, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t19, 0);
    goto LAB24;

}


extern void work_a_1077085460_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1077085460_3212880686_p_0};
	static char *se[] = {(void *)work_a_1077085460_3212880686_sub_2772016641_3057020925};
	xsi_register_didat("work_a_1077085460_3212880686", "isim/tb_hack.exe.sim/work/a_1077085460_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
