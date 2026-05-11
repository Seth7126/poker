// ============================================================
// 函数名称: sub_41f590
// 虚拟地址: 0x41f590
// WARP GUID: 25d170db-266a-516d-9406-bc9ca97e12b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_410af0, sub_41d044
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f590(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_41d044(arg1[8])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_410af0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
