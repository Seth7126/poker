// ============================================================
// 函数名称: sub_430780
// 虚拟地址: 0x430780
// WARP GUID: 0f8c0eda-bd6e-532b-b0f9-be787d862ba9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430714
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430780(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    char result = sub_430714(arg1, arg2, ecx)
    
    if (result != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
