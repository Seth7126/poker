// ============================================================
// 函数名称: sub_472854
// 虚拟地址: 0x472854
// WARP GUID: 2833904e-236f-5378-8c05-f01902d81a17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SwapBuffers
// [内部子函数调用]: sub_48e980, sub_48e950
// [被调用的父级函数]: sub_480534, sub_4702a8, sub_471144
// ============================================================

int32_t __convention("regparm")sub_472854(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0xcf9) != 0)
    if (*(arg1 + 0xcf9) != 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(*(arg1 + 0x2fc))
        
        if (mods.dp.d(edx_1:eax_1, 0xc8) != 0)
            return divs.dp.d(edx_1:eax_1, 0xc8)
    
    sub_48e950(arg1, 8)
    return sub_48e980(arg1, 8, SwapBuffers(*(arg1 + 0xa18)))
}
