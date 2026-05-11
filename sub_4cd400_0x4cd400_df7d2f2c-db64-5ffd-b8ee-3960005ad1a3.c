// ============================================================
// 函数名称: sub_4cd400
// 虚拟地址: 0x4cd400
// WARP GUID: df7d2f2c-db64-5ffd-b8ee-3960005ad1a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c3cc, sub_4cc7ec, sub_403010
// [被调用的父级函数]: sub_4cd498
// ============================================================

int32_t __convention("regparm")sub_4cd400(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_108
    void var_108
    __builtin_memcpy(&var_108, arg1, 0x104)
    int32_t i = arg2
    sub_52c3cc(0, 0, &var_108, 0)
    int16_t var_8
    
    if (var_8 s<= 0)
        return 0
    
    int32_t eax_1 = 1
    int32_t __saved_ebx
    
    while (i s> 1)
        int32_t i_1 = i
        i -= 1
        
        if (add_overflow(i_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t __saved_esi
        int32_t edx
        
        do
            int32_t temp1_1 = eax_1
            eax_1 += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
            
            if (eax_1 s> sx.d(var_8))
                break
            
            edx.b = (&__saved_ebx)[eax_1].b
        while (edx.b == (&__saved_esi)[eax_1].b)
    
    if (eax_1 s<= sx.d(var_8))
        return sub_4cc7ec((&__saved_ebx)[eax_1])
    
    return 0
}
