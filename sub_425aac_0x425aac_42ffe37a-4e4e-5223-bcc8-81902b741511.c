// ============================================================
// 函数名称: sub_425aac
// 虚拟地址: 0x425aac
// WARP GUID: 42ffe37a-4e4e-5223-bcc8-81902b741511
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_426234, sub_425e67, sub_425e70
// ============================================================

void __convention("regparm")sub_425aac(LRESULT arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t ecx = ebx[0x7f]
    
    if (ecx s<= 0 || ebx[0xe] s<= 0)
        return 
    
    int32_t wParam = divs.dp.d(sx.q(ebx[0xe] + ecx - 3), ecx)
    
    if (wParam s< 1)
        wParam = 1
    
    SendMessageA(sub_4318d0(ebx), 0x195, wParam, 0)
}
