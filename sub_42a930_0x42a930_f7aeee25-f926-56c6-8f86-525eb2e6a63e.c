// ============================================================
// 函数名称: sub_42a930
// 虚拟地址: 0x42a930
// WARP GUID: f7aeee25-f926-56c6-8f86-525eb2e6a63e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b690
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a930(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x3c))()
    char result = (*(*arg1 + 0x3c))()
    
    if (result == 0)
        return result
    
    return sub_42b690(arg1[6], arg2)
}
