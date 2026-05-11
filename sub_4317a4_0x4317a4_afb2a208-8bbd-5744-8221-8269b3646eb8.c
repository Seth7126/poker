// ============================================================
// 函数名称: sub_4317a4
// 虚拟地址: 0x4317a4
// WARP GUID: afb2a208-8bbd-5744-8221-8269b3646eb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: UpdateWindow
// [内部子函数调用]: sub_431bcc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4317a4(void* arg1)
{
    // 第一条实际指令: char result = sub_431bcc(arg1)
    char result = sub_431bcc(arg1)
    
    if (result == 0)
        return result
    
    return UpdateWindow(*(arg1 + 0x14c))
}
