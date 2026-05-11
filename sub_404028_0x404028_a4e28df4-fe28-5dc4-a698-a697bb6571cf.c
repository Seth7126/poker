// ============================================================
// 函数名称: sub_404028
// 虚拟地址: 0x404028
// WARP GUID: a4e28df4-fe28-5dc4-a698-a697bb6571cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0
// [被调用的父级函数]: sub_409050, sub_447f54, sub_439204, sub_40bcec, sub_4473f4, sub_4028f0, sub_40b90c, sub_49574c, sub_40a218, sub_43d1a0, sub_447f44, sub_40a384, sub_466adc, sub_419e90
// ============================================================

int32_t __convention("regparm")sub_404028(char** arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    char* edi = arg2
    bool cond:1 = false
    
    while (arg3 != 0)
        char temp0_1 = *edi
        cond:1 = 0 != temp0_1
        edi = &edi[1]
        arg3 -= 1
        
        if (0 == temp0_1)
            break
    
    if (not(cond:1))
        arg3 = not.d(arg3)
    
    return sub_403ee0(arg1, arg2, arg3 + var_c) __tailcall
}
