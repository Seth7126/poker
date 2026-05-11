// ============================================================
// 函数名称: sub_40db54
// 虚拟地址: 0x40db54
// WARP GUID: 5099496d-4235-53e6-86b2-c85c884b086b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40db54(int32_t* arg1, char* arg2, char* arg3, void* arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    char temp1 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += arg1:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp1 + arg1:1.b u< temp1)
    char temp2 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += arg1:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp2 + arg1:1.b u< temp2)
    char temp3 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += arg1:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp3 + arg1:1.b u< temp3)
    char temp4 = *(arg1 - 0x23ffff01)
    *(arg1 - 0x23ffff01) += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp4 + arg3:1.b u< temp4)
    char temp5 = arg3[0xdc0000ff]
    arg3[0xdc0000ff] += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp5 + arg3:1.b u< temp5)
    char temp6 = arg2[0xdc0000ff]
    arg2[0xdc0000ff] += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp6 + arg3:1.b u< temp6)
    char temp7 = entry_ebx[0xdc0000ff]
    entry_ebx[0xdc0000ff] += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp7 + arg3:1.b u< temp7)
    *(arg6 * 9 + 0x14dc0000) += arg3:1.b
    char* var_4 = entry_ebx
    char temp8 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp8 + arg3:1.b u< temp8)
    char temp9 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp9 + arg3:1.b u< temp9)
    char temp10 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += arg3:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp10 + arg3:1.b u< temp10)
    char temp11 = *(arg1 - 0x23ffff01)
    *(arg1 - 0x23ffff01) += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp11 + arg2.b u< temp11)
    char temp12 = arg3[0xdc0000ff]
    arg3[0xdc0000ff] += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp12 + arg2.b u< temp12)
    char temp13 = arg2[0xdc0000ff]
    arg2[0xdc0000ff] += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp13 + arg2.b u< temp13)
    char temp14 = entry_ebx[0xdc0000ff]
    entry_ebx[0xdc0000ff] += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp14 + arg2.b u< temp14)
    *(arg6 * 9 + 0x14dc0000) += arg2.b
    char* var_8 = entry_ebx
    char temp15 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp15 + arg2.b u< temp15)
    char temp16 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp16 + arg2.b u< temp16)
    char temp17 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += arg2.b
    arg1.b = adc.b(arg1.b, 0x53, temp17 + arg2.b u< temp17)
    char temp18 = *(arg1 - 0x23ffff01)
    *(arg1 - 0x23ffff01) += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp18 + entry_ebx.b u< temp18)
    char temp19 = arg3[0xdc0000ff]
    arg3[0xdc0000ff] += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp19 + entry_ebx.b u< temp19)
    char temp20 = arg2[0xdc0000ff]
    arg2[0xdc0000ff] += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp20 + entry_ebx.b u< temp20)
    char temp21 = entry_ebx[0xdc0000ff]
    entry_ebx[0xdc0000ff] += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp21 + entry_ebx.b u< temp21)
    *(arg6 * 9 + 0x14dc0000) += entry_ebx.b
    char* var_c = entry_ebx
    char temp22 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp22 + entry_ebx.b u< temp22)
    char temp23 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp23 + entry_ebx.b u< temp23)
    char temp24 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp24 + entry_ebx.b u< temp24)
    char temp25 = *(arg1 - 0x23ffff01)
    *(arg1 - 0x23ffff01) += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp25 + arg1.b u< temp25)
    char temp26 = arg3[0xdc0000ff]
    arg3[0xdc0000ff] += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp26 + arg1.b u< temp26)
    char temp27 = arg2[0xdc0000ff]
    arg2[0xdc0000ff] += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp27 + arg1.b u< temp27)
    char temp28 = entry_ebx[0xdc0000ff]
    entry_ebx[0xdc0000ff] += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp28 + arg1.b u< temp28)
    *(arg6 * 9 + 0x14dc0000) += arg1.b
    char* var_10 = entry_ebx
    char temp29 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp29 + arg1.b u< temp29)
    char temp30 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp30 + arg1.b u< temp30)
    char temp31 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += arg1.b
    arg1.b = adc.b(arg1.b, 0x53, temp31 + arg1.b u< temp31)
    char temp32 = *(arg1 - 0x23ffff01)
    *(arg1 - 0x23ffff01) += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp32 + arg3.b u< temp32)
    char temp33 = arg3[0xdc0000ff]
    arg3[0xdc0000ff] += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp33 + arg3.b u< temp33)
    char temp34 = arg2[0xdc0000ff]
    arg2[0xdc0000ff] += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp34 + arg3.b u< temp34)
    char temp35 = entry_ebx[0xdc0000ff]
    entry_ebx[0xdc0000ff] += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp35 + arg3.b u< temp35)
    *(arg6 * 9 + 0x14dc0000) += arg3.b
    char* var_14 = entry_ebx
    char temp36 = *(arg4 - 0x23ffff01)
    *(arg4 - 0x23ffff01) += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp36 + arg3.b u< temp36)
    char temp37 = arg5[0xdc0000ff]
    arg5[0xdc0000ff] += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp37 + arg3.b u< temp37)
    char temp38 = arg6[0xdc0000ff]
    arg6[0xdc0000ff] += arg3.b
    arg1.b = adc.b(arg1.b, 0x53, temp38 + arg3.b u< temp38)
    *(arg1 - 1) += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg2:1.b
    char temp39 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp39 + entry_ebx.b u< temp39)
    *(arg4 - 1) += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += entry_ebx:1.b
    char temp40 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp40 + entry_ebx.b u< temp40)
    *(arg4 - 1) += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg1:1.b
    char temp41 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp41 + entry_ebx.b u< temp41)
    *(arg4 - 1) += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg1:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg3:1.b
    char temp42 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp42 + entry_ebx.b u< temp42)
    *(arg4 - 1) += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg2.b
    char temp43 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp43 + entry_ebx.b u< temp43)
    *(arg4 - 1) += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg2.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += entry_ebx.b
    char temp44 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp44 + entry_ebx.b u< temp44)
    *(arg4 - 1) += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += entry_ebx.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg1.b
    char temp45 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp45 + entry_ebx.b u< temp45)
    *(arg4 - 1) += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg1 - 1) += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3[0xffffffff] += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg2[0xffffffff] += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    entry_ebx[0xffffffff] += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg6 * 9) += arg3.b
    char temp46 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp46 + entry_ebx.b u< temp46)
    *(arg4 - 1) += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg5[0xffffffff] += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg6[0xffffffff] += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *arg1 += arg2:1.b
    *arg1 += 1
    char temp47 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp47 + entry_ebx.b u< temp47)
    *arg3 += arg2:1.b
    *arg1 += 1
    char temp48 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp48 + entry_ebx.b u< temp48)
    *arg2 += arg2:1.b
    *arg1 += 1
    char temp49 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp49 + entry_ebx.b u< temp49)
    *entry_ebx += arg2:1.b
    *arg1 += 1
    char temp50 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp50 + entry_ebx.b u< temp50)
    *(arg6 * 9) += arg2:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    char temp51 = *0xdc0000ff
    *0xdc0000ff += arg2:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp51 + arg2:1.b u< temp51)
    *arg5 += arg2:1.b
    *arg1 += 1
    char temp52 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp52 + entry_ebx.b u< temp52)
    *arg6 += arg2:1.b
    *arg1 += 1
    char temp53 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp53 + entry_ebx.b u< temp53)
    *arg1 += entry_ebx:1.b
    *arg1 += 1
    char temp54 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp54 + entry_ebx.b u< temp54)
    *arg3 += entry_ebx:1.b
    *arg1 += 1
    char temp55 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp55 + entry_ebx.b u< temp55)
    *arg2 += entry_ebx:1.b
    *arg1 += 1
    char temp56 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp56 + entry_ebx.b u< temp56)
    *entry_ebx += entry_ebx:1.b
    *arg1 += 1
    char temp57 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp57 + entry_ebx.b u< temp57)
    *(arg6 * 9) += entry_ebx:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    char temp58 = *0xdc0000ff
    *0xdc0000ff += entry_ebx:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp58 + entry_ebx:1.b u< temp58)
    *arg5 += entry_ebx:1.b
    *arg1 += 1
    char temp59 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp59 + entry_ebx.b u< temp59)
    *arg6 += entry_ebx:1.b
    *arg1 += 1
    char temp60 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp60 + entry_ebx.b u< temp60)
    *arg1 += arg1:1.b
    *arg1 += 1
    char temp61 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp61 + entry_ebx.b u< temp61)
    *arg3 += arg1:1.b
    *arg1 += 1
    char temp62 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp62 + entry_ebx.b u< temp62)
    *arg2 += arg1:1.b
    *arg1 += 1
    char temp63 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp63 + entry_ebx.b u< temp63)
    *entry_ebx += arg1:1.b
    *arg1 += 1
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* var_18 = arg4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_531610 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
