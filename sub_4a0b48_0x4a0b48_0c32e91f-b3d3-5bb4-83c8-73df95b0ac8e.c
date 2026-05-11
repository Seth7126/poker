// ============================================================
// 函数名称: sub_4a0b48
// 虚拟地址: 0x4a0b48
// WARP GUID: 0c32e91f-b3d3-5bb4-83c8-73df95b0ac8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_410af0, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a0b48(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_40cc98(&arg1[4])
    sub_40cc98(&arg1[3])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_410af0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
