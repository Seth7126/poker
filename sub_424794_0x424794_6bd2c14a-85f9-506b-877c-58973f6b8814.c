// ============================================================
// 函数名称: sub_424794
// 虚拟地址: 0x424794
// WARP GUID: 6bd2c14a-85f9-506b-877c-58973f6b8814
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_424794(void* arg1)
{
    // 第一条实际指令: LRESULT result = 0
    LRESULT result = 0
    
    if (sub_431bcc(*(arg1 + 0xc)) != 0)
        result = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xba, 0, 0)
        LRESULT wParam = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xbb, result - 1, 0)
        
        if (SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc1, wParam, 0) == 0)
            return result - 1
    
    return result
}
