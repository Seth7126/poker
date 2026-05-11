// ============================================================
// 函数名称: sub_461760
// 虚拟地址: 0x461760
// WARP GUID: 32c65307-ac86-5717-ac6d-0643ee1c491e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_461850
// ============================================================

int32_t* __convention("regparm")sub_461760(int32_t* arg1)
{
    // 第一条实际指令: sub_461314(arg1, 0xee)
    sub_461314(arg1, 0xee)
    sub_461334(arg1, 0xe)
    sub_4612e4(arg1, 0x41)
    sub_4612e4(arg1, 0x64)
    sub_4612e4(arg1, 0x6f)
    sub_4612e4(arg1, 0x62)
    sub_4612e4(arg1, 0x65)
    sub_461334(arg1, 0x64)
    sub_461334(arg1, 0)
    sub_461334(arg1, 0)
    int32_t ecx = arg1[0xe]
    
    if (ecx == 3)
        return sub_4612e4(arg1, 1)
    
    if (ecx == 5)
        return sub_4612e4(arg1, 2)
    
    return sub_4612e4(arg1, 0)
}
