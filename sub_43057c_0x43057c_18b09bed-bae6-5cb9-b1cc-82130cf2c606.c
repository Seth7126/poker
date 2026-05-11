// ============================================================
// 函数名称: sub_43057c
// 虚拟地址: 0x43057c
// WARP GUID: 18b09bed-bae6-5cb9-b1cc-82130cf2c606
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440de8, sub_43057c, sub_440ee0, sub_4032ac
// [被调用的父级函数]: sub_430604, sub_43057c, sub_4305e4
// ============================================================

int32_t __convention("regparm")sub_43057c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    var_10.b = 1
    int32_t* eax_1 = sub_440ee0(arg1)
    int32_t result
    
    if (eax_1 != 0 && arg1 != eax_1 && *(eax_1 + 0x215) != 0)
        result = sub_43057c(var_10)
    
    if (eax_1 == 0 || arg1 == eax_1 || *(eax_1 + 0x215) == 0 || result.b == 0)
        result = sub_440de8(*(arg2 + 8))
        
        if ((*(arg1 + 0x41) & 0x10) == 0)
            int32_t ebx_1
            ebx_1.w = 0xffc0
            sub_4032ac(arg1, arg2 + 4, result, var_10)
        
        if ((*(arg1 + 0x41) & 0x10) != 0 || *(arg2 + 4) != 0)
            var_10.b = 0
    
    result.b = var_10.b
    return result
}
