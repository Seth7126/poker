// ============================================================
// 函数名称: sub_460dc8
// 虚拟地址: 0x460dc8
// WARP GUID: 223fce1e-f7b5-511b-98a9-f91ae2fc5e0e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461234, sub_461068
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_t __convention("regparm")sub_460dc8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[4] != 0x64)
    if (arg1[4] != 0x64)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (arg2 != 0)
        sub_461068(arg1, 0)
    
    (*(*arg1 + 0x10))()
    (*(arg1[5] + 8))()
    sub_461234(arg1)
    (**(arg1 + 0x141))()
    *(arg1 + 0xd5) = 0
    int32_t result = 0x66
    
    if (arg1[0x2a] == 0)
        result = 0x65
    
    arg1[4] = result
    return result
}
