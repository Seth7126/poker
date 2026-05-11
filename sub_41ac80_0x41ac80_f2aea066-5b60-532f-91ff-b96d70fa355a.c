// ============================================================
// 函数名称: sub_41ac80
// 虚拟地址: 0x41ac80
// WARP GUID: f2aea066-5b60-532f-91ff-b96d70fa355a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41ca88, sub_41c508
// ============================================================

int32_t __convention("regparm")sub_41ac80(int16_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    for (int16_t* i = arg1; i s< &arg1[0xa]; i = &i[1])
        result.w ^= *i
    
    return result
}
