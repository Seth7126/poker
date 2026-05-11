// ============================================================
// 函数名称: sub_425f10
// 虚拟地址: 0x425f10
// WARP GUID: 46e294d4-35a7-5e47-b671-ac2b2c654fe3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_42ec9c, sub_425af0, sub_425c9c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425f10(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t ecx
    int32_t edx_1
    eax_1, edx_1, ecx = (*(*arg1[0x7c] + 0x14))()
    
    if (eax_1 s> 0)
        edx_1.b = 1
        int32_t* eax_3 = sub_4030a0(ecx, edx_1)
        arg1[0x84] = eax_3
        arg1[0x7c]
        (*(*eax_3 + 8))()
        arg1[0x85] = sub_425c9c(arg1)
        arg1[0x86] = sub_425af0(arg1)
    
    return sub_42ec9c(arg1)
}
