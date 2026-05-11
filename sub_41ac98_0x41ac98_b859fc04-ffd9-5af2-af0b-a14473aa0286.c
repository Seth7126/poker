// ============================================================
// 函数名称: sub_41ac98
// 虚拟地址: 0x41ac98
// WARP GUID: b859fc04-ffd9-5af2-af0b-a14473aa0286
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_419e18, sub_41a0c8, sub_402d00
// [被调用的父级函数]: sub_41ad7c, sub_41ade8
// ============================================================

int32_t __convention("regparm")sub_41ac98(HGDIOBJ arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_48 = 0
    int32_t var_48 = 0
    void pv
    int32_t eax
    int32_t edx
    eax, edx = GetObjectA(arg1, 0x54, &pv)
    
    if (eax == 0)
        sub_419e18()
        noreturn
    
    if (eax s< 0x40 || var_48 u< 0x28)
        sub_402d00(arg2, 0x28, 0)
        *arg2 = 0x28
        int32_t var_5c
        arg2[1] = var_5c
        int32_t var_58
        arg2[2] = var_58
    else
        __builtin_memcpy(arg2, &var_48, 0x28)
    
    if (arg3 == 2)
        *(arg2 + 0xe) = 1
    else if (arg3 - 3 u< 0xe)
        *(arg2 + 0xe) = 4
        arg2[8] = arg3
    else if (arg3 - 0x11 u< 0xf0)
        *(arg2 + 0xe) = 8
        arg2[8] = arg3
    else
        int16_t var_50
        int16_t var_4e
        int16_t temp3_1
        int16_t temp4_1
        temp3_1:temp4_1 = muls.dp.w(var_4e, var_50)
        edx.w = temp3_1
        *(arg2 + 0xe) = temp4_1
    
    arg2[3].w = 1
    int32_t result = arg2[8]
    
    if (result u< arg2[9])
        arg2[9] = result
    
    if (arg2[5] == 0)
        int32_t eax_10 = sub_41a0c8(arg2[1], zx.d(*(arg2 + 0xe)), 0x20)
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = sx.q(arg2[2])
        result = (eax_12 ^ edx_2) - edx_2
        arg2[5] = eax_10 * result
    
    return result
}
