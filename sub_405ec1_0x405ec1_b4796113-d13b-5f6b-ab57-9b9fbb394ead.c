// ============================================================
// 函数名称: sub_405ec1
// 虚拟地址: 0x405ec1
// WARP GUID: b4796113-d13b-5f6b-ab57-9b9fbb394ead
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_406463, sub_46abfc
// ============================================================

void __convention("regparm")sub_405ec1(void* const arg1)
{
    // 第一条实际指令: int32_t edx_1 = *(arg1 + 4)
    int32_t edx_1 = *(arg1 + 4)
    
    if (edx_1 == 0xd7b2)
        arg1 = (*(arg1 + 0x20))()
        
        if (arg1 != 0)
            return sub_402844(arg1) __tailcall
    else if (edx_1 != 0xd7b1)
        return sub_402844(0x67) __tailcall
}
