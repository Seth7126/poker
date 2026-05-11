// ============================================================
// 函数名称: sub_4d6b10
// 虚拟地址: 0x4d6b10
// WARP GUID: 48b052e7-2e7f-50ef-bd35-109203455e13
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402e64, sub_47a1c0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4d6b10(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx = data_61cc24
    int32_t ebx = data_61cc24
    int32_t ebx_1 = ebx - 1
    
    if (add_overflow(ebx, 0xffffffff))
        sub_403010()
        noreturn
    
    data_61cabc
    bool o_1 = unimplemented  {imul eax, dword [0x61cabc], 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t edi = sx.d(*(*(arg1 + 0xab0) + data_61cabc * 0x81c0 + 0x8130))
    
    if (edi s>= ebx_1)
        int32_t i_1 = edi - ebx_1 + 1
        int32_t i
        
        do
            data_61cabc
            bool o_2 = unimplemented  {imul eax, dword [0x61cabc], 0x1038}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t edx_2 = sx.d(*(*(arg1 + 0xab0) + data_61cabc * 0x81c0 + 0x8130))
            
            if (add_overflow(edx_2, 0xfffffffe))
                sub_403010()
                noreturn
            
            int32_t var_28
            sub_402e64(&var_28, edx_2.b - 2, 0x20)
            bool c_1 = ebx_1 u< 0xff
            
            if (ebx_1 == 0xff || c_1)
                c_1 = test_bit(var_28, ebx_1)
            
            if (not(c_1))
                int32_t eax_2
                eax_2.b = arg2
                sub_47a1c0(ebx_1, data_61cabc, arg1, eax_2.b)
            else
                sub_47a1c0(ebx_1, data_61cabc, arg1, 1)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    char var_6
    int32_t result
    result.b = var_6
    return result
}
