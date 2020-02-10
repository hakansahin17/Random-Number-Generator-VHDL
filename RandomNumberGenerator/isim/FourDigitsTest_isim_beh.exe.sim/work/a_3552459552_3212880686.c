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
static const char *ng0 = "C:/Users/Utkan/LabProject/FourDigits.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3552459552_3212880686_p_0(char *t0)
{
    char t21[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 3112U);
    t4 = *((char **)t3);
    t3 = (t0 + 3408U);
    t5 = *((char **)t3);
    t6 = xsi_mem_cmp(t5, t4, 3U);
    if (t6 == 1)
        goto LAB6;

LAB13:    t3 = (t0 + 3528U);
    t7 = *((char **)t3);
    t8 = xsi_mem_cmp(t7, t4, 3U);
    if (t8 == 1)
        goto LAB7;

LAB14:    t3 = (t0 + 3648U);
    t9 = *((char **)t3);
    t10 = xsi_mem_cmp(t9, t4, 3U);
    if (t10 == 1)
        goto LAB8;

LAB15:    t3 = (t0 + 3768U);
    t11 = *((char **)t3);
    t12 = xsi_mem_cmp(t11, t4, 3U);
    if (t12 == 1)
        goto LAB9;

LAB16:    t3 = (t0 + 3888U);
    t13 = *((char **)t3);
    t14 = xsi_mem_cmp(t13, t4, 3U);
    if (t14 == 1)
        goto LAB10;

LAB17:    t3 = (t0 + 4008U);
    t15 = *((char **)t3);
    t16 = xsi_mem_cmp(t15, t4, 3U);
    if (t16 == 1)
        goto LAB11;

LAB18:
LAB12:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3408U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 5392);
    t17 = (t3 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 5456);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 13U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 5584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t1, 999);
    if (t2 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t3, t1, 1000);
    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB5;

LAB8:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t1, 99);
    if (t2 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t3, t1, 100);
    if (t2 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3648U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB5;

LAB9:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t1, 9);
    if (t2 != 0)
        goto LAB36;

LAB38:
LAB37:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t3, t1, 10);
    if (t2 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3768U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB5;

LAB10:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t1, 0);
    if (t2 != 0)
        goto LAB44;

LAB46:
LAB45:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t2 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t1, 0);
    if (t2 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB50:    goto LAB5;

LAB11:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, t6, 4);
    t4 = (t21 + 12U);
    t22 = *((unsigned int *)t4);
    t22 = (t22 * 1U);
    t2 = (4U != t22);
    if (t2 == 1)
        goto LAB52;

LAB53:    t5 = (t0 + 5840);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, t6, 4);
    t4 = (t21 + 12U);
    t22 = *((unsigned int *)t4);
    t22 = (t22 * 1U);
    t2 = (4U != t22);
    if (t2 == 1)
        goto LAB54;

LAB55:    t5 = (t0 + 5904);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, t6, 4);
    t4 = (t21 + 12U);
    t22 = *((unsigned int *)t4);
    t22 = (t22 * 1U);
    t2 = (4U != t22);
    if (t2 == 1)
        goto LAB56;

LAB57:    t5 = (t0 + 5968);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, t6, 4);
    t4 = (t21 + 12U);
    t22 = *((unsigned int *)t4);
    t22 = (t22 * 1U);
    t2 = (4U != t22);
    if (t2 == 1)
        goto LAB58;

LAB59:    t5 = (t0 + 6032);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t24 = (t2 == (unsigned char)3);
    if (t24 != 0)
        goto LAB60;

LAB62:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB61:    goto LAB5;

LAB19:;
LAB20:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t8 = (t6 + 1);
    t4 = (t0 + 5520);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t3, t1, 1000);
    t5 = (t21 + 12U);
    t22 = *((unsigned int *)t5);
    t23 = (1U * t22);
    t2 = (13U != t23);
    if (t2 == 1)
        goto LAB23;

LAB24:    t7 = (t0 + 5456);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 13U);
    xsi_driver_first_trans_fast(t7);
    goto LAB21;

LAB23:    xsi_size_not_matching(13U, t23, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3648U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t5, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB26;

LAB28:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t8 = (t6 + 1);
    t4 = (t0 + 5584);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t3, t1, 100);
    t5 = (t21 + 12U);
    t22 = *((unsigned int *)t5);
    t23 = (1U * t22);
    t2 = (13U != t23);
    if (t2 == 1)
        goto LAB31;

LAB32:    t7 = (t0 + 5456);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 13U);
    xsi_driver_first_trans_fast(t7);
    goto LAB29;

LAB31:    xsi_size_not_matching(13U, t23, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t5, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB34;

LAB36:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t8 = (t6 + 1);
    t4 = (t0 + 5648);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t3, t1, 10);
    t5 = (t21 + 12U);
    t22 = *((unsigned int *)t5);
    t23 = (1U * t22);
    t2 = (13U != t23);
    if (t2 == 1)
        goto LAB39;

LAB40:    t7 = (t0 + 5456);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 13U);
    xsi_driver_first_trans_fast(t7);
    goto LAB37;

LAB39:    xsi_size_not_matching(13U, t23, 0);
    goto LAB40;

LAB41:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 3888U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t5, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB42;

LAB44:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 2952U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t8 = (t6 + 1);
    t4 = (t0 + 5712);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8968U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t3, t1, 1);
    t5 = (t21 + 12U);
    t22 = *((unsigned int *)t5);
    t23 = (1U * t22);
    t2 = (13U != t23);
    if (t2 == 1)
        goto LAB47;

LAB48:    t7 = (t0 + 5456);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 13U);
    xsi_driver_first_trans_fast(t7);
    goto LAB45;

LAB47:    xsi_size_not_matching(13U, t23, 0);
    goto LAB48;

LAB49:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 4008U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t5, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB50;

LAB52:    xsi_size_not_matching(4U, t22, 0);
    goto LAB53;

LAB54:    xsi_size_not_matching(4U, t22, 0);
    goto LAB55;

LAB56:    xsi_size_not_matching(4U, t22, 0);
    goto LAB57;

LAB58:    xsi_size_not_matching(4U, t22, 0);
    goto LAB59;

LAB60:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t1 = (t0 + 5776);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

}


extern void work_a_3552459552_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3552459552_3212880686_p_0};
	xsi_register_didat("work_a_3552459552_3212880686", "isim/FourDigitsTest_isim_beh.exe.sim/work/a_3552459552_3212880686.didat");
	xsi_register_executes(pe);
}
