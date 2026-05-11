// ============================================================
// 函数名称: sub_445670
// 虚拟地址: 0x445670
// WARP GUID: 7af7962e-cb2d-5c18-bfe7-9f03fc983ceb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, IsZoomed, IsIconic
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_445670(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg2 + 8)
    int32_t eax = *(arg2 + 8)
    
    if (eax == 1)
        if (IsIconic(sub_4318d0(arg1)) == 0)
            if (IsZoomed(sub_4318d0(arg1)) == 0)
                arg1[0x85].b = 1
            else
                arg1[0x85].b = 3
        else
            arg1[0x85].b = 2
        
        return (*(*arg1 - 0x10))()
    
    if (eax != 3)
        return (*(*arg1 - 0x10))()
    
    if (arg1[0x85].b == 0)
        return eax - 3
    
    int32_t eax_11
    eax_11.b = arg1[0x85].b
    BOOL result = ShowWindow(sub_4318d0(arg1), *((eax_11 << 2) + &data_52ea14))
    arg1[0x85].b = 0
    return result
}
