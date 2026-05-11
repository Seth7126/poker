// ============================================================
// 函数名称: sub_430da8
// 虚拟地址: 0x430da8
// WARP GUID: 47dd7b9f-b453-5d9b-a7d5-1817ea0477ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42d144, sub_42f1d4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430da8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char result
    char result
    int32_t ecx
    result, ecx = sub_42f1d4(arg1, arg2)
    
    if (result != 0)
        return result
    
    return sub_42d144(ecx, arg2)
}
