// ============================================================
// 函数名称: sub_5082a0
// 虚拟地址: 0x5082a0
// WARP GUID: 7b355461-9ddb-5297-8482-012c964d865a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_4973e0, sub_4030d0
// [被调用的父级函数]: sub_508730
// ============================================================

int32_t __convention("regparm")sub_5082a0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[1]
    sub_4973e0()
    int32_t result = sub_4030d0(arg1[1])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
