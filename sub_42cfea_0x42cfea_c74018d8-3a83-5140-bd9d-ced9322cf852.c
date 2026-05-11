// ============================================================
// 函数名称: sub_42cfea
// 虚拟地址: 0x42cfea
// WARP GUID: c74018d8-3a83-5140-bd9d-ced9322cf852
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42bba4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42cfea(char* arg1)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    
    if ((arg1[0x20] & 0x10) != 0 && (arg1[0x41] & 4) == 0)
        return 
    
    char ecx
    
    if (arg1[0x47] == 0 || (arg1[0x40] & 0x40) == 0)
        ecx = 0
    else
        ecx = 1
    
    sub_42bba4(arg1, 1, ecx)
}
