// ============================================================
// 函数名称: sub_40d17c
// 虚拟地址: 0x40d17c
// WARP GUID: d3aebab9-22b4-5a7d-8afe-f9567beb1343
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d0e6, sub_40d148, sub_40d4a0
// ============================================================

uint32_t __convention("regparm")sub_40d17c(int32_t arg1, uint32_t arg2, int32_t arg3, char* arg4 @ edi)
{
    // 第一条实际指令: *arg4 = arg1.b
    *arg4 = arg1.b
    void* edi = &arg4[1]
    uint32_t result_2
    char entry_ebx
    
    if (entry_ebx != 0)
        result_2 = arg2
        
        if (result_2 s>= 0)
            goto label_40d18f
        
        arg1.b = 0x2d
        result_2 = neg.d(result_2)
        *edi = arg1.b
        edi += 1
    else
        result_2 = 0
    label_40d18f:
        arg1:1.b = arg1:1.b
        
        if (arg1:1.b != 0)
            arg1.b = arg1:1.b
            *edi = arg1.b
            edi += 1
    
    uint32_t result_1 = result_2
    uint32_t result = result_1
    int32_t* i = &result
    
    while (true)
        int32_t edx_1 = 0
        *i = (modu.dp.d(edx_1:result_1, 0xa)).b + 0x30
        i += 1
        arg3 -= 1
        result_1 = divu.dp.d(edx_1:result_1, 0xa)
        
        if (result_1 == 0)
            if (arg3 s<= 0)
                break
    
    do
        i -= 1
        result_1.b = *i
        *edi = result_1.b
        edi += 1
    while (i != &result)
    
    return result
}
