// ============================================================
// 函数名称: sub_4923b8
// 虚拟地址: 0x4923b8
// WARP GUID: 85b17012-bae5-510e-a48a-0c38e9bb3f14
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b994, sub_491e20, sub_40faac
// [被调用的父级函数]: sub_4924a0, sub_4924b0
// ============================================================

int32_t __convention("regparm")sub_4923b8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t ebx = 0
    
    do
        int32_t eax
        eax.b = ebx.b
        
        if (arg1[eax * 4 + 0x7e].b != 0)
            if (edi s<= arg2 && arg2 s<= arg1[0xa9] + edi)
                int32_t result
                
                if (arg1[0xc1].b == 0)
                    int32_t eax_5
                    eax_5.b = ebx.b
                    result = eax_5 * 2
                    
                    if (*(&arg1[result * 2] + 0x1f9) == 0)
                        return result
                else
                    int32_t eax_4
                    eax_4.b = ebx.b
                    result = eax_4 * 2
                    
                    if (*(&arg1[result * 2] + 0x1fb) == 0)
                        return result
                break
            
            edi += arg1[0xa9] - 1
        
        ebx += 1
    while (ebx.b != 9)
    
    char eax_8 = ebx.b
    *(arg1 + 0x292) = eax_8
    
    if (eax_8 != arg1[0xb2].b)
        arg1[0xb2].b = eax_8
        (*(*arg1 + 0xb4))()
    
    void var_1c
    sub_40faac(arg1[0xa9] + edi, 0, edi, &var_1c, arg1[0xf])
    __builtin_memcpy(&arg1[0xa5], &var_1c, 0x10)
    arg1[0xa4].b = 1
    *(arg1 + 0x291) = 1
    sub_491e20(arg1, ebx.b, edi)
    return sub_42b994(arg1, 1)
}
