// ============================================================
// 函数名称: sub_4422f4
// 虚拟地址: 0x4422f4
// WARP GUID: 30b5924b-82e8-5fbb-b85b-3605b3ff10dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bcc, sub_441dc4, sub_441068
// [被调用的父级函数]: sub_44228c
// ============================================================

int32_tsub_4422f4(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: char result = sub_431bcc(arg1[-1])
    char result = sub_431bcc(arg1[-1])
    
    if (result != 0)
        sub_441068(*(arg1[-1] + 0x1f0))
        result, arg1 = sub_441dc4(arg1[-1])
    
    *arg1
    return result
}
