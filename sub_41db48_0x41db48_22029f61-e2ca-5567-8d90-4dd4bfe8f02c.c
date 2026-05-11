// ============================================================
// 函数名称: sub_41db48
// 虚拟地址: 0x41db48
// WARP GUID: 22029f61-e2ca-5567-8d90-4dd4bfe8f02c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_41d044, sub_403430, sub_410af0, sub_41e2e0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41db48(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_41e2e0(arg1)
    sub_41d044(arg1[8])
    sub_4030d0(arg1[9])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_410af0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
