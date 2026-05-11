// ============================================================
// 函数名称: sub_4240b4
// 虚拟地址: 0x4240b4
// WARP GUID: 79e14bdf-1ecd-553c-9e47-31cff33d17a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4240b4(LRESULT arg1, char arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (arg2 == *(esi + 0x1f6))
        return 
    
    *(esi + 0x1f6) = arg2
    
    if (sub_431bcc(esi).b != 0)
        WPARAM wParam
        wParam.b = arg2
        SendMessageA(sub_4318d0(esi), 0xcf, wParam, 0)
}
