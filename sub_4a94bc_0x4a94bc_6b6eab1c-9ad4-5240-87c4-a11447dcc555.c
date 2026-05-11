// ============================================================
// 函数名称: sub_4a94bc
// 虚拟地址: 0x4a94bc
// WARP GUID: 6b6eab1c-9ad4-5240-87c4-a11447dcc555
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_4a5584, sub_40cc98
// [被调用的父级函数]: sub_4aafc4
// ============================================================

int32_t __convention("regparm")sub_4a94bc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    void* eax = arg1[0x1c]
    
    if (eax != 0 && *(eax + 4) == 0)
        sub_40cc98(&arg1[0x1c])
    
    sub_40cc98(&arg1[0x1a])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4a5584(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
