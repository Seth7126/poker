// ============================================================
// 函数名称: sub_446c48
// 虚拟地址: 0x446c48
// WARP GUID: a0817d43-8d2a-52e0-a843-32b747da40c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_442958, sub_42e838, sub_42e7fc
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_446c48(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t edi_1 = sub_42e838(arg1) - 1
    
    if (edi_1 s>= 0)
        int32_t i_1 = edi_1 + 1
        int32_t ebp_1 = 0
        int32_t i
        
        do
            (*(*arg1 + 0x40))()
            ebx.w = 0xffd1
            void var_20
            sub_4032ac(sub_42e7fc(arg1, ebp_1), arg1, &var_20)
            ebp_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return sub_442958(arg1)
}
