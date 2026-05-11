// ============================================================
// 函数名称: sub_447370
// 虚拟地址: 0x447370
// WARP GUID: 7a03770f-662f-5291-b7fd-9225d7597b8a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadCursorA, DestroyCursor
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_4470f0
// ============================================================

HCURSOR __convention("regparm")sub_447370(void* arg1)
{
    // 第一条实际指令: int32_t* i_1
    int32_t* i_1
    
    for (int32_t* i = *(arg1 + 0x50); i != 0; i = i_1)
        int32_t eax = i[1]
        
        if (eax s< 0xffffffef)
            if (eax == 0xffffffeb || eax s> 0)
                DestroyCursor(i[2])
        else if (eax s<= 0xfffffff4 || eax == 0xffffffeb || eax s> 0)
            DestroyCursor(i[2])
        
        i_1 = *i
        sub_40276c(i)
    
    HCURSOR result = LoadCursorA(nullptr, 0x7f00)
    HCURSOR hCursor = *(arg1 + 0x54)
    
    if (result == hCursor)
        return result
    
    return DestroyCursor(hCursor)
}
