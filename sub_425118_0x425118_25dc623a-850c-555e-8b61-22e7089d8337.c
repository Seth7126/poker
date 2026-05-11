// ============================================================
// 函数名称: sub_425118
// 虚拟地址: 0x425118
// WARP GUID: 25dc623a-850c-555e-8b61-22e7089d8337
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA, SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_425118(int32_t* arg1, char arg2)
{
    // 第一条实际指令: LRESULT result = sub_431bcc(arg1)
    LRESULT result = sub_431bcc(arg1)
    
    if (result.b != 0)
        int32_t esi
        
        if (arg2 == 0)
            esi = 0
        else
            esi.w = 1
        
        result = GetWindowLongA(sub_4318d0(arg1), 0xfffffff0) & 0xf
        uint32_t wParam = zx.d(esi.w)
        
        if (result != wParam)
            return SendMessageA(sub_4318d0(arg1), 0xf4, wParam, 1)
    
    return result
}
