// ============================================================
// 函数名称: sub_42a90c
// 虚拟地址: 0x42a90c
// WARP GUID: 337507f5-72b5-5268-a37a-6c55ae800ec4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a90c(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x30))()
    char result = (*(*arg1 + 0x30))()
    
    if (result == 0)
        return result
    
    return sub_403e4c(arg1[6] + 0x70, arg2)
}
