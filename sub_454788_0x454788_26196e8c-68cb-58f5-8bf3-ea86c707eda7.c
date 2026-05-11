// ============================================================
// 函数名称: sub_454788
// 虚拟地址: 0x454788
// WARP GUID: 26196e8c-68cb-58f5-8bf3-ea86c707eda7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_453eb4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_454788(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (arg2 == edi[0xc])
        return 
    
    int32_t* ebx_1 = edi[9]
    int32_t eax_1
    
    if (ebx_1 != 0)
        eax_1 = (*(*ebx_1 + 0x24))()
    
    if (ebx_1 != 0 && arg2 != eax_1)
        eax_1.b = 1
    else
        eax_1 = 0
    
    char ebx_2 = eax_1.b
    
    if (ebx_2 != 0)
        sub_453eb4(edi)
    
    arg1 = edi[0xc]
    
    if (arg1 != 0)
        DeleteObject(arg1)
    
    edi[0xc] = arg2
    
    if (ebx_2 != 0)
        *(edi + 0x1a) = 1
        (*(*edi + 0x10))()
}
