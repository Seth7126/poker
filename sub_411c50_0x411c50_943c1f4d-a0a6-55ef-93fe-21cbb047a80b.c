// ============================================================
// 函数名称: sub_411c50
// 虚拟地址: 0x411c50
// WARP GUID: 943c1f4d-a0a6-55ef-93fe-21cbb047a80b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43c480
// ============================================================

int32_t __convention("regparm")sub_411c50(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx_1 = (*(*arg1 + 0x14))() - 1
    int32_t ebx_1 = (*(*arg1 + 0x14))() - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t result = 0
        int32_t i
        
        do
            if (arg2 == (*(*arg1 + 0x18))())
                return result
            
            result += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0xffffffff
}
