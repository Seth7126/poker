// ============================================================
// 函数名称: sub_42ba4c
// 虚拟地址: 0x42ba4c
// WARP GUID: 034cc594-3f49-5765-b6a5-0d7cb0b60c7c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b9cc
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42ba4c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: void* ecx = arg1[9]
    void* ecx = arg1[9]
    
    if (ecx == 0)
        return 
    
    if (arg2 == 0)
        sub_42b9cc(arg1, 0)
    else
        sub_42b9cc(arg1, *(*(ecx + 0x134) + 8) - 1)
}
