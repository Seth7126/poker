// ============================================================
// 函数名称: sub_449c08
// 虚拟地址: 0x449c08
// WARP GUID: 94668a95-c9a8-5578-ad37-a93559c86566
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, IsWindowVisible
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449c64
// ============================================================

char __convention("regparm")sub_449c08(char arg1, void* arg2)
{
    // 第一条实际指令: BOOL eax_3 = IsWindowVisible(*(*(arg2 - 4) + 0x24))
    BOOL eax_3 = IsWindowVisible(*(*(arg2 - 4) + 0x24))
    int32_t eax_4 = neg.d(eax_3)
    char result = (neg.d(sbb.d(eax_4, eax_4, eax_3 != 0))).b
    
    if (result == data_52eaac && arg1 != data_52eaac)
        int32_t eax_6
        eax_6.b = arg1
        result = SetWindowPos(*(*(arg2 - 4) + 0x24), nullptr, 0, 0, 0, 0, 
            zx.d(*((eax_6 << 1) + &data_52eab0)))
        data_52eaac = arg1
    
    return result
}
