// ============================================================
// 函数名称: sub_403078
// 虚拟地址: 0x403078
// WARP GUID: 5dbaef4b-af0e-59e1-9cb6-75394fc408a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c, sub_404754
// [被调用的父级函数]: sub_40b684
// ============================================================

int32_t __convention("regparm")sub_403078(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* i = arg1
    
    do
        void* esi = *i
        void* edx_1 = *(esi - 0x40)
        i = *(esi - 0x24)
        
        if (edx_1 != 0)
            sub_404754(arg1, edx_1)
            arg1 = ebx
    while (i != 0)
    
    return sub_40276c(arg1)
}
