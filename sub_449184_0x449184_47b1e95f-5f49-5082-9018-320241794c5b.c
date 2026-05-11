// ============================================================
// 函数名称: sub_449184
// 虚拟地址: 0x449184
// WARP GUID: 47b1e95f-5f49-5082-9018-320241794c5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: TranslateMessage, DispatchMessageA, PeekMessageA
// [内部子函数调用]: sub_448fe0, sub_4490e8, sub_449030, sub_448fbc
// [被调用的父级函数]: sub_44921c, sub_449234
// ============================================================

int32_t __convention("regparm")sub_449184(BOOL arg1, MSG* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t result = 0
    
    if (PeekMessageA(arg2, nullptr, 0, 0, PM_REMOVE) != 0)
        result.b = 1
        
        if (arg2->message == 0x12)
            *(arg1 + 0x8c) = 1
        else
            var_10.b = 0
            
            if (*(arg1 + 0xc2) != 0)
                *(arg1 + 0xc4)
                (*(arg1 + 0xc0))(var_10)
            
            sub_4490e8(arg1)
            
            if (sub_448fe0(arg1, arg2) == 0 && sub_449030(arg1, arg2) == 0
                    && sub_448fbc(arg1, arg2) == 0)
                TranslateMessage(arg2)
                DispatchMessageA(arg2)
    
    return result
}
