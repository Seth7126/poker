// ============================================================
// 函数名称: sub_430854
// 虚拟地址: 0x430854
// WARP GUID: 1ad3c164-d3e7-5958-aad4-54293441c4f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440ee0, sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430854(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = sub_440ee0(arg1)
    int32_t* eax_1 = sub_440ee0(arg1)
    
    if (eax_1 != 0 && arg1 != eax_1)
        int32_t* ebx
        ebx.w = 0xffb7
        return sub_4032ac(eax_1, arg2)
    
    *(arg2 + 4)
    int32_t result = sub_42c754(arg1, *(arg2 + 8))
    *(arg2 + 0xc) = 0
    return result
}
