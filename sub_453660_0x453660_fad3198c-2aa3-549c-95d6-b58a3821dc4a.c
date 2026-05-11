// ============================================================
// 函数名称: sub_453660
// 虚拟地址: 0x453660
// WARP GUID: fad3198c-2aa3-549c-95d6-b58a3821dc4a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454540, sub_403248, sub_410b1c, sub_45455c, sub_41d044, sub_41d040
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_453660(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x453344) == 0)
    if (sub_403248(arg2, 0x453344) == 0)
        int32_t ecx
        
        if (sub_403248(arg2, 0x417a7c) == 0)
            return sub_410b1c(ecx, arg2)
        sub_45455c(arg1)
        sub_454540(arg1)
        return (*(**(arg1 + 0x24) + 8))()
    
    sub_41d044(*(arg1 + 0x20))
    void* result = arg2[8]
    *(arg1 + 0x20) = result
    sub_41d040(result)
    
    if (arg2[9] == 0)
        return result
    
    sub_454540(arg1)
    arg2[9]
    return (*(**(arg1 + 0x24) + 8))()
}
