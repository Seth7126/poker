// ============================================================
// 函数名称: sub_424c18
// 虚拟地址: 0x424c18
// WARP GUID: 6b9b263c-60a7-5fc5-bb83-153a855ff331
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_4030d0, sub_42da58
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424c18(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_4030d0(arg1[0x82])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_42da58(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
