// ============================================================
// 函数名称: sub_4159b4
// 虚拟地址: 0x4159b4
// WARP GUID: 7ff7a7dd-e2b8-520d-aa30-44bdc4fbac96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegisterClassA, GetClassInfoA, UnregisterClassA
// [内部子函数调用]: sub_40782c
// [被调用的父级函数]: sub_415a3c
// ============================================================

HWNDsub_4159b4()
{
    // 第一条实际指令: data_52e388 = data_5314dc
    data_52e388 = data_5314dc
    WNDCLASSA wndClass
    BOOL eax_3 = GetClassInfoA(data_5314dc, data_52e39c, &wndClass)
    int32_t eax_4 = neg.d(eax_3)
    char eax_6 = (neg.d(sbb.d(eax_4, eax_4, eax_3 != 0))).b
    
    if (eax_6 == 0 || sub_4158b8 != wndClass.lpfnWndProc)
        if (eax_6 != 0)
            UnregisterClassA(data_52e39c, data_5314dc)
        
        RegisterClassA(0x52e378)
    
    return sub_40782c(WS_OVERLAPPED, 0x415a38, data_52e39c, 0, data_5314dc, nullptr, nullptr, 0, 0, 0, 
        0)
}
