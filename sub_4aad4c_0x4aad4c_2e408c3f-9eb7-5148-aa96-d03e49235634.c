// ============================================================
// 函数名称: sub_4aad4c
// 虚拟地址: 0x4aad4c
// WARP GUID: 2e408c3f-9eb7-5148-aa96-d03e49235634
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a33f0, sub_403430, sub_403420, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aad4c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    
    if (arg1[0x18] != 0)
        sub_40cc98(&arg1[0x18])
    
    sub_40cc98(&arg1[0x19])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4a33f0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
