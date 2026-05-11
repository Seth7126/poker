// ============================================================
// 函数名称: sub_41ba60
// 虚拟地址: 0x41ba60
// WARP GUID: a34a7939-c2e2-5300-bb1d-7ebcabf87459
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_403248, sub_4032c4
// [被调用的父级函数]: sub_41badc, sub_41bac4
// ============================================================

int32_t __convention("regparm")sub_41ba60(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1[1]
    int32_t* esi = arg1[1]
    char result = sub_403248(esi, arg2)
    
    if (result != 0)
        return result
    
    sub_4030d0(esi)
    arg1[1] = 0
    int32_t edx_1
    edx_1.b = 1
    void* eax_3
    int32_t edx_2
    eax_3, edx_2 = (*(arg2 + 0xc))()
    arg1[1] = eax_3
    *(eax_3 + 0xc) = arg1
    edx_2.w = 0xfffd
    *(eax_3 + 8) = sub_4032c4(arg1, edx_2)
    *(eax_3 + 0x14) = arg1
    edx_2.w = 0xfffc
    *(eax_3 + 0x10) = sub_4032c4(arg1, edx_2)
    int32_t* ebx
    ebx.w = 0xfffd
    return sub_4032ac(arg1, arg1)
}
