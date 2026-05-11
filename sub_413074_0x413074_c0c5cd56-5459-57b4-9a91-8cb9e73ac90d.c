// ============================================================
// 函数名称: sub_413074
// 虚拟地址: 0x413074
// WARP GUID: c0c5cd56-5459-57b4-9a91-8cb9e73ac90d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_40276c
// [被调用的父级函数]: sub_413630
// ============================================================

int32_t __convention("regparm")sub_413074(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t result = arg1[2]
    
    if (result != 0)
        arg1[3]
        result = sub_40276c(result)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
