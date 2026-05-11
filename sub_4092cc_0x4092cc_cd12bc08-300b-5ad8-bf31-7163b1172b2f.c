// ============================================================
// 函数名称: sub_4092cc
// 虚拟地址: 0x4092cc
// WARP GUID: cd12bc08-300b-5ad8-bf31-7163b1172b2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4091b0, sub_403df8, sub_404280
// [被调用的父级函数]: sub_52c7c8, sub_4b498a, sub_41c688
// ============================================================

char** __convention("regparm")sub_4092cc(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t eax = sub_4091b0(sub_40930b+5, arg1)
    int32_t eax = sub_4091b0(sub_40930b+5, arg1)
    
    if (eax s> 0 && *(arg1 + eax - 1) == 0x2e)
        return sub_404280(0x7fffffff, eax, arg1, arg2)
    
    sub_403df8(arg2)
    return arg2
}
