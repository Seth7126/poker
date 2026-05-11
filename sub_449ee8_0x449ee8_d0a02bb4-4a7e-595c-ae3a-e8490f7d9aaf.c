// ============================================================
// 函数名称: sub_449ee8
// 虚拟地址: 0x449ee8
// WARP GUID: d0a02bb4-4a7e-595c-ae3a-e8490f7d9aaf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449ef8
// ============================================================

int32_t __convention("regparm")sub_449ee8(int32_t arg1, int32_t __saved_edi, char arg3)
{
    // 第一条实际指令: int32_t i = __saved_edi
    int32_t i = __saved_edi
    int32_t edi = arg1
    
    while (i != 0)
        bool cond:0_1 = arg3 == *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    return i
}
