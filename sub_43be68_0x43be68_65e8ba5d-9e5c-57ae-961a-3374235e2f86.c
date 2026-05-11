// ============================================================
// 函数名称: sub_43be68
// 虚拟地址: 0x43be68
// WARP GUID: 65e8ba5d-9e5c-57ae-961a-3374235e2f86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43be68(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x58)
    void* result = *(arg1 + 0x58)
    
    if (result != 0 && *(result + 0x64) != 0)
        return *(result + 0x64)
    
    return result
}
